/*
Pseudocode:
Program MenentukanHariBesok

DEKLARASI:
    hariSekarang : string

PROCEDURE hariBesok(hariSekarang)
    if hariSekarang = "senin" then print "selasa"
    else if hariSekarang = "selasa" then print "rabu"
    else if hariSekarang = "rabu" then print "kamis"
    else if hariSekarang = "kamis" then print "jumat"
    else if hariSekarang = "jumat" then print "sabtu"
    else if hariSekarang = "sabtu" then print "minggu"
    else if hariSekarang = "minggu" then print "senin"
    else print "Input tidak valid"

ALGORITMA:
    read hariSekarang
    call hariBesok(hariSekarang)
*/
#include <stdio.h>

void hariBesok(char hariSekarang[]);

int main(void)
{
    char hariSekarang[20];

    printf("Masukkan nama hari sekarang (huruf kecil) = ");
    scanf("%19s", hariSekarang);

    hariBesok(hariSekarang);

    return 0;
}

void hariBesok(char hariSekarang[])
{
    if (hariSekarang[0] == 's' &&
        hariSekarang[1] == 'e' &&
        hariSekarang[2] == 'n' &&
        hariSekarang[3] == 'i' &&
        hariSekarang[4] == 'n' &&
        hariSekarang[5] == '\0')
        printf("Hari besok adalah selasa\n");
    else if (hariSekarang[0] == 's' &&
             hariSekarang[1] == 'e' &&
             hariSekarang[2] == 'l' &&
             hariSekarang[3] == 'a' &&
             hariSekarang[4] == 's' &&
             hariSekarang[5] == 'a' &&
             hariSekarang[6] == '\0')
        printf("Hari besok adalah rabu\n");
    else if (hariSekarang[0] == 'r' &&
             hariSekarang[1] == 'a' &&
             hariSekarang[2] == 'b' &&
             hariSekarang[3] == 'u' &&
             hariSekarang[4] == '\0')
        printf("Hari besok adalah kamis\n");
    else if (hariSekarang[0] == 'k' &&
             hariSekarang[1] == 'a' &&
             hariSekarang[2] == 'm' &&
             hariSekarang[3] == 'i' &&
             hariSekarang[4] == 's' &&
             hariSekarang[5] == '\0')
        printf("Hari besok adalah jumat\n");
    else if (hariSekarang[0] == 'j' &&
             hariSekarang[1] == 'u' &&
             hariSekarang[2] == 'm' &&
             hariSekarang[3] == 'a' &&
             hariSekarang[4] == 't' &&
             hariSekarang[5] == '\0')
        printf("Hari besok adalah sabtu\n");
    else if (hariSekarang[0] == 's' &&
             hariSekarang[1] == 'a' &&
             hariSekarang[2] == 'b' &&
             hariSekarang[3] == 't' &&
             hariSekarang[4] == 'u' &&
             hariSekarang[5] == '\0')
        printf("Hari besok adalah minggu\n");
    else if (hariSekarang[0] == 'm' &&
             hariSekarang[1] == 'i' &&
             hariSekarang[2] == 'n' &&
             hariSekarang[3] == 'g' &&
             hariSekarang[4] == 'g' &&
             hariSekarang[5] == 'u' &&
             hariSekarang[6] == '\0')
        printf("Hari besok adalah senin\n");
    else
        printf("Input tidak valid\n");
}
