/*
Case:
kalau lebih dari 20000 pajak 5%, lebih dari 30000 pajak 10%, lebih dari 150000 pajak 20%
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
    float banyak, hargatotal, hargaawal, pajak;

    // Algorithm
    printf("Masukkan banyaknya barang: ");
    scanf("%f", &banyak);

    printf("Masukkan harga satuan: ");
    scanf("%f", &harga);
    hargaawal = banyak * harga;
    
    if(hargaawal >= 100000) {
        pajak = hargaawal * 0.2;
    } else if(hargaawal >= 50000) {
        pajak = hargaawal * 0.1;
    } else if(hargaawal >=30000){
        pajak = hargaawal * 0.05;
    }
    hargatotal = hargaawal + pajak;
    printf("\nBanyaknya barang yang di beli oleh bapak/ibu adalah %.0f pcs dengan harga awal sebesar %2.f, dan pajak %2.f, Harga total: %.2f", banyak, hargaawal, pajak, hargatotal);
    getch();
    return 0;
}

/*Output:

*/
