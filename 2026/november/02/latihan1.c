/*
Case:

Pseudocode:
Program Name

Declaration

Algorithm

*/
#include <stdio.h>
#include "conio.h"

int main() {
    // Declaration
    float harga;
    float banyak, hargatotal;

    // Algorithm
    printf("Masukkan banyaknya barang: ");
    scanf("%f", &banyak);

    printf("Masukkan harga satuan: ");
    scanf("%f", &harga);

    hargatotal = banyak * harga;

    printf("\nBanyaknya barang yang di beli oleh bapak/ibu adalah %0.f pcs dengan harga total sebesar Rp %.2f", banyak, hargatotal);
    getch();
    return 0;
}

/*Output:

*/
