#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

/*
 * NEON//SURVIVOR
 * Single-file C11 terminal arcade game for Windows + MSYS2 UCRT64 GCC.
 * Controls: WASD/Arrow keys move, SPACE fires, P pauses, ESC returns/exits.
 */

#define SCREEN_W 80
#define SCREEN_H 28
#define ARENA_LEFT 2
#define ARENA_RIGHT 77
#define ARENA_TOP 5
#define ARENA_BOTTOM 23
#define MAX_ENEMIES 32
#define MAX_BULLETS 64
#define MAX_PARTICLES 70
#define MAX_POWERUPS 8
#define HIGH_SCORE_FILE "neon_survivor_score.dat"

#define C_RESET   "\x1b[0m"
#define C_CYAN    "\x1b[96m"
#define C_MAGENTA "\x1b[95m"
#define C_RED     "\x1b[91m"
#define C_YELLOW  "\x1b[93m"
#define C_GREEN   "\x1b[92m"
#define C_WHITE   "\x1b[97m"
#define C_BLUE    "\x1b[94m"
#define C_DIM     "\x1b[90m"

typedef enum { COL_DEFAULT, COL_CYAN, COL_MAGENTA, COL_RED, COL_YELLOW, COL_GREEN, COL_WHITE, COL_BLUE, COL_DIM } Color;
typedef enum { MODE_MENU, MODE_HELP, MODE_PLAYING, MODE_PAUSED, MODE_GAMEOVER, MODE_QUIT } Mode;
typedef enum { POWER_HEAL, POWER_SHIELD, POWER_RAPID } PowerType;

typedef struct { int x, y; int active; } Bullet;
typedef struct { int x, y; int hp; int active; unsigned long long next_move; } Enemy;
typedef struct { int x, y; char glyph; Color color; int life; int active; } Particle;
typedef struct { int x, y; PowerType type; int active; } PowerUp;

typedef struct {
    int x, y, hp, max_hp;
    int score, level, combo, combo_timer;
    int rapid_timer, shield_timer, invuln_timer;
    int fire_cooldown;
    unsigned long long start_time;
    unsigned long long last_spawn;
    unsigned long long last_level;
    int kills;
} Player;

static char screen[SCREEN_H][SCREEN_W + 1];
static Color colors[SCREEN_H][SCREEN_W];
static HANDLE hOut;
static DWORD oldConsoleMode;
static CONSOLE_CURSOR_INFO oldCursorInfo;
static int consoleReady = 0;
static Mode mode = MODE_MENU;
static Player player;
static Enemy enemies[MAX_ENEMIES];
static Bullet bullets[MAX_BULLETS];
static Particle particles[MAX_PARTICLES];
static PowerUp powerups[MAX_POWERUPS];
static int highScore = 0;
static int lastScore = 0;
static int wantExit = 0;

static unsigned long long now_ms(void) {
    return GetTickCount64();
}

static void console_init(void) {
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE || hOut == NULL) return;

    DWORD modeFlags = 0;
    if (GetConsoleMode(hOut, &modeFlags)) {
        oldConsoleMode = modeFlags;
        modeFlags |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        if (SetConsoleMode(hOut, modeFlags)) consoleReady = 1;
    }

    CONSOLE_CURSOR_INFO ci;
    if (GetConsoleCursorInfo(hOut, &ci)) {
        oldCursorInfo = ci;
        ci.bVisible = FALSE;
        SetConsoleCursorInfo(hOut, &ci);
    }

    /* ANSI fallback is still usable in modern Windows Terminal. */
    printf("\x1b[2J\x1b[H");
    fflush(stdout);
}

static void console_restore(void) {
    if (consoleReady) SetConsoleMode(hOut, oldConsoleMode);
    if (hOut && hOut != INVALID_HANDLE_VALUE) {
        SetConsoleCursorInfo(hOut, &oldCursorInfo);
    }
    printf(C_RESET "\x1b[?25h\x1b[0m\n");
    fflush(stdout);
}

