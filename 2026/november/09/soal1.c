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
    float hargabrg,jumlahbrg,total_biaya;
    // Algorithm
    printf("============Toko Komputer Esa Unggul============\n");
    printf("->Menyediakan segala jenis peralatan & perangkat komputer\n\n");
    printf("[Tambah Data Pembelian]\n");
    printf("Input Harga Barang: ");
    scanf("%f", &hargabrg);
    printf("Input Jumlah Barang: ");
    scanf("%f", &jumlahbrg);
    total_biaya = jumlahbrg * hargabrg;
    printf("\n\n[Struk Pembelian Barang]\n");
    printf("\nRp. %.2f * %.0f = Rp. %.2f \n\n", hargabrg, jumlahbrg, total_biaya);
    printf("Total Bayar Rp. %.2f \n", total_biaya);
    printf("\nAnda telah melakukan pembelian sebesar Rp. %2.f \n",total_biaya);
    getch();
}
/*Output:

*/
