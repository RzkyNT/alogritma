#include <stdio.h>
#include "conio.h"

int main(void) {
    float hargaSewaHarian, totalBayar, totalPajak, totalSewa, totalSupir;
    int hari, jenisMobil, jumlahMobil, totalHari = 0;
    char supir;
    totalBayar = 0.0f;
    totalPajak = 0.0f;
    totalSewa = 0.0f;

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
        printf("Supir? (Y/N)     : ");
        scanf(" %c", &supir);
       
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
        if (supir == 'Y') {
            totalSupir += 200000.0f * hari;
        } else if (supir == 'N') {
        }
    }

    totalPajak = totalSewa * 0.11f;
    totalBayar = totalSewa + totalPajak;

    printf("\n----------------------------------------------------\n");
    printf("                     [Invoice]\n\n");
    printf("[1] Jenis Mobil                     = %d\n", jenisMobil);
    printf("[2] Jumlah Mobil                     = %d\n", jumlahMobil);
    printf("[3] Jumlah Hari                      = %d\n", totalHari);
    printf("[4] Total Sewa                       = Rp. %.2f\n", totalSewa);
    printf("[5] Total Supir                      = Rp. %.2f\n",  totalSupir);
    printf("[6] Total Seluruh Biaya              = Rp. %.2f\n", totalSewa);
    printf("[7] Pajak 11%%                        = Rp. %.2f\n", totalPajak);
    printf("[8] Total Bayar                      = Rp. %.2f\n", totalBayar);
    printf("----------------------------------------------------\n");
    getch();

    
    return 0;
}

int totalSupir ()
{
    char supir;
    int totalSupir;
    printf("Apakah anda ingin menyewa sopir? (y/n) : ");
    scanf("%c", &supir);
    if (supir == 'y' || supir == 'Y')
    {
        totalSupir = 100000;
    }
    else
    {
        totalSupir = 0;
    }
    return totalSupir;
}
