/*
Case:
Kafe "Kopi Senja" - Program Struk Pembelian
-> Harga per cup = Rp. 18.000
-> Pembelian >= 5 cup mendapatkan diskon 10%
-> Tampilkan total, diskon, dan total bayar

Mirip: kuis1 soal2 (Ayam Geprek MbakE + diskon)
*/
#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    float jumlah_cup;
    float total_biaya;
    float harga;
    float diskon;

    // Algorithm
    printf("============Kafe Kopi Senja============\n");
    printf("->Harga Per cup = Rp. 18.000\n");
    printf("->Beli >= 5 cup Diskon 10%%\n\n");

    printf("[Tambah Pesanan]\n");
    printf("Jumlah Cup Kopi: ");
    scanf("%f", &jumlah_cup);

    harga = 18000;
    diskon = 0;
    total_biaya = jumlah_cup * harga;

    if (jumlah_cup >= 5) {
        diskon = total_biaya * 0.1;
    }

    printf("\n\n[Struk Pembelian]\n");
    printf("\n%.0f * Rp. %.2f = Rp. %.2f \n\n", jumlah_cup, harga, total_biaya);
    printf("Total = Rp. %.2f \n", total_biaya);
    printf("Diskon = Rp. %.2f \n", diskon);
    printf("Total Bayar = Rp. %.2f \n", (total_biaya - diskon));
    printf("\nTerima kasih telah memesan %.0f cup Kopi Senja \n", jumlah_cup);
    getch();
    return 0;
}
