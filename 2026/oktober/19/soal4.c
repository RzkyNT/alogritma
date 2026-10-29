#include <stdio.h>
/*
Konversi detik ke jam, menit, dan detik. Buat algoritma yang membaca jumlah waktu dalam detik, lalu menampilkannya dalam bentuk jam, menit, dan detik. Soal ini mirip Percobaan 2 (pecahan uang), jadi pakai operator div dan mod.
Contoh 1: masukan 3725, keluaran 1 jam 2 menit 5 detik.
Contoh 2: masukan 7384, keluaran 2 jam 3 menit 4 detik.

Pseudocode
Declaration
detik, menit, jam : Real

write("Masukkan ")
read(detik)
jam = detik div 3600
detik = detik mod 3600
menit = detik div 60
detik = detik mod 60
write("Keluaran " ,jam" Jam", menit " Menit", detik " Detik")


*/
int main(void) {
int detik, menit, jam;
printf("Masukkan ");
scanf("%i", &detik);
jam = detik / 3600;
detik = detik % 3600;
menit = detik / 60;
detik = detik % 60;
printf("Keluaran %i Jam %i Menit %i Detik", jam, menit, detik);
    return 0;
}
