#include <stdio.h>
#include "conio.h"

int main(void) {
    float totalbayar, totalpajak, totalsewa;
    int hari, jenismbl, jmlmbl, totalhari;

    printf("                     [Astrac Rent Car-ARC]\n\n");
    printf("[Program Sewa Mobil]\n");
    printf("[1] Satu Pelanggan hanya dapat menyewa 1 Kendaraan\n");
    printf("[2] Harga sewa merupakan harga sewa harian\n");
    printf("[3] 1. Avanza Rp. 500000, 2. Innova Rp. 600000, 3. Hiace Rp. 1000000\n");
    printf("[5] Harga sewa = Harga Sewa Harian * Jumlah Hari\n");
    printf("[6] Harga sewa total = Harga Sewa + Pajak 11%%\n\n\n");

    printf("[INPUT DATA SEWA]\n");
    printf("Berapa Jumlah Mobil?    : ");
    if (scanf("%d", &jmlmbl) != 1 || jmlmbl < 1) {
        printf("Jumlah mobil harus berupa angka minimal 1.\n");
        return 1;
    }

    for (int i = 1; i <= jmlmbl; i++) {
        printf("----------------------------\n");
        printf("[Data Mobil-%d]\n", i);
        printf("Jenis Mobil[1-3] : ");
        scanf("%d", &jenismbl);
        printf("Jumlah Hari      : ");
        scanf("%d", &hari);
        switch (jenismbl) {
            case 1:
                totalhari = hari + totalhari;
                totalsewa = totalsewa+(500000 * totalhari);
                break;
            case 2:
            totalhari = hari + totalhari;
            totalsewa = totalsewa+(600000 * totalhari);

                break;
            case 3:
                totalhari = hari + totalhari;
                totalsewa = totalsewa+(1000000 * totalhari);

                break;
            default:
                printf("Jenis mobil tidak valid.\n");
                return 1;
        }
    }
        printf("\n----------------------------------------------------\n");
        printf("                     [Invoice]\n");
        printf("[1] Jenis Mobil                      = %d\n", jenismbl);
        printf("[2] Jumlah Mobil                      = %d\n", jmlmbl);
        printf("[3] Jumlah Hari                      = %d\n", totalhari);
        printf("[4] Total Sewa                       = Rp. %.2f\n", totalsewa);
        printf("[6] Pajak 11%%                        = Rp. %.2f\n", totalpajak);
        printf("[7] Total Bayar                      = Rp. %.2f\n", totalbayar);
        printf("----------------------------------------------------\n");
    getch();
    return 0;
}
