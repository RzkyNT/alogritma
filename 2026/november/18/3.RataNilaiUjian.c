/* PROGRAM RerataNilaiUjian
{ Program menghitung nilai rata-rata ujian N orang mahasiswa }
*/

#include <stdio.h>

/* Deklarasi purwarupa fungsi yang digunakan */
void HitungRataRata(int N, float *u);
/* { menghitung rata-rata N buah bilangan bulat yang dibaca dari papan ketik.
     N adalah banyaknya data, nilainya sudah terdefinisi,
     sedangkan u adalah luaran yang berisi rata-rata seluruh data.}
*/

int main()
{
    /* DEKLARASI */
    int N;          /* jumlah peserta ujian */
    float rerata;   /*{ nilai rata-rata seluruh peserta }*/

    /* PROGRAM UTAMA */
    printf("Jumlah peserta ujian? = "); 
    scanf("%d", &N);
    HitungRataRata(N, &rerata);     /*{ panggil prosedur }*/
    printf("Nilai rata-rata = %f \n", rerata);  /*{ cetak nilai rata-rata }*/
    if (rerata < 50)
    {
        printf("nilai rata-rata ujian tidak bagus \n");
    }
    else
    {
        printf("nilai rata-rata ujian bagus \n");
    }
}

void HitungRataRata(int N, float *u)
/* { menghitung rata-rata N buah bilangan bulat yang dibaca dari papan ketik.
     N adalah banyaknya data, nilainya sudah terdefinisi,
     sedangkan u adalah luaran yang berisi rata-rata seluruh data.}
*/
{
    /* DEKLARASI */
    float x;        /*{ data bilangan bulat yang dibaca dari papan ketik }*/
    int i;          /*{ pencacah pengulangan }*/
    float jumlah;   /*{ jumlah seluruh data }*/

    /* ALGORITMA */
    jumlah = 0; /*{ inisialisasi }*/
    for (i = 1; i <= N; i++)
    {
        printf("Nilai ujian yang ke-%d = ", i); scanf("%f", &x);
        jumlah = jumlah + x;
    }
    *u = jumlah / N;
}