static void set_color(Color c) {
    switch (c) {
        case COL_CYAN:    printf(C_CYAN); break;
        case COL_MAGENTA: printf(C_MAGENTA); break;
        case COL_RED:     printf(C_RED); break;
        case COL_YELLOW:  printf(C_YELLOW); break;
        case COL_GREEN:   printf(C_GREEN); break;
        case COL_WHITE:   printf(C_WHITE); break;
        case COL_BLUE:    printf(C_BLUE); break;
        case COL_DIM:     printf(C_DIM); break;
        default:          printf(C_RESET); break;
    }
}

static void clear_buffer(void) {
    for (int y = 0; y < SCREEN_H; ++y) {
        for (int x = 0; x < SCREEN_W; ++x) {
            screen[y][x] = ' ';
            colors[y][x] = COL_DEFAULT;
        }
        screen[y][SCREEN_W] = '\0';
    }
}

static void put_char(int x, int y, char ch, Color color) {
    if (x < 0 || x >= SCREEN_W || y < 0 || y >= SCREEN_H) return;
    screen[y][x] = ch;
    colors[y][x] = color;
}

static void put_text(int x, int y, const char *s, Color color) {
    if (!s || y < 0 || y >= SCREEN_H) return;
    for (int i = 0; s[i] && x + i < SCREEN_W; ++i) {
        if (x + i >= 0) put_char(x + i, y, s[i], color);
    }
}

static void put_center(int y, const char *s, Color color) {
    int x = (SCREEN_W - (int)strlen(s)) / 2;
    put_text(x, y, s, color);
}

static void render(void) {
    printf("\x1b[H");
    for (int y = 0; y < SCREEN_H; ++y) {
        Color current = (Color)-1;
        for (int x = 0; x < SCREEN_W; ++x) {
            if (colors[y][x] != current) {
                current = colors[y][x];
                set_color(current);
            }
            putchar(screen[y][x]);
        }
        printf(C_RESET "\x1b[K\r\n");
    }
    fflush(stdout);
}

static void load_high_score(void) {
    FILE *f = fopen(HIGH_SCORE_FILE, "rb");
    if (f) {
        int value = 0;
        if (fread(&value, sizeof(value), 1, f) == 1 && value >= 0 && value < 100000000)
            highScore = value;
        fclose(f);
    }
}

static void save_high_score(void) {
    if (lastScore <= highScore) return;
    FILE *f = fopen(HIGH_SCORE_FILE, "wb");
    if (f) {
        if (fwrite(&lastScore, sizeof(lastScore), 1, f) == 1) highScore = lastScore;
        fclose(f);
    }
}

static int random_range(int min, int max) {
    if (max <= min) return min;
    return min + rand() % (max - min + 1);
}

static void reset_game(void) {
    memset(&player, 0, sizeof(player));
    memset(enemies, 0, sizeof(enemies));
    memset(bullets, 0, sizeof(bullets));
    memset(particles, 0, sizeof(particles));
    memset(powerups, 0, sizeof(powerups));

    player.x = (ARENA_LEFT + ARENA_RIGHT) / 2;
    player.y = (ARENA_TOP + ARENA_BOTTOM) / 2;
    player.hp = player.max_hp = 3;
    player.level = 1;
    player.start_time = now_ms();
    player.last_spawn = player.start_time;
    player.last_level = player.start_time;
    mode = MODE_PLAYING;
}

static void spawn_particles(int x, int y, int count, Color color, char glyph) {
    for (int n = 0; n < count; ++n) {
        for (int i = 0; i < MAX_PARTICLES; ++i) {
            if (!particles[i].active) {
                particles[i].x = x + random_range(-1, 1);
                particles[i].y = y + random_range(-1, 1);
                particles[i].glyph = glyph;
                particles[i].color = color;
                particles[i].life = random_range(3, 9);
                particles[i].active = 1;
                break;
            }
        }
    }
}

