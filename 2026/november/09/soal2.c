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
    float hargabrg,jumlahbrg,total_biaya,total_biaya_diskon;
    // Algorithm
    printf("============Toko Komputer Esa Unggul============\n");
    printf("->Menyediakan segala jenis peralatan & perangkat komputer\n\n");
    printf("->Pembelian Lebih Dari Rp 500.000 Mendapatkan diskon 5%%\n\n");
    printf("->Pembelian Lebih Dari Rp 1.000.000 Mendapatkan diskon 10%%\n\n");
    printf("->Pembelian Lebih Dari Rp 2.000.000 Mendapatkan diskon 20%%\n\n");

    printf("[Tambah Data Pembelian]\n");
    printf("Input Harga Barang: ");
    scanf("%f", &hargabrg);
    printf("Input Jumlah Barang: ");
    scanf("%f", &jumlahbrg);
    total_biaya = jumlahbrg * hargabrg;
    if (total_biaya>2000000) {
        total_biaya_diskon = total_biaya * 0.2;
    } else if (total_biaya>1000000) {
        total_biaya_diskon = total_biaya * 0.1;
    } else if (total_biaya>500000) {
        total_biaya_diskon = total_biaya * 0.05;
    }
    printf("\n\n[Struk Pembelian Barang]\n");
    printf("\nRp. %.2f * %.0f = Rp. %.2f \n\n", hargabrg, jumlahbrg, total_biaya);
    printf("Total Harga Rp. %.2f \n", total_biaya);
    printf("Total Diskon Rp. %.2f \n", total_biaya_diskon);
    printf("Total bayar Rp. %.2f \n", total_biaya-total_biaya_diskon);

    printf("\nAnda telah melakukan pembelian sebesar Rp. %.2f \n", total_biaya);
    getch();
}
/*Output:

*/
