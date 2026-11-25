#include <stdio.h>
#include "conio.h"

int main(void) {
float hargasw;
int hari;

printf("                     [Astrac Rent Car-ARC]\n\n");
printf("[Program Sewa Mobil]\n");
printf("[1] Satu Pelanggan hanya dapat menyewa 1 Kendaraan\n");
printf("[2] Harga sewa merupakan harga sewa harian\n");
printf("[3] Harga sewa = Harga Sewa Harian * Jumlah Hari\n");
printf("[4] Harga sewa total = Harga Sewa + Pajak 11%%\n\n\n");
printf("[INPUT DATA SEWA]\n");
printf("Harga Sewa (RP) : ");
scanf("%f", &hargasw);
printf("Jumlah Hari     : ");
scanf("%d", &hari);
printf("\n");

printf("----------------------------------------------------\n");
printf("                     [Invoice]\n");
printf("[1] Rp %.2f * %d hari = Rp. %.2f\n", hargasw, hari, hargasw * hari);
printf("[2] Pajak 11%% = Rp. %.2f\n", hargasw * hari * 0.11);
printf("[3] Total Bayar = Rp. %.2f\n", hargasw * hari + hargasw * hari * 0.11);
printf("----------------------------------------------------\n");
getch();
    return 0;
}
