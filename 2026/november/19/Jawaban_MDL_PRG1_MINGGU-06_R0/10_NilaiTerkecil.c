/*
Pseudocode:
Program MencariNilaiTerkecil

DEKLARASI:
    nilai, minimum : integer
    status : integer

PROCEDURE CariNilaiTerkecil(minimum : output integer) -> status
    read nilai
    if input gagal then return -1
    if nilai = 9999 then return 0
    minimum <- nilai
    while nilai != 9999 do
        read nilai
        if input gagal then return -1
        if nilai != 9999 and nilai < minimum then
            minimum <- nilai
    return 1

ALGORITMA:
    status <- CariNilaiTerkecil(minimum)
    if status = 1 then write minimum
    else if status = 0 then write "Tidak ada data"
    else write "Input tidak valid"
*/
#include <stdio.h>

int CariNilaiTerkecil(int *minimum);

int main(void)
{
    int minimum;
    int status;

    printf("Masukkan bilangan (9999 untuk berhenti):\n");
    status = CariNilaiTerkecil(&minimum);

    if (status == 1)
        printf("Nilai terkecil = %d\n", minimum);
    else if (status == 0)
        printf("Tidak ada data yang dimasukkan\n");
    else
        printf("Input tidak valid\n");

    return 0;
}

int CariNilaiTerkecil(int *minimum)
{
    int nilai;

    if (scanf("%d", &nilai) != 1)
        return -1;
    if (nilai == 9999)
        return 0;

    *minimum = nilai;

    while (nilai != 9999)
    {
        if (scanf("%d", &nilai) != 1)
            return -1;

        if (nilai != 9999 && nilai < *minimum)
            *minimum = nilai;
    }

    return 1;
}
