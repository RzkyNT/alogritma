/*
Case:
Program Segitiga Angka "Menara Naik" (wajib pakai function)
-> Input tinggi segitiga N (1 - 9)
-> Baris ke-i berisi angka i sebanyak i kali
-> Buat function cetakBaris(int i) yang mencetak satu baris
   (di dalam function gunakan nested for)
-> Main hanya berisi loop pemanggil function

Tantangan baru: nested loop + function (materi di atas soal bonus UTS)
Contoh N = 5:
1
22
333
4444
55555
*/
#include <stdio.h>
#include "conio.h"

void cetakBaris(int i);

int main(void) {
    // Declaration
    int tinggi;

    // Algorithm
    printf("==========Program Segitiga Angka==========\n");
    printf("Masukkan tinggi segitiga (1-9): ");
    scanf("%d", &tinggi);

    if (tinggi < 1 || tinggi > 9) {
        printf("Tinggi harus angka 1 sampai 9.\n");
        return 1;
    }

    for (int i = 1; i <= tinggi; i++) {
        cetakBaris(i);
    }
    getch();
    return 0;
}

// Function mencetak satu baris: angka i sebanyak i kali
void cetakBaris(int i) {
    for (int j = 1; j <= i; j++) {
        printf("%d", i);
    }
    printf("\n");
}
