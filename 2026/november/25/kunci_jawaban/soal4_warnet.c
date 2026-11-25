/*
Case:
Warnet "NusaGaming" - Program Biaya Penyewaan PC
-> Tarif penyewaan = Rp. 6.000 / jam
-> Diskon bertingkat berdasarkan total biaya:
   - Total > Rp. 200.000 -> diskon 20%
   - Total > Rp. 100.000 -> diskon 10%
   - Total > Rp. 50.000  -> diskon 5%
   - Selain itu          -> tidak ada diskon
-> Jika total lebih dari Rp. 2.000.000 diberikan bonus voucher 25.000

Mirip: pertemuan 09 soal2 (Toko Komputer diskon bertingkat)
*/
#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    float jam, tarif, total_biaya, diskon, voucher, total_bayar;

    // Algorithm
    printf("============NusaGaming Internet Cafe============\n");
    printf("->Tarif Rp. 6.000 / jam\n");
    printf("->Total > Rp. 200.000 Diskon 20%%\n");
    printf("->Total > Rp. 100.000 Diskon 10%%\n");
    printf("->Total > Rp. 50.000  Diskon 5%%\n\n");

    printf("[Input Data Penyewaan]\n");
    printf("Jumlah Jam Bermain: ");
    scanf("%f", &jam);

    tarif = 6000;
    total_biaya = jam * tarif;
    diskon = 0;
    voucher = 0;

    if (total_biaya > 200000) {
        diskon = total_biaya * 0.2;
        voucher = 25000;
    } else if (total_biaya > 100000) {
        diskon = total_biaya * 0.1;
    } else if (total_biaya > 50000) {
        diskon = total_biaya * 0.05;
    }
    total_bayar = total_biaya - diskon;

    printf("\n\n[Struk Penyewaan]\n");
    printf("\n%.0f jam * Rp. %.2f = Rp. %.2f \n\n", jam, tarif, total_biaya);
    printf("Total Harga Rp. %.2f \n", total_biaya);
    printf("Diskon Rp. %.2f \n", diskon);
    if (voucher > 0) {
        printf("Bonus Voucher Rp. %.2f \n", voucher);
    }
    printf("Total Bayar Rp. %.2f \n", total_bayar);
    printf("\nSelamat bermain, jangan lupa istirahat \n");
    getch();
    return 0;
}
