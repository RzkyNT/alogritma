#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    float harga_sewa, jumlah_jam, total_sewa, pajak, total_bayar;

    // Algorithm
    printf("              [ASTRAfield Futsal Court - AFC]\n");
    printf("[PROGRAM SEWA LAPANGAN]\n");
    printf("[1] Satu Pelanggan hanya dapat menyewa 1 lapangan\n");
    printf("    [1] Sintetis Rp. 150.000\n");
    printf("    [2] Rumput   Rp. 120.000\n");
    printf("    [3] Indoor   Rp. 150.000\n");
    printf("[2] Admin cukup memilih jenis lapangan\n");
    printf("[3] Harga sewa = harga sewa per jam * jumlah jam\n");
    printf("[4] Harga sewa total = harga sewa + pajak 11%%\n");
    printf("[INPUT DATA SWA]\n");
    printf("HARGA SEWA PER JAM (RP) : ");
    scanf("%f", &harga_sewa);
    printf("JUMLAH JAM (JAM)        : ");
    scanf("%f", &jumlah_jam);
    
    total_sewa = harga_sewa * jumlah_jam;
    pajak = total_sewa * 0.11;
    total_bayar = total_sewa + pajak;

    printf("--------------------------------------------\n");
    printf("                  [INVOICE]\n");
    printf("--------------------------------------------\n");
    printf("[1] Rp. %.2f * %.0f Jam   = %.2f\n", harga_sewa, jumlah_jam, harga_sewa * jumlah_jam);
    printf("[2] Pajak 11%%               = %.2f\n", pajak);
    printf("[3] Total Bayar             = %.2f\n", total_bayar);
    printf("--------------------------------------------");
    getch();
    return 0;
}
