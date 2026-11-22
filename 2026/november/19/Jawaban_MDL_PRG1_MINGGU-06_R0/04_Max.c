/*
Pseudocode:
Program NilaiMaksimum

DEKLARASI:
    bilangan1, bilangan2, hasil : integer

function Max(bilangan1, bilangan2 : integer) -> integer
    if bilangan1 >= bilangan2 then
        return bilangan1
    else
        return bilangan2

ALGORITMA:
    read bilangan1, bilangan2
    hasil <- Max(bilangan1, bilangan2)
    write hasil
*/
#include <stdio.h>

int Max(int bilangan1, int bilangan2);

int main(void)
{
    int bilangan1;
    int bilangan2;
    int hasil;

    printf("Bilangan 1 = ");
    scanf("%d", &bilangan1);
    printf("Bilangan 2 = ");
    scanf("%d", &bilangan2);

    hasil = Max(bilangan1, bilangan2);
    printf("Nilai terbesar = %d\n", hasil);

    return 0;
}

int Max(int bilangan1, int bilangan2)
{
    if (bilangan1 >= bilangan2)
        return bilangan1;
    else
        return bilangan2;
}
