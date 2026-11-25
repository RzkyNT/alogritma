/*
Case:
Bengkel "Jaya Motor" - Program Servis Motor
-> [1] Servis Ringan = Rp. 50.000, [2] Servis Besar = Rp. 150.000, [3] Ganti Oli = Rp. 80.000
-> Tambahan sparepart (ditanya per motor, wajib pakai function):
   - Servis Ringan  -> sparepart Rp. 50.000
   - Servis Besar   -> sparepart Rp. 75.000
   - Ganti Oli      -> sparepart Rp. 25.000
-> Total biaya = Total Servis + Total Sparepart
-> Total bayar = Total Biaya + Pajak 11%
-> Tampilkan invoice lengkap

Mirip: UTS soal4, tapi function-nya menerima parameter jenis servis (lebih kompleks)
*/
#include <stdio.h>
#include "conio.h"

int hitungSparepart(int jenisServis);

int main(void) {
    // Declaration
    float hargaServis, totalBayar, totalPajak, totalServis, totalSparepart, totalBiaya;
    int jenisServis, jmlMotor;

    totalServis = 0.0f;
    totalSparepart = 0.0f;

    // Algorithm
    printf("                     [Jaya Motor]\n\n");
    printf("[Program Servis Motor]\n");
    printf("[1] 1. Servis Ringan Rp. 50000, 2. Servis Besar Rp. 150000, 3. Ganti Oli Rp. 80000\n");
    printf("[2] Sparepart: Ringan Rp. 50000, Besar Rp. 75000, Oli Rp. 25000\n");
    printf("[3] Total bayar = Total Biaya + Pajak 11%%\n\n\n");

    printf("[INPUT DATA SERVIS]\n");
    printf("Berapa Jumlah Motor? : ");
    scanf("%d", &jmlMotor);

    for (int i = 1; i <= jmlMotor; i++) {
        printf("\n----------------------------\n");
        printf("[Data Motor-%d]\n", i);
        printf("Jenis Servis [1-3]          : ");
        scanf("%d", &jenisServis);

        switch (jenisServis) {
            case 1:
                hargaServis = 50000.0;
                break;
            case 2:
                hargaServis = 150000.0;
                break;
            case 3:
                hargaServis = 80000.0;
                break;
            default:
                printf("Jenis servis tidak valid.\n");
                return 1;
        }
        totalServis += hargaServis;
        totalSparepart += hitungSparepart(jenisServis);
    }

    totalBiaya = totalServis + totalSparepart;
    totalPajak = totalBiaya * 0.11f;
    totalBayar = totalBiaya + totalPajak;

    printf("\n----------------------------------------------------\n");
    printf("                     [Invoice]\n\n");
    printf("[1] Jumlah Motor                      = %d\n", jmlMotor);
    printf("[2] Total Servis                      = Rp. %.2f\n", totalServis);
    printf("[3] Total Sparepart                   = Rp. %.2f\n", totalSparepart);
    printf("[4] Total Seluruh Biaya               = Rp. %.2f\n", totalBiaya);
    printf("[5] Pajak 11%%                         = Rp. %.2f\n", totalPajak);
    printf("[6] Total Bayar                       = Rp. %.2f\n", totalBayar);
    printf("----------------------------------------------------\n");
    printf("Motor Anda kembali dalam kondisi prima!\n");
    getch();
    return 0;
}

// Function menghitung sparepart berdasarkan jenis servis
int hitungSparepart(int jenisServis) {
    char pilih;
    printf("GANTI SPAREPART? (Y/N)      : ");
    scanf(" %c", &pilih);
    if (pilih == 'Y' || pilih == 'y') {
        if (jenisServis == 1) {
            return 50000;
        }
        if (jenisServis == 2) {
            return 75000;
        }
        return 25000;
    }
    return 0;
}
