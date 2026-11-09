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
    float banyak, hargatotal, cashback;

    // Algorithm
    printf("Masukkan banyaknya barang: ");
    scanf("%f", &banyak);

    printf("Masukkan harga satuan: ");
    scanf("%f", &harga);
    hargatotal = banyak * harga;
    if(hargatotal >= 100000) {
        cashback = hargatotal * 0.2;
    } else if(hargatotal >= 50000) {
        cashback = hargatotal * 0.1;
    } else if(hargatotal >=30000){
        cashback = hargatotal * 0.05;
    }
    printf("\nBanyaknya barang yang di beli oleh bapak/ibu adalah %0.f pcs dengan harga total sebesar Rp %.2f, mendapat cashback sebesar Rp %.2f", banyak, hargatotal, cashback);
    getch();
    return 0;
}

/*Output:

*/
