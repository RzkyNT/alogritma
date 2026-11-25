#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
float hargasw, totalbayar, totalpajak, totalhari;
int hari,jenismbl,jmlmbl;
char supir;
    // Algorithm
printf("                     [Astrac Rent Car-ARC]\n\n");
printf("[Program Sewa Mobil]\n");
printf("[1] Satu Pelanggan hanya dapat menyewa 1 Kendaraan\n");
printf("[2] Harga sewa merupakan harga sewa harian\n");
printf("[3] 1. Avanza Rp. 500000, 2. Innova Rp. 600000, 3. Hiace Rp. 1000000\n");
printf("[4] Harga Supir Rp. 200.000 / Hari \n");
printf("[5] Harga sewa = Harga Sewa Harian * Jumlah Hari\n");
printf("[6] Harga sewa total = Harga Sewa + Pajak 11%%\n\n\n");

printf("[INPUT DATA SEWA]\n");
printf("Jumlah Mobil?    : ");
scanf("%d", &jmlmbl);
for (int i = 1; i <= jmlmbl; i++) {
    printf("[Data Mobil ke-%d]\n", i);
    printf("Jenis Mobil[1-3] : ");
    scanf("%d", &jenismbl);

    switch(jenismbl){
        case 1:
            hargasw = 500000;
            break;
        case 2:
            hargasw = 600000;
            break;
        case 3:
            hargasw = 1000000;
            break;
        default:
            printf("Jenis mobil tidak valid.\n");
            return 1; 
    }

    printf("Jumlah Hari      : ");
    scanf("%d", &hari);
    printf("Supir? (y/n)     : ");
    scanf(" %c", &supir);
    if (supir == 'y' || supir == 'Y') {
        hargasw += 200000; 
    }

    
printf("\n");

totalhari = hargasw * hari;
totalpajak = hargasw * hari * 0.11;
totalbayar = hargasw * hari + hargasw * hari * 0.11;
printf("----------------------------------------------------\n");
printf("                     [Invoice]\n");
printf("[1] Jenis Mobil                      = %d\n", jenismbl);
printf("[2] Rp. %.2f * %d hari           = Rp. %.2f\n", hargasw, hari, totalhari);
printf("[3] Pajak 11%%                        = Rp. %.2f\n", totalpajak);
printf("[4] Total Bayar                      = Rp. %.2f\n", totalbayar);
printf("----------------------------------------------------\n");


getch();
    return 0;
}