static void spawn_enemy(void) {
    for (int i = 0; i < MAX_ENEMIES; ++i) {
        if (!enemies[i].active) {
            int side = random_range(0, 3);
            int x = ARENA_LEFT + 1, y = ARENA_TOP + 1;
            if (side == 0) { x = random_range(ARENA_LEFT + 1, ARENA_RIGHT - 1); y = ARENA_TOP + 1; }
            if (side == 1) { x = random_range(ARENA_LEFT + 1, ARENA_RIGHT - 1); y = ARENA_BOTTOM - 1; }
            if (side == 2) { x = ARENA_LEFT + 1; y = random_range(ARENA_TOP + 1, ARENA_BOTTOM - 1); }
            if (side == 3) { x = ARENA_RIGHT - 1; y = random_range(ARENA_TOP + 1, ARENA_BOTTOM - 1); }
            enemies[i].x = x;
            enemies[i].y = y;
            enemies[i].hp = (player.level >= 5 && random_range(0, 3) == 0) ? 2 : 1;
            enemies[i].active = 1;
            enemies[i].next_move = now_ms() + (unsigned long long)random_range(100, 300);
            break;
        }
    }
}

static void spawn_powerup(int x, int y) {
    if (random_range(0, 99) >= 22) return;
    for (int i = 0; i < MAX_POWERUPS; ++i) {
        if (!powerups[i].active) {
            powerups[i].x = x;
            powerups[i].y = y;
            powerups[i].type = (PowerType)random_range(0, 2);
            powerups[i].active = 1;
            return;
        }
    }
}

static void fire_bullet(void) {
    if (player.fire_cooldown > 0) return;
    for (int i = 0; i < MAX_BULLETS; ++i) {
        if (!bullets[i].active) {
            bullets[i].x = player.x;
            bullets[i].y = player.y - 1;
            bullets[i].active = 1;
            player.fire_cooldown = player.rapid_timer > 0 ? 3 : 7;
            spawn_particles(player.x, player.y - 1, 2, COL_CYAN, '.');
            return;
        }
    }
}

static void damage_player(void) {
    if (player.invuln_timer > 0 || player.shield_timer > 0) return;
    player.hp--;
    player.combo = 0;
    player.combo_timer = 0;
    player.invuln_timer = 65;
    spawn_particles(player.x, player.y, 12, COL_RED, '*');
    if (player.hp <= 0) {
        lastScore = player.score;
        save_high_score();
        mode = MODE_GAMEOVER;
    }
}

