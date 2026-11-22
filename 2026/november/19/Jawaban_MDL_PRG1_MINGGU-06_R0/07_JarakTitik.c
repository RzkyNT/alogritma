/*
Pseudocode:
Program MenghitungJarakTitik

DEKLARASI:
    type Titik : record < x : real, y : real >
    P1, P2 : Titik
    hasil : real

function jarak(P1, P2 : Titik) -> real
    dx <- P1.x - P2.x
    dy <- P1.y - P2.y
    return sqrt(dx * dx + dy * dy)

ALGORITMA:
    read P1.x, P1.y, P2.x, P2.y
    hasil <- jarak(P1, P2)
    write hasil
*/
#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Titik;

float jarak(Titik P1, Titik P2);

int main(void)
{
    Titik P1;
    Titik P2;

    printf("Titik P1:\n");
    printf("x = ");
    scanf("%f", &P1.x);
    printf("y = ");
    scanf("%f", &P1.y);

    printf("Titik P2:\n");
    printf("x = ");
    scanf("%f", &P2.x);
    printf("y = ");
    scanf("%f", &P2.y);

    printf("Jarak kedua titik = %.2f\n", jarak(P1, P2));

    return 0;
}

float jarak(Titik P1, Titik P2)
{
    float dx = P1.x - P2.x;
    float dy = P1.y - P2.y;

    return (float)sqrt(dx * dx + dy * dy);
}
