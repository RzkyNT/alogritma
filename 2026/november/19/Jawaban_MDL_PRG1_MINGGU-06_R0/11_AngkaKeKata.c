/*
Pseudocode:
Program MembacaAngkaDalamKata

DEKLARASI:
    angka : integer positif
    kelompok : array [0..3] of integer
    satuan : array of string

PROCEDURE cetakKata(kata : string; adaKata : input/output boolean)
    if adaKata then write " "
    write kata
    adaKata <- true

PROCEDURE cetakTigaDigit(n : integer; adaKata : input/output boolean)
    if n >= 100 then
        if n / 100 = 1 then cetakKata("seratus")
        else cetakKata(satuan[n / 100]), cetakKata("ratus")
        n <- n mod 100
    if n = 10 then cetakKata("sepuluh")
    else if n = 11 then cetakKata("sebelas")
    else if 12 <= n <= 19 then
        cetakKata(satuan[n mod 10]), cetakKata("belas")
    else if n >= 20 then
        cetakKata(satuan[n / 10]), cetakKata("puluh")
        if n mod 10 != 0 then cetakKata(satuan[n mod 10])
    else if n > 0 then cetakKata(satuan[n])

PROCEDURE tampilkanTerbilang(angka : integer positif)
    pecah angka menjadi kelompok miliar, juta, ribu, dan satuan
    untuk setiap kelompok dari terbesar ke terkecil:
        jika kelompok tidak nol:
            untuk satu ribu, cetak "seribu" tanpa menambahkan "ribu"
            selain itu cetakTigaDigit(kelompok)
            cetak nama kelompok bila tersedia

ALGORITMA:
    read angka
    if angka <= 0 then write "Bilangan harus positif"
    else call tampilkanTerbilang(angka)
*/
#include <stdio.h>

void cetakKata(char kata[], int *adaKata);
void cetakTigaDigit(int n, int *adaKata);
void tampilkanTerbilang(int angka);

int main(void)
{
    int angka;

    printf("Masukkan bilangan bulat positif = ");
    scanf("%d", &angka);

    if (angka <= 0)
        printf("Bilangan harus positif\n");
    else
    {
        printf("Terbilang: ");
        tampilkanTerbilang(angka);
        printf("\n");
    }

    return 0;
}

void cetakKata(char kata[], int *adaKata)
{
    if (*adaKata)
        printf(" ");

    printf("%s", kata);
    *adaKata = 1;
}

void cetakTigaDigit(int n, int *adaKata)
{
    char *satuan[] = {
        "", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    if (n >= 100)
    {
        if (n / 100 == 1)
            cetakKata("seratus", adaKata);
        else
        {
            cetakKata(satuan[n / 100], adaKata);
            cetakKata("ratus", adaKata);
        }
        n = n % 100;
    }

    if (n == 10)
        cetakKata("sepuluh", adaKata);
    else if (n == 11)
        cetakKata("sebelas", adaKata);
    else if (n >= 12 && n <= 19)
    {
        cetakKata(satuan[n % 10], adaKata);
        cetakKata("belas", adaKata);
    }
    else if (n >= 20)
    {
        cetakKata(satuan[n / 10], adaKata);
        cetakKata("puluh", adaKata);
        if (n % 10 != 0)
            cetakKata(satuan[n % 10], adaKata);
    }
    else if (n > 0)
        cetakKata(satuan[n], adaKata);
}

void tampilkanTerbilang(int angka)
{
    int kelompok[4];
    char *namaKelompok[] = {"miliar", "juta", "ribu", ""};
    int adaKata = 0;
    int i;

    kelompok[0] = angka / 1000000000;
    kelompok[1] = (angka / 1000000) % 1000;
    kelompok[2] = (angka / 1000) % 1000;
    kelompok[3] = angka % 1000;

    for (i = 0; i < 4; i++)
    {
        if (kelompok[i] == 0)
            continue;

        if (i == 2 && kelompok[i] == 1)
            cetakKata("seribu", &adaKata);
        else
            cetakTigaDigit(kelompok[i], &adaKata);

        if (i < 3 && !(i == 2 && kelompok[i] == 1))
            cetakKata(namaKelompok[i], &adaKata);
    }
}
