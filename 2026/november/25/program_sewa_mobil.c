#include <stdio.h>
#include "conio.h"

int totalSupir(int hari);

int main(void) {
    float hargasw, totalbayar, totalpajak, totalsewa, totalsupir, totalbiaya;
    int hari, jenismbl, jmlmbl, totalhari = 0;
    totalsewa = 0.0f;
    totalsupir = 0.0f;

    printf("                     [Astrac Rent Car-ARC]\n\n");
    printf("[Program Sewa Mobil]\n");
    printf("[1] Satu Pelanggan hanya dapat menyewa 1 Kendaraan\n");
    printf("[2] Harga sewa merupakan harga sewa harian\n");
    printf("[3] 1. Avanza Rp. 500000, 2. Innova Rp. 600000, 3. Hiace Rp. 1000000\n");
    printf("[4] Harga Supir Rp. 200.000 / Hari\n");
    printf("[5] Harga sewa = Harga Sewa Harian * Jumlah Hari\n");
    printf("[6] Harga sewa total = Harga Sewa + Pajak 11%%\n\n\n");
    printf("[INPUT DATA SEWA]\n");
    printf("Berapa Jumlah Mobil? : ");
    scanf("%d", &jmlmbl);
    for (int i = 1; i <= jmlmbl; i++) {
        printf("\n----------------------------\n");
        printf("[Data Mobil-%d]\n", i);
        printf("Jenis Mobil[1-3]            : ");
        scanf("%d", &jenismbl);
        printf("Jumlah Hari                 : ");
        scanf("%d", &hari);
        switch (jenismbl) {
            case 1:
                hargasw = 500000.0;
                break;
            case 2:
                hargasw = 600000.0;
                break;
            case 3:
                hargasw = 1000000.0;
                break;
            default:
                printf("Jenis mobil tidak valid.\n");
                return 1;
        }
        totalsewa += hargasw * hari;
        totalhari += hari;
        totalsupir += totalSupir(hari);
    }
    totalbiaya = totalsewa + totalsupir;
    totalpajak = totalbiaya * 0.11f;
    totalbayar = totalbiaya + totalpajak;

    printf("\n----------------------------------------------------\n");
    printf("                     [Invoice]\n\n");
    printf("[1] Jenis Mobil                      = %d\n", jenismbl);
    printf("[2] Jumlah Mobil                     = %d\n", jmlmbl);
    printf("[3] Jumlah Hari                      = %d\n", totalhari);
    printf("[4] Total Sewa                       = Rp. %.2f\n", totalsewa);
    printf("[5] Total Supir                      = Rp. %.2f\n", totalsupir);
    printf("[6] Total Seluruh Biaya              = Rp. %.2f\n", totalbiaya);
    printf("[7] Pajak 11%%                        = Rp. %.2f\n", totalpajak);
    printf("[8] Total Bayar                      = Rp. %.2f\n", totalbayar);
    printf("----------------------------------------------------\n");
    getch();
    return 0;
}

int totalSupir(int hari) {
    char supir;
    printf("SUPIR? (Y/N)                : ");
    scanf(" %c", &supir);
    if (supir == 'Y' || supir == 'y') {
        return 200000 * hari;
    }
    if (supir == 'N' || supir == 'n') {
        return 0;
    }
}