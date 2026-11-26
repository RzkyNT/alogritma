#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    float harga_sewa, jumlah_jam, total_sewa, pajak, total_bayar;
    int lapangan;
    // Algorithm
    printf("              [ASTRAfield Futsal Court - AFC]\n");
    printf("[PROGRAM SEWA LAPANGAN]\n");
    printf("[1] Satu Pelanggan hanya dapat menyewa 1 lapangan\n");
    printf("[2] Harga sewa merupakan harga sewa per jam\n");
    printf("[3] Harga sewa = harga sewa per jam * jumlah jam\n");
    printf("[4] Harga sewa total = harga sewa + pajak 11%%\n");
    printf("[INPUT DATA SWA]\n");
    printf("PILIH LAPANGAN [1-3] : ");
    scanf("%d", &lapangan);
    printf("JUMLAH JAM (JAM)        : ");
    scanf("%f", &jumlah_jam);
    switch (lapangan) {
        case 1:
            harga_sewa = 150000;
            break;
        case 2:
            harga_sewa = 120000;
            break;
        case 3:
            harga_sewa = 150000;
            break;
        default:
            printf("Pilihan lapangan tidak valid\n");
            return 1; // Exit the program with an error code
    }

    total_sewa = harga_sewa * jumlah_jam;
    pajak = total_sewa * 0.11;
    total_bayar = total_sewa + pajak;

    printf("--------------------------------------------\n");
    printf("                  [INVOICE]\n");
    printf("--------------------------------------------\n");
    printf("[1] Jenis Lapangan           = %d ", lapangan);
    switch (lapangan) {
        case 1:
            printf("(Sintetis)\n");
            break;
        case 2:
            printf("(Rumput)\n");
            break;
        case 3:
            printf("(Indoor)\n");
            break;
    }
    printf("[2] Harga Sewa              = %.2f\n", harga_sewa);
    printf("[3] Jumlah Jam              = %.0f\n", jumlah_jam);
    printf("[4] Total Sewa              = %.2f\n", harga_sewa * jumlah_jam);
    printf("[5] Pajak 11%%               = %.2f\n", pajak);
    printf("[6] Total Bayar             = %.2f\n", total_bayar);
    printf("--------------------------------------------");
    getch();
    return 0;
}
