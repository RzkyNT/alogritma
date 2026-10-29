
/*Buatlah sebuah pseudocode dan program, untuk menghitung Harga setelah pajak. Contoh: Sebuah toko menambahkan PPN 11% pada setiap barang. Buat algoritma yang membaca harga barang dalam rupiah, lalu menampilkan harga yang harus dibayar setelah ditambah PPN.

Contoh 1: masukan 200000, keluaran 222000.

Contoh 2: masukan 50000, keluaran 55500.

Pseudocode
Declaration
harga, hargasetelah : Real

Algoritma
write("Masukkan")
read(harga)
ppn = harga * 0.11
harga = harga + ppn
write("keluaran", harga)
*/
#include <stdio.h>
int main(void) {
float harga, ppn;
printf("Masukkan ");
scanf("%f",&harga);
ppn = harga * 0.11;
harga = harga + ppn;
printf("Keluaran %f", harga);
    return 0;
}
