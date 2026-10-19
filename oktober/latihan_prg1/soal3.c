#include <stdio.h>
/*
Luas dan keliling persegi panjang. Buat algoritma yang membaca panjang dan lebar sebuah persegi panjang, lalu menampilkan luas dan kelilingnya.
Contoh 1: masukan 8 5, keluaran Luas 40 dan Keliling 26.
Contoh 2: masukan 10 3, keluaran Luas 30 dan Keliling 26.

PseudoCode
Declaration
panjang, lebar, luas, keliling : Real

Algorithm
write("Masukkan")
read(panjang, lebar)
luas = panjang * lebar
keliling = 2 * (panjang + lebar)
write("Keluaran Luas", luas "dan Keliling", keliling)

*/
int main(void) {
    float panjang, lebar, luas, keliling;
    printf("Masukkan ");
    scanf("%f %f", &panjang, &lebar);
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    printf("Keluaran Luas %f dan keliling %f", luas, keliling);
    return 0;
}
