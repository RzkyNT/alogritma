/*
Case:
Program Pola Angka "Menara Turun"
-> Input satu angka N (1 - 7)
-> Program mencetak 7 baris, dari 7 turun ke 1
-> Baris yang sesuai dengan angka input diganti deret "1234567"
-> Baris lain dicetak dengan format "....i...."

Mirip: soal bonus UTS (pola deret dengan loop + if)
*/
#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    int bil, inputbil;

    // Algorithm
    printf("==========Program Pola Menara Turun==========\n");
    printf("Masukkan angka 1-7: ");
    scanf("%d", &inputbil);

    if (inputbil < 1 || inputbil > 7) {
        printf("Input harus angka 1 sampai 7.\n");
        return 1;
    }

    for (bil = 7; bil >= 1; bil--) {
        if (inputbil == bil) {
            printf("1234567\n");
        } else {
            printf("....%d....\n", bil);
        }
    }
    getch();
    return 0;
}
