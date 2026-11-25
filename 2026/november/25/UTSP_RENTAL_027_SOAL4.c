#include <stdio.h>
#include "conio.h"

int totalSupir(int hari);

int main(void) {
    float hargaSewaHarian, totalBayar, totalPajak, totalSewa, totalBiayaSupir, totalBiaya;
    int hari, jenisMobil, jumlahMobil, totalHari = 0;
    totalBayar = 0.0f;
    totalPajak = 0.0f;
    totalSewa = 0.0f;
    totalBiayaSupir = 0.0f;

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
    scanf("%d", &jumlahMobil);

    for (int i = 1; i <= jumlahMobil; i++) {
        printf("\n----------------------------\n");
        printf("[Data Mobil-%d]\n", i);
        printf("Jenis Mobil[1-3] : ");
        scanf("%d", &jenisMobil);
        printf("Jumlah Hari     : ");
        scanf("%d", &hari);

        switch (jenisMobil) {
            case 1:
                hargaSewaHarian = 500000.0;
                break;
            case 2:
                hargaSewaHarian = 600000.0;
                break;
            case 3:
                hargaSewaHarian = 1000000.0;
                break;
            default:
                printf("Jenis mobil tidak valid.\n");
                return 1;
        }

        totalSewa += hargaSewaHarian * hari;
        totalHari += hari;
        int biayaSupirMobil = totalSupir(hari);
        if (biayaSupirMobil < 0) {
            printf("Input sopir gagal dibaca.\n");
            return 1;
        }
        totalBiayaSupir += biayaSupirMobil;
    }

    totalBiaya = totalSewa + totalBiayaSupir;
    totalPajak = totalBiaya * 0.11f;
    totalBayar = totalBiaya + totalPajak;

    printf("\n----------------------------------------------------\n");
    printf("                     [Invoice]\n\n");
    printf("[1] Jenis Mobil                     = %d\n", jenisMobil);
    printf("[2] Jumlah Mobil                     = %d\n", jumlahMobil);
    printf("[3] Jumlah Hari                      = %d\n", totalHari);
    printf("[4] Total Sewa                       = Rp. %.2f\n", totalSewa);
    printf("[5] Total Supir                      = Rp. %.2f\n", totalBiayaSupir);
    printf("[6] Total Seluruh Biaya              = Rp. %.2f\n", totalBiaya);
    printf("[7] Pajak 11%%                        = Rp. %.2f\n", totalPajak);
    printf("[8] Total Bayar                      = Rp. %.2f\n", totalBayar);
    printf("----------------------------------------------------\n");

    return 0;
    getch();
}

int totalSupir(int hari) {
    char supir;
    for (;;) {
        printf("SUPIR? (Y/N) : ");
        scanf(" %c", &supir);
        if (supir == 'Y') {
             return 200000 * hari;
        } else if (supir == 'N') {
            return 0;
        }
    }
 }