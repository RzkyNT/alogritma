/*
Pseudocode:
Program MenentukanBilanganPrima

DEKLARASI:
    m, i : integer
    prima : boolean

function NilaiPrima(m : integer) -> boolean
    if m < 2 then
        return false
    for i <- 2 to m / 2 do
        if m mod i = 0 then
            return false
    return true

ALGORITMA:
    read m
    if m < 1 then
        write "Bilangan harus positif"
    else if NilaiPrima(m) then
        write "Bilangan prima"
    else
        write "Bukan bilangan prima"
*/
#include <stdio.h>

typedef enum { false = 0, true = 1 } boolean;
boolean NilaiPrima(int m);

int main(void)
{
    int m;

    printf("Masukkan bilangan bulat positif = ");
    scanf("%d", &m);

    if (m < 1)
        printf("Bilangan harus positif\n");
    else if (NilaiPrima(m))
        printf("%d adalah bilangan prima\n", m);
    else
        printf("%d bukan bilangan prima\n", m);

    return 0;
}

boolean NilaiPrima(int m)
{
    int i;

    if (m < 2)
        return false;

    for (i = 2; i <= m / 2; i++)
    {
        if (m % i == 0)
            return false;
    }

    return true;
}