static void update_game(void) {
    unsigned long long now = now_ms();

    if (player.fire_cooldown > 0) player.fire_cooldown--;
    if (player.invuln_timer > 0) player.invuln_timer--;
    if (player.shield_timer > 0) player.shield_timer--;
    if (player.rapid_timer > 0) player.rapid_timer--;
    if (player.combo_timer > 0) player.combo_timer--;
    else player.combo = 0;

    int spawnDelay = 1000 - player.level * 55;
    if (spawnDelay < 260) spawnDelay = 260;
    if (now - player.last_spawn >= (unsigned long long)spawnDelay) {
        spawn_enemy();
        player.last_spawn = now;
    }

    if (now - player.last_level >= 18000) {
        player.level++;
        if (player.level > 20) player.level = 20;
        player.last_level = now;
        spawn_particles(player.x, player.y, 18, COL_YELLOW, '+');
    }

    for (int i = 0; i < MAX_BULLETS; ++i) {
        if (!bullets[i].active) continue;
        bullets[i].y--;
        if (bullets[i].y <= ARENA_TOP) {
            bullets[i].active = 0;
            continue;
        }
        for (int j = 0; j < MAX_ENEMIES; ++j) {
            if (enemies[j].active && bullets[i].x == enemies[j].x && bullets[i].y == enemies[j].y) {
                bullets[i].active = 0;
                enemies[j].hp--;
                spawn_particles(enemies[j].x, enemies[j].y, 4, COL_MAGENTA, '*');
                if (enemies[j].hp <= 0) {
                    int ex = enemies[j].x, ey = enemies[j].y;
                    enemies[j].active = 0;
                    player.kills++;
                    player.combo++;
                    player.combo_timer = 75;
                    player.score += 10 + (player.combo > 1 ? player.combo * 2 : 0) + player.level;
                    spawn_particles(ex, ey, 10, COL_MAGENTA, '+');
                    spawn_powerup(ex, ey);
                }
                break;
            }
        }
    }

    for (int i = 0; i < MAX_ENEMIES; ++i) {
        if (!enemies[i].active || now < enemies[i].next_move) continue;
        int dx = (player.x > enemies[i].x) - (player.x < enemies[i].x);
        int dy = (player.y > enemies[i].y) - (player.y < enemies[i].y);
        if (random_range(0, 1) == 0) {
            enemies[i].x += dx;
            if (enemies[i].x < ARENA_LEFT + 1) enemies[i].x = ARENA_LEFT + 1;
            if (enemies[i].x > ARENA_RIGHT - 1) enemies[i].x = ARENA_RIGHT - 1;
        } else {
            enemies[i].y += dy;
            if (enemies[i].y < ARENA_TOP + 1) enemies[i].y = ARENA_TOP + 1;
            if (enemies[i].y > ARENA_BOTTOM - 1) enemies[i].y = ARENA_BOTTOM - 1;
        }
        int speed = 300 - player.level * 8;
        if (speed < 90) speed = 90;
        enemies[i].next_move = now + (unsigned long long)speed;

        if (enemies[i].x == player.x && enemies[i].y == player.y) {
            enemies[i].active = 0;
            damage_player();
        }
    }

    for (int i = 0; i < MAX_POWERUPS; ++i) {
        if (powerups[i].active && powerups[i].x == player.x && powerups[i].y == player.y) {
            switch (powerups[i].type) {
                case POWER_HEAL:
                    if (player.hp < player.max_hp) player.hp++;
                    player.score += 15;
                    spawn_particles(player.x, player.y, 8, COL_GREEN, '+');
                    break;
                case POWER_SHIELD:
                    player.shield_timer = 250;
                    player.score += 10;
                    spawn_particles(player.x, player.y, 8, COL_BLUE, 'o');
                    break;
                case POWER_RAPID:
                    player.rapid_timer = 250;
                    player.score += 10;
                    spawn_particles(player.x, player.y, 8, COL_YELLOW, '*');
                    break;
            }
            powerups[i].active = 0;
        }
    }

    for (int i = 0; i < MAX_PARTICLES; ++i) {
        if (particles[i].active && --particles[i].life <= 0) particles[i].active = 0;
    }
}

static void draw_border(void) {
    for (int x = ARENA_LEFT; x <= ARENA_RIGHT; ++x) {
        put_char(x, ARENA_TOP, '=', COL_BLUE);
        put_char(x, ARENA_BOTTOM, '=', COL_BLUE);
    }
    for (int y = ARENA_TOP; y <= ARENA_BOTTOM; ++y) {
        put_char(ARENA_LEFT, y, '|', COL_BLUE);
        put_char(ARENA_RIGHT, y, '|', COL_BLUE);
    }
    put_char(ARENA_LEFT, ARENA_TOP, '+', COL_CYAN);
    put_char(ARENA_RIGHT, ARENA_TOP, '+', COL_CYAN);
    put_char(ARENA_LEFT, ARENA_BOTTOM, '+', COL_CYAN);
    put_char(ARENA_RIGHT, ARENA_BOTTOM, '+', COL_CYAN);
}

