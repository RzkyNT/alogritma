/*
Pseudocode:
Program MenentukanHariBesok

DEKLARASI:
    hariSekarang : string
    hariEsok : string

PROCEDURE hariBesok(hariSekarang, hariEsok)
    if hariSekarang = "senin" then hariEsok <- "selasa"
    else if hariSekarang = "selasa" then hariEsok <- "rabu"
    else if hariSekarang = "rabu" then hariEsok <- "kamis"
    else if hariSekarang = "kamis" then hariEsok <- "jumat"
    else if hariSekarang = "jumat" then hariEsok <- "sabtu"
    else if hariSekarang = "sabtu" then hariEsok <- "minggu"
    else if hariSekarang = "minggu" then hariEsok <- "senin"
    else hariEsok <- "Input tidak valid"

ALGORITMA:
    read hariSekarang
    call hariBesok(hariSekarang, hariEsok)
    write hariEsok
*/
#include <stdio.h>
void salinNama(char asal[], char tujuan[]);
int samaNama(char a[], char b[]);
void hariBesok(char hariSekarang[], char hariEsok[]);

int main(void)
{
    char hariSekarang[20];
    char hariEsok[30];

    printf("Masukkan nama hari sekarang (huruf kecil) = ");
    scanf("%19s", hariSekarang);

    hariBesok(hariSekarang, hariEsok);
    printf("Hari besok adalah %s\n", hariEsok);

    return 0;
}

void salinNama(char asal[], char tujuan[])
{
    int i = 0;

    while (asal[i] != '\0')
    {
        tujuan[i] = asal[i];
        i++;
    }
    tujuan[i] = '\0';
}

int samaNama(char a[], char b[])
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
            return 0;
        i++;
    }

    if (a[i] == '\0' && b[i] == '\0')
        return 1;
    else
        return 0;
}

void hariBesok(char hariSekarang[], char hariEsok[])
{
    if (samaNama(hariSekarang, "senin"))
        salinNama("selasa", hariEsok);
    else if (samaNama(hariSekarang, "selasa"))
        salinNama("rabu", hariEsok);
    else if (samaNama(hariSekarang, "rabu"))
        salinNama("kamis", hariEsok);
    else if (samaNama(hariSekarang, "kamis"))
        salinNama("jumat", hariEsok);
    else if (samaNama(hariSekarang, "jumat"))
        salinNama("sabtu", hariEsok);
    else if (samaNama(hariSekarang, "sabtu"))
        salinNama("minggu", hariEsok);
    else if (samaNama(hariSekarang, "minggu"))
        salinNama("senin", hariEsok);
    else
        salinNama("Input tidak valid", hariEsok);
}
