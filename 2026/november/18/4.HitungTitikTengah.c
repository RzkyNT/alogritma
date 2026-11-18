/* PROGRAM MenghitungTitikTengah
{ Program utama untuk membaca dua buah titik, menghitung titik tengahnya,
  dan mencetak titik tengah tersebut } */

#include <stdio.h>

typedef struct {
    float x;
    float y;
} Titik;

/* Deklarasi purwarupa fungsi yang digunakan */
Titik TitikTengah(Titik P1, Titik P2);
/* { mengembalikan titik tengah dari P1 dan P2 } */

int main()
{
    /* DEKLARASI */
    Titik P1, P2;
    Titik Pt;      /* Titik tengah */

    /* PROGRAM UTAMA */
    printf("Titik P1 : \n");
    printf(" x = "); scanf("%f", &P1.x);
    printf(" y = "); scanf("%f", &P1.y);

    printf("Titik P2 : \n");
    printf(" x = "); scanf("%f", &P2.x);
    printf(" y = "); scanf("%f", &P2.y);

    Pt = TitikTengah(P1, P2);
    printf("Titik tengah : (%f,%f) \n", Pt.x, Pt.y);

    return 0;
}

Titik TitikTengah(Titik P1, Titik P2)
/* { mengembalikan titik tengah dari P1 dan P2 } */
{
    /* DEKLARASI */
    Titik Pt;

    /* ALGORITMA */
    Pt.x = (P1.x + P2.x) / 2;
    Pt.y = (P1.y + P2.y) / 2;
    return Pt;
}
