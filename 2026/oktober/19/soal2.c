#include <stdio.h>
/* Buatlah algoritma yang membaca kecepatan kendaraan dalam km/jam, lalu mengubahnya ke satuan m/detik dan menampilkan hasilnya. Rumusnya: kecepatan (m/detik) = kecepatan (km/jam) × 1000 / 3600.
Contoh 1: masukan 72, keluaran 20.
Contoh 2: masukan 36, keluaran 10.

Pseudocode
Declaration
kecepatan : float

Algoritma
write("Masukkan")
read(kecepatan)
kecepatan = kecepatan * 1000 / 3600
write("Keluaran", kecepatan)
*/ 
int main(void) {
    float kecepatan;
    printf("Masukkan ");
    scanf("%f", &kecepatan);
    kecepatan = kecepatan * 1000/3600;
    printf("Keluaran %f", kecepatan);
    return 0;
}
