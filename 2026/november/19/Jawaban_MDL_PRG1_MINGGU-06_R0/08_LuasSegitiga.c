/*
Pseudocode:
Program HitungLuasSegitiga

DEKLARASI:
    alas, tinggi, luas : real

PROCEDURE HitungLuasSegitiga(alas, tinggi : real; luas : output real)
    luas <- alas * tinggi / 2

ALGORITMA:
    read alas, tinggi
    call HitungLuasSegitiga(alas, tinggi, luas)
    write luas
*/
#include <stdio.h>

void HitungLuasSegitiga(float alas, float tinggi, float *luas);

int main(void)
{
    float alas;
    float tinggi;
    float luas;

    printf("Alas segitiga = ");
    scanf("%f", &alas);
    printf("Tinggi segitiga = ");
    scanf("%f", &tinggi);

    HitungLuasSegitiga(alas, tinggi, &luas);
    printf("Luas segitiga = %.2f\n", luas);

    return 0;
}

void HitungLuasSegitiga(float alas, float tinggi, float *luas)
{
    *luas = alas * tinggi / 2;
}
