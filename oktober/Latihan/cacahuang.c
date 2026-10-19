#include <stdio.h>

int main() {
    int nilai_uang;
    int sisa;
    
    printf("masukkan nila uang : ");
    scanf("%d", &nilai_uang);

    sisa = nilai_uang;

    printf("\nPecahan uang 100000: %d lembar", sisa / 100000);
    sisa = sisa % 100000;

    printf("\nPecahan uang 50000 : %d lembar", sisa / 50000);
    sisa = sisa % 50000;

    printf("\nPecahan uang 20000 : %d lembar", sisa / 20000);
    sisa = sisa % 20000;

    printf("\nPecahan uang 10000 : %d lembar", sisa / 10000);
    sisa = sisa % 10000;

    printf("\nPecahan uang 5000  : %d lembar", sisa / 5000);
    sisa = sisa % 5000;

    printf("\nPecahan uang 1000  : %d buah", sisa / 1000);
    sisa = sisa % 1000;

    printf("\nPecahan uang 500   : %d buah", sisa / 500);
    sisa = sisa % 500;

    printf("\nPecahan uang 100   : %d buah", sisa / 100);
    sisa = sisa % 100;

    printf("\n");

    return 0;
}