/*
function apakah_i(c : character) -> boolean
{ memberikan nilai true jika karakter c adalah 'i', dan false jika tidak }

DEKLARASI:
    { tidak ada }

ALGORITMA:
    if (c = 'i') then
        return true
    else
        return false
    endif
*/

/* PROGRAM CekKarakterI */
/* Program utama untuk memeriksa apakah karakter input adalah 'i' */

#include <stdio.h>

typedef enum {false=0, true=1} boolean;

/* Deklarasi purwarupa fungsi */
boolean apakah_i(char c);

int main() {
    /* DEKLARASI */
    char huruf;

    /* ALGORITMA */
    printf("Masukkan sebuah karakter = ");
    scanf(" %c", &huruf);

    if (apakah_i(huruf)) {
        printf("true (Karakter adalah 'i')\n");
    } else {
        printf("false (Karakter bukan 'i')\n");
    }

    return 0;
}

boolean apakah_i(char c) {
/* memberikan nilai true jika karakter c adalah 'i', dan false jika tidak */
    /* DEKLARASI */
    /* tidak ada */

    /* ALGORITMA */
    if (c == 'i')
        return true;
    else
        return false;
}
