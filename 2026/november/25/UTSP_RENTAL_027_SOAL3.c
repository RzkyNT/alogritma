#include <stdio.h>

int main(void) {
    float hargasw, totalbayar, totalpajak, totalhari, totalsupir;
    int hari, jenismbl, jmlmbl;
    char supir[2];

    printf("                     [Astrac Rent Car-ARC]\n\n");
    printf("[Program Sewa Mobil]\n");
    printf("[1] Satu Pelanggan hanya dapat menyewa 1 Kendaraan\n");
    printf("[2] Harga sewa merupakan harga sewa harian\n");
    printf("[3] 1. Avanza Rp. 500000, 2. Innova Rp. 600000, 3. Hiace Rp. 1000000\n");
    printf("[4] Harga Supir Rp. 200.000 / Hari\n");
    printf("[5] Harga sewa = Harga Sewa Harian * Jumlah Hari\n");
    printf("[6] Harga sewa total = Harga Sewa + Pajak 11%%\n\n\n");

    printf("[INPUT DATA SEWA]\n");
    printf("Berapa Jumlah Mobil?    : ");
    scanf("%d", &jmlmbl);
    for (int i = 1; i <= jmlmbl; i++) {
        printf("----------------------------\n");
        printf("[Data Mobil-%d]\n", i);
        printf("Jenis Mobil[1-3] : ");
        if (scanf("%d", &jenismbl) != 1) {
            printf("Jenis mobil tidak valid.\n");
            return 1;
        }

        switch (jenismbl) {
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

        printf("Supir? (Y/N)     : ");
        scanf(" %c", &supir);
        if (supir == 'Y') {
            totalsupir = 200000.0 * hari;
        } else {
            totalsupir = 0.0;
        }
    }

        totalhari = hargasw * hari;
        totalsupir = (supir == 'y' || supir == 'Y') ? 200000.0 * hari : 0.0;
        totalpajak = (totalhari + totalsupir) * 0.11;
        totalbayar = totalhari + totalsupir + totalpajak;

        printf("\n----------------------------------------------------\n");
        printf("                     [Invoice]\n");
        printf("[1] Jenis Mobil                      = %d\n", jenismbl);
        printf("[2] Jumlah Mobil                      = %d\n", jmlmbl);
        printf("[3] Jumlah Hari                      = %d\n", hari);
        printf("[4] Total Sewa                       = Rp. %.2f\n", totalhari);
        printf("[5] Total Supir                      = Rp. %.2f\n", totalsupir);
        printf("[6] Pajak 11%%                        = Rp. %.2f\n", totalpajak);
        printf("[7] Total Bayar                      = Rp. %.2f\n", totalbayar);
        printf("----------------------------------------------------\n");
    }

