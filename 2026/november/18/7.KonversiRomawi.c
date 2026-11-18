/*
function roman(angka : integer) -> string
{ menerima angka desimal (1..10) dan mengembalikan angka romawinya }

DEKLARASI:
    { tidak ada }

ALGORITMA:
    depend on (angka)
        1  : return "I"
        2  : return "II"
        3  : return "III"
        4  : return "IV"
        5  : return "V"
        6  : return "VI"
        7  : return "VII"
        8  : return "VIII"
        9  : return "IX"
        10 : return "X"
        otherwise : return "Angka di luar jangkauan"
    end depend
*/

/* PROGRAM KonversiRomawi */
/* Program utama untuk mengubah angka desimal 1..10 ke angka Romawi */

#include <stdio.h>

/* Deklarasi purwarupa fungsi */
const char* roman(int angka);

int main() {
    /* DEKLARASI */
    int n;

    /* ALGORITMA */
    printf("Masukkan angka (1..10) = ");
    scanf("%d", &n);

    printf("Angka Romawi = %s \n", roman(n));

    return 0;
}

const char* roman(int angka) {
/* menerima angka desimal (1..10) dan mengembalikan angka romawinya */
    /* DEKLARASI */
    /* tidak ada */

    /* ALGORITMA */
    switch (angka) {
        case 1:  return "I";
        case 2:  return "II";
        case 3:  return "III";
        case 4:  return "IV";
        case 5:  return "V";
        case 6:  return "VI";
        case 7:  return "VII";
        case 8:  return "VIII";
        case 9:  return "IX";
        case 10: return "X";
        default: return "Angka di luar jangkauan";
    }
}
