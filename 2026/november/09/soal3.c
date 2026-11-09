/*
Case:

Pseudocode:
Program Name

Declaration

Algorithm

*/
#include <stdio.h>
#include <conio.h>
int main() {
    // Declaration
    float hargabrg,jumlahbrg,total_biaya,total_biaya_diskon,pembelian,kodebrg;
    // Algorithm
    printf("============Toko Komputer Esa Unggul============\n");
    printf("->Menyediakan segala jenis peralatan & perangkat komputer\n\n");
    printf("->Pembelian Lebih Dari Rp 500.000 Mendapatkan diskon 5%%\n\n");
    printf("->Pembelian Lebih Dari Rp 1.000.000 Mendapatkan diskon 10%%\n\n");
    printf("->Pembelian Lebih Dari Rp 2.000.000 Mendapatkan diskon 20%%\n\n");
    printf("->Daftar Barang\n");
    printf("->[1] Laptop Core i3 8GB/256GB Rp. 7.000.000\n");
    printf("->[2] Laptop Ultra 5 16GB/512GB Rp. 12.000.000\n");
    printf("->[3] Laptop Core Ultra 32GB/1TB Rp. 10.000.000\n");
    printf("->[4] Mouse Silent Click Rp. 2.000.000\n");
    printf("->[5] Ram 8GB Rp. 500.000\n");
    printf("->[6] SSD 512GB Rp. 1.000.000\n");
    printf("->[7] WB Cleaner Rp. 50.000\n");

    printf("[Tambah Data Pembelian]\n");
    printf("Jumlah barang: ");
    scanf("%f", &pembelian);
    for (int i = 0; i < pembelian; i++) {
        printf("[Data Pembelian ke-%d]\n", i+1);
        printf("Input Kode Barang (1-7): ");
        scanf("%f", &kodebrg);
        printf("Input Jumlah Barang: ");
        scanf("%f", &jumlahbrg);
        if (kodebrg == 1) {
            hargabrg = 7000000;
        } else if (kodebrg == 2) {
            hargabrg = 12000000;
        } else if (kodebrg == 3) {
            hargabrg = 10000000;
        } else if (kodebrg == 4) {
            hargabrg = 2000000;
        } else if (kodebrg == 5) {
            hargabrg = 500000;
        } else if (kodebrg == 6) {
            hargabrg = 1000000;
        } else if (kodebrg == 7) {
            hargabrg = 50000;
        }
        total_biaya = jumlahbrg*hargabrg;
        total_biaya = total_biaya + i;
        total_biaya = total_biaya + total_biaya;
        jumlahbrg = jumlahbrg + i;
        kodebrg = kodebrg + i;
    }

    if (total_biaya>2000000) {
        total_biaya_diskon = total_biaya * 0.2;
    } else if (total_biaya>1000000) {
        total_biaya_diskon = total_biaya * 0.1;
    } else if (total_biaya>500000) {
        total_biaya_diskon = total_biaya * 0.05;
    }
    printf("\n\n[Struk Pembelian Barang]\n");
    printf("Total Harga Rp. %.2f \n", total_biaya);
    printf("Diskon Rp. %.2f \n", total_biaya_diskon);
    printf("Total bayar Rp. %.2f \n", total_biaya-total_biaya_diskon);
    printf("\nAnda telah melakukan pembelian sebesar Rp. %.2f \n", total_biaya);
    getch();
}

/*Output:

*/