static void draw_game(void) {
    clear_buffer();
    put_text(2, 0, "NEON//SURVIVOR", COL_CYAN);
    char hud[SCREEN_W];
    snprintf(hud, sizeof(hud), "SCORE %06d  HI %06d  LV %02d  HP %d/%d",
             player.score, highScore, player.level, player.hp, player.max_hp);
    put_text(29, 0, hud, COL_WHITE);
    snprintf(hud, sizeof(hud), "COMBO x%d", player.combo);
    put_text(2, 2, hud, player.combo > 1 ? COL_YELLOW : COL_DIM);
    if (player.shield_timer > 0) put_text(20, 2, "SHIELD", COL_BLUE);
    if (player.rapid_timer > 0) put_text(30, 2, "RAPID FIRE", COL_YELLOW);
    put_text(53, 2, "WASD MOVE  SPACE FIRE", COL_DIM);

    draw_border();

    for (int i = 0; i < MAX_POWERUPS; ++i) {
        if (!powerups[i].active) continue;
        char g = powerups[i].type == POWER_HEAL ? '+' :
                 powerups[i].type == POWER_SHIELD ? 'O' : '*';
        Color c = powerups[i].type == POWER_HEAL ? COL_GREEN :
                  powerups[i].type == POWER_SHIELD ? COL_BLUE : COL_YELLOW;
        put_char(powerups[i].x, powerups[i].y, g, c);
    }
    for (int i = 0; i < MAX_BULLETS; ++i)
        if (bullets[i].active) put_char(bullets[i].x, bullets[i].y, '|', COL_CYAN);
    for (int i = 0; i < MAX_ENEMIES; ++i) {
        if (enemies[i].active)
            put_char(enemies[i].x, enemies[i].y, enemies[i].hp > 1 ? 'W' : 'x',
                     enemies[i].hp > 1 ? COL_RED : COL_MAGENTA);
    }
    for (int i = 0; i < MAX_PARTICLES; ++i) {
        if (particles[i].active)
            put_char(particles[i].x, particles[i].y, particles[i].glyph, particles[i].color);
    }

    if (player.invuln_timer == 0 || (player.invuln_timer / 5) % 2 == 0) {
        put_char(player.x, player.y, player.shield_timer > 0 ? '@' : 'A',
                 player.shield_timer > 0 ? COL_BLUE : COL_GREEN);
    }

    put_text(2, 25, "P: PAUSE   ESC: MENU   + HEAL   O SHIELD   * RAPID FIRE", COL_DIM);
    put_text(2, 26, "Destroy the drones. Every kill adds score; survive to increase your level.", COL_DIM);
    render();
}

static void draw_menu(void) {
    clear_buffer();
    put_center(3, " _   _ _____ ___  _   _   __   __", COL_CYAN);
    put_center(4, "| \\ | | ____/ _ \\| \\ | |  \\ \\ / /", COL_CYAN);
    put_center(5, "|  \\| |  _|| | | |  \\| |   \\ V / ", COL_MAGENTA);
    put_center(6, "| |\\  | |__| |_| | |\\  |    | |  ", COL_MAGENTA);
    put_center(7, "|_| \\_|_____\\___/|_| \\_|    |_|  ", COL_CYAN);
    put_center(9, "// S U R V I V O R //", COL_WHITE);
    put_center(12, "A CYBERPUNK ASCII SURVIVAL ARCADE", COL_DIM);
    put_center(15, "[ ENTER ]  START GAME", COL_GREEN);
    put_center(17, "[ H ]      HOW TO PLAY", COL_CYAN);
    put_center(19, "[ ESC ]    EXIT", COL_RED);
    char s[80];
    snprintf(s, sizeof(s), "LOCAL HIGH SCORE: %d", highScore);
    put_center(22, s, COL_YELLOW);
    put_center(25, "MSYS2 UCRT64 EDITION  |  C11", COL_DIM);
    render();
}

static void draw_help(void) {
    clear_buffer();
    put_center(3, "HOW TO PLAY", COL_CYAN);
    put_text(14, 7, "W A S D  or ARROW KEYS : Move around the arena", COL_WHITE);
    put_text(14, 9, "SPACE                  : Fire an energy pulse", COL_CYAN);
    put_text(14, 11, "P                      : Pause / resume", COL_YELLOW);
    put_text(14, 13, "ESC                    : Return to menu", COL_RED);
    put_text(14, 16, "x / W enemies chase you. Avoid contact or lose HP.", COL_MAGENTA);
    put_text(14, 18, "+ heal, O shield, * rapid-fire power-ups.", COL_GREEN);
    put_text(14, 20, "Kills build a combo. Survive to gain levels.", COL_WHITE);
    put_center(24, "PRESS ANY KEY TO RETURN", COL_DIM);
    render();
}

