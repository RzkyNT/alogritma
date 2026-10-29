/*
Rata-rata nilai. Seorang siswa mendapat nilai tiga mata pelajaran: Matematika, Fisika, dan Kimia. Buat algoritma yang membaca ketiga nilai itu (bilangan real), lalu menampilkan rata-ratanya dengan 2 angka di belakang koma.
Contoh 1: masukan 80 90 85, keluaran 85.00.
Contoh 2: masukan 78 82 90, keluaran 83.33.
Pseudocode
Declaration
mtk, fisika, kimia, rataRata : Real

write("Masukkan ")
read(mtk, kimia, rataRata)
rataRata = (mtk + kimia + fisika) / 3
write("Keluaran ", rataRata)
*/
#include <stdio.h>

int main(void) {
float mtk, fisika, kimia, rataRata;
printf("Masukkan ");
scanf("%f %f %f", &mtk, &kimia, &fisika);
rataRata = (mtk + kimia + fisika)/3;
printf("Keluaran %.2f", rataRata);
    return 0;
}
