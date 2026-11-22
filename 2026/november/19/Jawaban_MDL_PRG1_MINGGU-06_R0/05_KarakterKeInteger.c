/*
Pseudocode:
Program KonversiKarakterKeInteger

DEKLARASI:
    cc : character
    hasil : integer

function KarakterKeInteger(cc : character) -> integer
    if cc < '0' or cc > '9' then
        return -1
    return cc - '0'

ALGORITMA:
    read cc
    hasil <- KarakterKeInteger(cc)
    if hasil = -1 then
        write "Karakter bukan angka"
    else
        write hasil
*/
#include <stdio.h>
int KarakterKeInteger(char cc);
int main(void)
{
    char cc;
    int hasil;
    printf("Masukkan satu karakter angka (0..9) = ");
    scanf(" %c", &cc);
    hasil = KarakterKeInteger(cc);
    if (hasil == -1)
        printf("Karakter bukan angka\n");
    else
        printf("Nilai integer = %d\n", hasil);
    return 0;
}

int KarakterKeInteger(char cc)
{
    if (cc < '0' || cc > '9')
        return -1;
    return cc - '0';
}
