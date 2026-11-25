#include <stdio.h>
#include "conio.h"

int main(void) {
    float hargaSewaHarian, totalBayar, totalPajak, totalSewa;
    int hari, jenisMobil, jumlahMobil, totalHari = 0;
    totalBayar = 0.0f;
    totalPajak = 0.0f;
    totalSewa = 0.0f;

    printf("                     [Astrac Rent Car-ARC]\n\n");
    printf("[Program Sewa Mobil]\n");
    printf("[1] Satu pelanggan hanya dapat menyewa 1 kendaraan\n");
    printf("[2] Harga sewa merupakan harga sewa harian\n");
    printf("[3] 1. Avanza Rp. 500000, 2. Innova Rp. 600000, 3. Hiace Rp. 1000000\n");
    printf("[4] Harga sewa total = harga sewa + pajak 11%%\n\n\n");
    printf("[INPUT DATA SEWA]\n");
    printf("Berapa Jumlah Mobil? : ");
    if (scanf("%d", &jumlahMobil) != 1 || jumlahMobil < 1) {
        printf("Jumlah mobil harus berupa angka minimal 1.\n");
        return 1;
    }
    for (int i = 1; i <= jumlahMobil; i++) {
        printf("\n----------------------------\n");
        printf("[Data Mobil-%d]\n", i);
        printf("Jenis Mobil[1-3] : ");
        scanf("%d", &jenisMobil);
        printf("Jumlah Hari     : ");
        scanf("%d", &hari);
        switch (jenisMobil) {
            case 1:
                hargaSewaHarian = 500000.0f;
                break;
            case 2:
                hargaSewaHarian = 600000.0f;
                break;
            case 3:
                hargaSewaHarian = 1000000.0f;
                break;
            default:
                printf("Jenis mobil tidak valid.\n");
                return 1;
        }
        totalSewa += hargaSewaHarian * hari;
        totalHari += hari;
    }
    totalPajak = totalSewa * 0.11f;
    totalBayar = totalSewa + totalPajak;

    printf("\n----------------------------------------------------\n");
    printf("                     [Invoice]\n\n");
    printf("[1] Jumlah Mobil                     = %d\n", jumlahMobil);
    printf("[2] Jumlah Hari                      = %d\n", totalHari);
    printf("[3] Total Sewa                       = Rp. %.2f\n", totalSewa);
    printf("[4] Pajak 11%%                        = Rp. %.2f\n", totalPajak);
    printf("[5] Total Bayar                      = Rp. %.2f\n", totalBayar);
    printf("----------------------------------------------------\n");
    getch();
    return 0;
}