static void draw_pause(void) {
    draw_game();
    put_center(12, "=== PAUSED ===", COL_YELLOW);
    put_center(14, "Press P to resume or ESC for menu", COL_WHITE);
    render();
}

static void draw_gameover(void) {
    clear_buffer();
    put_center(7, "SIGNAL LOST", COL_RED);
    put_center(9, "GAME OVER", COL_MAGENTA);
    char s[80];
    snprintf(s, sizeof(s), "SCORE: %d", lastScore);
    put_center(12, s, COL_WHITE);
    snprintf(s, sizeof(s), "HIGH SCORE: %d", highScore);
    put_center(14, s, COL_YELLOW);
    put_center(18, "[ ENTER ] PLAY AGAIN", COL_GREEN);
    put_center(20, "[ M ] MENU", COL_CYAN);
    put_center(22, "[ ESC ] EXIT", COL_RED);
    render();
}

/* Returns normalized key values for arrows; ordinary keys are lowercase. */
static int read_key(void) {
    if (!_kbhit()) return 0;
    int c = _getch();
    if (c == 0 || c == 224) {
        int a = _getch();
        switch (a) {
            case 72: return 'w';
            case 80: return 's';
            case 75: return 'a';
            case 77: return 'd';
            default: return 0;
        }
    }
    if (c == 27) return 27;
    if (c == 13) return 13;
    if (c >= 'A' && c <= 'Z') c += ('a' - 'A');
    return c;
}

static void move_player(int dx, int dy) {
    player.x += dx;
    player.y += dy;
    if (player.x < ARENA_LEFT + 1) player.x = ARENA_LEFT + 1;
    if (player.x > ARENA_RIGHT - 1) player.x = ARENA_RIGHT - 1;
    if (player.y < ARENA_TOP + 1) player.y = ARENA_TOP + 1;
    if (player.y > ARENA_BOTTOM - 1) player.y = ARENA_BOTTOM - 1;
}

static void handle_play_key(int key) {
    switch (key) {
        case 'w': move_player(0, -1); break;
        case 's': move_player(0, 1); break;
        case 'a': move_player(-1, 0); break;
        case 'd': move_player(1, 0); break;
        case ' ': fire_bullet(); break;
        case 'p': mode = MODE_PAUSED; break;
        case 27: mode = MODE_MENU; break;
        default: break;
    }
}

int main(void) {
    srand((unsigned int)time(NULL));
    console_init();
    load_high_score();

    while (mode != MODE_QUIT) {
        int key = read_key();

        switch (mode) {
            case MODE_MENU:
                draw_menu();
                if (key == 13) reset_game();
                else if (key == 'h') mode = MODE_HELP;
                else if (key == 27 || key == 'q') mode = MODE_QUIT;
                Sleep(25);
                break;

            case MODE_HELP:
                draw_help();
                if (key) mode = MODE_MENU;
                Sleep(25);
                break;

            case MODE_PLAYING:
                if (key) handle_play_key(key);
                if (mode == MODE_PLAYING) {
                    update_game();
                    draw_game();
                }
                Sleep(35);
                break;

            case MODE_PAUSED:
                draw_pause();
                if (key == 'p') mode = MODE_PLAYING;
                else if (key == 27) mode = MODE_MENU;
                Sleep(25);
                break;

            case MODE_GAMEOVER:
                draw_gameover();
                if (key == 13) reset_game();
                else if (key == 'm') mode = MODE_MENU;
                else if (key == 27 || key == 'q') mode = MODE_QUIT;
                Sleep(25);
                break;

            case MODE_QUIT:
            default:
                break;
        }
    }

    console_restore();
    return 0;
}
