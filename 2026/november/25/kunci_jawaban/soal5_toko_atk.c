/*
Case:
Toko ATK "Tuntas Stationery" - Program Pembelian Banyak Barang
-> Daftar barang:
   [1] Pulpen       Rp. 5.000
   [2] Buku Tulis   Rp. 4.000
   [3] Pensil       Rp. 2.000
   [4] Penghapus    Rp. 3.000
   [5] Tip-Ex       Rp. 10.000
   [6] Penggaris    Rp. 6.000
   [7] Map Plastik  Rp. 8.000
-> Input jumlah item, lalu loop: kode barang + jumlah unit
-> Akumulasi total dengan switch-case
-> Diskon bertingkat: > 200.000 = 20%, > 100.000 = 10%, > 50.000 = 5%

Mirip: pertemuan 09 soal3 (Toko Komputer loop pembelian)
*/
#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    float total = 0, diskon;
    int jItem, kode, jbrg;

    // Algorithm
    printf("============Tuntas Stationery============\n");
    printf("->Toko alat tulis lengkap & murah\n\n");
    printf("->Total > Rp. 200.000 Diskon 20%%\n");
    printf("->Total > Rp. 100.000 Diskon 10%%\n");
    printf("->Total > Rp. 50.000  Diskon 5%%\n\n");
    printf("->[Daftar Barang]\n");
    printf("->[1] Pulpen      Rp. 5.000\n");
    printf("->[2] Buku Tulis  Rp. 4.000\n");
    printf("->[3] Pensil      Rp. 2.000\n");
    printf("->[4] Penghapus   Rp. 3.000\n");
    printf("->[5] Tip-Ex      Rp. 10.000\n");
    printf("->[6] Penggaris   Rp. 6.000\n");
    printf("->[7] Map Plastik Rp. 8.000\n\n");

    printf("[Tambah Data Pembelian]\n");
    printf("Jumlah Item: ");
    scanf("%d", &jItem);

    for (int i = 1; i <= jItem; i++) {
        printf("[Data Pembelian ke-%d]\n", i);
        printf("Kode Barang (1-7): ");
        scanf("%d", &kode);
        printf("Jumlah Barang    : ");
        scanf("%d", &jbrg);
        switch (kode) {
            case 1: total = total + (5000 * jbrg); break;
            case 2: total = total + (4000 * jbrg); break;
            case 3: total = total + (2000 * jbrg); break;
            case 4: total = total + (3000 * jbrg); break;
            case 5: total = total + (10000 * jbrg); break;
            case 6: total = total + (6000 * jbrg); break;
            case 7: total = total + (8000 * jbrg); break;
            default: printf("Kode barang tidak valid.\n"); return 1;
        }
    }

    if (total > 200000) {
        diskon = total * 0.2;
    } else if (total > 100000) {
        diskon = total * 0.1;
    } else if (total > 50000) {
        diskon = total * 0.05;
    } else {
        diskon = 0;
    }

    printf("\n\n[Struk Pembelian Barang]\n");
    printf("Total Harga Rp. %.2f \n", total);
    printf("Diskon Rp. %.2f \n", diskon);
    printf("Total Bayar Rp. %.2f \n", total - diskon);
    printf("\nTerima kasih telah berbelanja di Tuntas Stationery \n");
    getch();
    return 0;
}
