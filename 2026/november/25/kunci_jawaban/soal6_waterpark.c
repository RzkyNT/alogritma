/*
Case:
Waterpark "Samudra Fun" - Program Tiket Rombongan
-> [1] Tiket Dewasa = Rp. 100.000 / orang
-> [2] Tiket Anak   = Rp. 60.000 / orang
-> Satu rombongan boleh membeli banyak tiket
-> Harga total = Harga Tiket * Jumlah Orang
-> Harga total bayar = Harga Total + Pajak 11%
-> Tampilkan invoice lengkap

Mirip: UTS soal3 (Rental multi mobil + akumulasi + pajak)
*/
#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    float hargaTiket, totalBayar, totalPajak, totalSewa;
    int orang, jenisTiket, jumlahTiket, totalOrang = 0;

    totalBayar = 0.0f;
    totalPajak = 0.0f;
    totalSewa = 0.0f;

    // Algorithm
    printf("                 [Samudra Fun Waterpark]\n\n");
    printf("[Program Tiket Rombongan]\n");
    printf("[1] Satu rombongan dapat membeli banyak tiket\n");
    printf("[2] 1. Tiket Dewasa Rp. 100000, 2. Tiket Anak Rp. 60000\n");
    printf("[3] Harga sewa = Harga Tiket * Jumlah Orang\n");
    printf("[4] Harga total = Harga Sewa + Pajak 11%%\n\n\n");

    printf("[INPUT DATA TIKET]\n");
    printf("Berapa Jumlah Tiket? : ");
    if (scanf("%d", &jumlahTiket) != 1 || jumlahTiket < 1) {
        printf("Jumlah tiket harus berupa angka minimal 1.\n");
        return 1;
    }

    for (int i = 1; i <= jumlahTiket; i++) {
        printf("\n----------------------------\n");
        printf("[Data Tiket-%d]\n", i);
        printf("Jenis Tiket [1-2] : ");
        scanf("%d", &jenisTiket);
        printf("Jumlah Orang      : ");
        scanf("%d", &orang);

        switch (jenisTiket) {
            case 1:
                hargaTiket = 100000.0f;
                break;
            case 2:
                hargaTiket = 60000.0f;
                break;
            default:
                printf("Jenis tiket tidak valid.\n");
                return 1;
        }
        totalSewa += hargaTiket * orang;
        totalOrang += orang;
    }

    totalPajak = totalSewa * 0.11f;
    totalBayar = totalSewa + totalPajak;

    printf("\n----------------------------------------------------\n");
    printf("                     [Invoice]\n\n");
    printf("[1] Jumlah Tiket                     = %d\n", jumlahTiket);
    printf("[2] Jumlah Orang                     = %d\n", totalOrang);
    printf("[3] Total Sewa                       = Rp. %.2f\n", totalSewa);
    printf("[4] Pajak 11%%                        = Rp. %.2f\n", totalPajak);
    printf("[5] Total Bayar                      = Rp. %.2f\n", totalBayar);
    printf("----------------------------------------------------\n");
    printf("Selamat bersenang-senang di Samudra Fun!\n");
    getch();
    return 0;
}
