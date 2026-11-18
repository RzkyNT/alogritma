/*
Case:

Pseudocode:
Program Name

Declaration

Algorithm

*/
#include <stdio.h>
#include "conio.h"
int main() {
    float total = 0, diskon;
    int jBarang, kode, jbrg;
    printf("============Toko Komputer Esa Unggul============\n");
    printf("->Menyediakan segala jenis peralatan & perangkat komputer\n\n");
    printf("->Pembelian Lebih Dari Rp 500.000 mendapatkan diskon 5%%\n\n");
    printf("->Pembelian Lebih Dari Rp 1.000.000 mendapatkan diskon 10%%\n\n");
    printf("->Pembelian Lebih Dari Rp 2.000.000 mendapatkan diskon 20%%\n\n");
    printf("->[Daftar Barang]\n");
    printf("->[1] Laptop Core i3 8GB/256GB Rp. 7.000.000\n");
    printf("->[2] Laptop Core ultra 5 16GB/512GB Rp. 12.000.000\n");
    printf("->[3] Laptop Core ultra 7 32GB/1TB Rp. 10.000.000\n");
    printf("->[4] Mouse Silent Click Rp. 200.000\n");
    printf("->[5] Ram 8GB Rp. 500.000\n");
    printf("->[6] SSD 512GB Rp. 1.000.000\n");
    printf("->[7] WD Cleaner Rp. 50.000\n");
    printf("[Tambah Data Pembelian]\n");
    printf("Jumlah Barang: ");
    scanf("%d", &jBarang);
    for (int i = 1; i <= jBarang; i++) {
        printf("[Data Pembelian ke-%d]\n", i);
        printf("Input Kode Barang (1-7): ");
        scanf("%d", &kode);
        printf("Input Jumlah Barang: ");
        scanf("%d", &jbrg);
        switch (kode) {
            case 1: total = total + (7000000 * jbrg);break;
            case 2: total = total + (12000000 * jbrg);break;
            case 3: total = total + (10000000 * jbrg);break;
            case 4: total = total + (200000 * jbrg);break;
            case 5: total = total + (500000 * jbrg);break;
            case 6: total = total + (1000000 * jbrg);break;
            case 7: total = total + (50000 * jbrg);break;
        }
    }
    if (total > 2000000) {
        diskon = total * 0.2;
    }else if (total > 1000000) {
        diskon = total * 0.1;
    }else if (total > 500000) {
        diskon = total * 0.05;
    }else {diskon = 0;}
    printf("\n\n\n[Struk Pembelian Barang]\n\n\n");
    printf("Total Harga Rp. %.2f\n", total);
    printf("Diskon Rp. %.2f\n", diskon);
    printf("Total Bayar Rp. %.2f\n", total - diskon);
    printf("\nAnda telah melakukan pembelian sebesar Rp. %.2f\n", total);
    getch();
}

/*Output:

*/
