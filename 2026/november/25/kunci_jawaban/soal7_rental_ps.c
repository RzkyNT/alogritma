/*
Case:
Rental PS "Gaming Space" - Program Sewa Playstation
-> [1] PS3 = Rp. 15.000 / jam, [2] PS4 = Rp. 20.000 / jam, [3] PS5 = Rp. 30.000 / jam
-> Tambahan joystick Rp. 5.000 / jam (ditanya per unit, wajib pakai function)
-> Harga sewa = Harga Per Jam * Jumlah Jam
-> Total biaya = Total Sewa + Total Joystick
-> Total bayar = Total Biaya + Pajak 11%
-> Tampilkan invoice lengkap

Mirip: UTS soal4 (Rental + function totalSupir)
*/
#include <stdio.h>
#include "conio.h"

int sewaJoystick(int jam);

int main(void) {
    // Declaration
    float hargaJam, totalBayar, totalPajak, totalSewa, totalJoystick, totalBiaya;
    int jam, jenisPs, jmlUnit, totalJam = 0;

    totalSewa = 0.0f;
    totalJoystick = 0.0f;

    // Algorithm
    printf("                    [Gaming Space]\n\n");
    printf("[Program Sewa Playstation]\n");
    printf("[1] 1. PS3 Rp. 15000, 2. PS4 Rp. 20000, 3. PS5 Rp. 30000 (per jam)\n");
    printf("[2] Joystick tambahan Rp. 5000 / jam\n");
    printf("[3] Harga sewa = Harga Per Jam * Jumlah Jam\n");
    printf("[4] Total bayar = Total Biaya + Pajak 11%%\n\n\n");

    printf("[INPUT DATA SEWA]\n");
    printf("Berapa Jumlah Unit? : ");
    scanf("%d", &jmlUnit);

    for (int i = 1; i <= jmlUnit; i++) {
        printf("\n----------------------------\n");
        printf("[Data Unit-%d]\n", i);
        printf("Jenis PS [1-3]              : ");
        scanf("%d", &jenisPs);
        printf("Jumlah Jam                  : ");
        scanf("%d", &jam);

        switch (jenisPs) {
            case 1:
                hargaJam = 15000.0;
                break;
            case 2:
                hargaJam = 20000.0;
                break;
            case 3:
                hargaJam = 30000.0;
                break;
            default:
                printf("Jenis PS tidak valid.\n");
                return 1;
        }
        totalSewa += hargaJam * jam;
        totalJam += jam;
        totalJoystick += sewaJoystick(jam);
    }

    totalBiaya = totalSewa + totalJoystick;
    totalPajak = totalBiaya * 0.11f;
    totalBayar = totalBiaya + totalPajak;

    printf("\n----------------------------------------------------\n");
    printf("                    [Invoice]\n\n");
    printf("[1] Jumlah Unit                      = %d\n", jmlUnit);
    printf("[2] Jumlah Jam                       = %d\n", totalJam);
    printf("[3] Total Sewa                       = Rp. %.2f\n", totalSewa);
    printf("[4] Total Joystick                   = Rp. %.2f\n", totalJoystick);
    printf("[5] Total Seluruh Biaya              = Rp. %.2f\n", totalBiaya);
    printf("[6] Pajak 11%%                        = Rp. %.2f\n", totalPajak);
    printf("[7] Total Bayar                      = Rp. %.2f\n", totalBayar);
    printf("----------------------------------------------------\n");
    printf("GG well played, selamat bermain!\n");
    getch();
    return 0;
}

// Function untuk menghitung biaya joystick tambahan
int sewaJoystick(int jam) {
    char pilih;
    printf("JOYSTICK? (Y/N)             : ");
    scanf(" %c", &pilih);
    if (pilih == 'Y' || pilih == 'y') {
        return 5000 * jam;
    }
    if (pilih == 'N' || pilih == 'n') {
        return 0;
    }
    return 0;
}
