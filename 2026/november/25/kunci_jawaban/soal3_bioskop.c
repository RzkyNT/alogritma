/*
Case:
Bioskop "CineMatch XXI" - Program Pembelian Tiket
-> [1] Reguler  = Rp. 35.000
-> [2] Premier  = Rp. 75.000
-> [3] IMAX     = Rp. 110.000
-> Pembelian >= 5 tiket mendapatkan diskon 10%
-> Gunakan switch-case untuk memilih jenis tiket

Mirip: kuis1 soal3 (Ayam Geprek jenis potongan) & UTS soal2 (Jenis Mobil)
*/
#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    int jenis_tiket;
    float jumlah_tiket;
    float harga;
    float total_biaya;
    float diskon;

    // Algorithm
    printf("============CineMatch XXI============\n");
    printf("->Mau nonton apa hari ini?\n\n");
    printf("->[1] > Reguler  = Rp. 35.000\n");
    printf("->[2] > Premier  = Rp. 75.000\n");
    printf("->[3] > IMAX     = Rp. 110.000\n");
    printf("->Beli >= 5 tiket Diskon 10%%\n\n");

    printf("[Pembelian Tiket]\n");
    printf("Jenis Tiket (1/2/3): ");
    scanf("%d", &jenis_tiket);
    switch (jenis_tiket) {
        case 1:
            harga = 35000;
            break;
        case 2:
            harga = 75000;
            break;
        case 3:
            harga = 110000;
            break;
        default:
            printf("Jenis tiket tidak valid.\n");
            return 1;
    }

    printf("Jumlah Tiket      : ");
    scanf("%f", &jumlah_tiket);

    diskon = 0;
    total_biaya = jumlah_tiket * harga;

    if (jumlah_tiket >= 5) {
        diskon = total_biaya * 0.1;
    }

    printf("\n\n[Struk Pembelian Tiket]\n");
    printf("\n[%d] %.0f * Rp. %.2f = Rp. %.2f \n\n", jenis_tiket, jumlah_tiket, harga, total_biaya);
    printf("Total = Rp. %.2f \n", total_biaya);
    printf("Diskon = Rp. %.2f \n", diskon);
    printf("Total Bayar = Rp. %.2f \n", (total_biaya - diskon));
    printf("\nSelamat menonton! \n");
    getch();
    return 0;
}
