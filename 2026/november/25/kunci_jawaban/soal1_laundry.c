/*
Case:
Laundry "Bersih Wangi" - Program Struk Pesanan
-> Input harga laundry per Kg dan jumlah Kg pakaian
-> Total bayar = harga per Kg * jumlah Kg
-> Tampilkan struk pesanan

Mirip: pertemuan 09 soal1 (Toko Komputer) & kuis1 soal1 (Ayam Geprek)
*/
#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    float harga_kg, jumlah_kg, total_bayar;

    // Algorithm
    printf("============Laundry Bersih Wangi============\n");
    printf("->Melayani cuci kiloan harian & express\n\n");

    printf("[Tambah Pesanan]\n");
    printf("Harga per Kg (Rp): ");
    scanf("%f", &harga_kg);
    printf("Jumlah Kg        : ");
    scanf("%f", &jumlah_kg);

    total_bayar = harga_kg * jumlah_kg;

    printf("\n\n[Struk Pesanan]\n");
    printf("\nRp. %.2f * %.0f Kg = Rp. %.2f \n\n", harga_kg, jumlah_kg, total_bayar);
    printf("Total Bayar Rp. %.2f \n", total_bayar);
    printf("\nTerima kasih telah mempercayakan %.0f Kg cucian Anda \n", jumlah_kg);
    getch();
    return 0;
}
