/*
Pseudocode:
Program MenentukanHariBesok

DEKLARASI:
    hariIni : string

PROCEDURE hariBesok(hariIni)
    if hariIni = "senin" then print "selasa"
    else if hariIni = "selasa" then print "rabu"
    else if hariIni = "rabu" then print "kamis"
    else if hariIni = "kamis" then print "jumat"
    else if hariIni = "jumat" then print "sabtu"
    else if hariIni = "sabtu" then print "minggu"
    else if hariIni = "minggu" then print "senin"
    else print "Input tidak valid"

ALGORITMA:
    read hariIni
    call hariBesok(hariIni)
*/
#include <stdio.h>

void hariBesok(char hariIni[]);

int main(void)
{
    char hariIni[20];

    printf("Masukkan hari ini = ");
    scanf("%19s", hariIni);

    hariBesok(hariIni);

    return 0;
}

void hariBesok(char hariIni[])
{
    if (hariIni[0] == 's' &&
        hariIni[1] == 'e' &&
        hariIni[2] == 'n' &&
        hariIni[3] == 'i' &&
        hariIni[4] == 'n' &&
        hariIni[5] == '\0')
        printf("Hari besok selasa\n");
    else if (hariIni[0] == 's' &&
             hariIni[1] == 'e' &&
             hariIni[2] == 'l' &&
             hariIni[3] == 'a' &&
             hariIni[4] == 's' &&
             hariIni[5] == 'a' &&
             hariIni[6] == '\0')
        printf("Hari besok rabu\n");
    else if (hariIni[0] == 'r' &&
             hariIni[1] == 'a' &&
             hariIni[2] == 'b' &&
             hariIni[3] == 'u' &&
             hariIni[4] == '\0')
        printf("Hari besok kamis\n");
    else if (hariIni[0] == 'k' &&
             hariIni[1] == 'a' &&
             hariIni[2] == 'm' &&
             hariIni[3] == 'i' &&
             hariIni[4] == 's' &&
             hariIni[5] == '\0')
        printf("Hari besok jumat\n");
    else if (hariIni[0] == 'j' &&
             hariIni[1] == 'u' &&
             hariIni[2] == 'm' &&
             hariIni[3] == 'a' &&
             hariIni[4] == 't' &&
             hariIni[5] == '\0')
        printf("Hari besok sabtu\n");
    else if (hariIni[0] == 's' &&
             hariIni[1] == 'a' &&
             hariIni[2] == 'b' &&
             hariIni[3] == 't' &&
             hariIni[4] == 'u' &&
             hariIni[5] == '\0')
        printf("Hari besok minggu\n");
    else if (hariIni[0] == 'm' &&
             hariIni[1] == 'i' &&
             hariIni[2] == 'n' &&
             hariIni[3] == 'g' &&
             hariIni[4] == 'g' &&
             hariIni[5] == 'u' &&
             hariIni[6] == '\0')
        printf("Hari besok senin\n");
    else
        printf("Input tidak valid\n");
}
