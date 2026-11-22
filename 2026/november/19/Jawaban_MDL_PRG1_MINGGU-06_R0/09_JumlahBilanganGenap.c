/*
Pseudocode:
Program MenjumlahkanBilanganGenap

DEKLARASI:
    N, jumlah, i : integer

PROCEDURE HitungJumlahGenap(N : input integer; jumlah : output integer)
    jumlah <- 0
    for i <- 0 to N - 1 do
        jumlah <- jumlah + 2 * i

ALGORITMA:
    read N
    if N < 0 then
        write "N tidak boleh negatif"
    else
        call HitungJumlahGenap(N, jumlah)
        write jumlah
*/
#include <stdio.h>

void HitungJumlahGenap(int N, int *jumlah);

int main(void)
{
    int N;
    int jumlah;

    printf("Banyak bilangan genap pertama (N) = ");
    scanf("%d", &N);

    if (N < 0)
        printf("N tidak boleh negatif\n");
    else
    {
        HitungJumlahGenap(N, &jumlah);
        printf("Jumlah %d bilangan genap pertama = %d\n", N, jumlah);
    }

    return 0;
}

void HitungJumlahGenap(int N, int *jumlah)
{
    int i;

    *jumlah = 0;
    for (i = 0; i < N; i++)
        *jumlah = *jumlah + 2 * i;
}
