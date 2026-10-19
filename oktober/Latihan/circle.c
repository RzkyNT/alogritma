#include <stdio.h>

void main() {
    #define pi 3.14
    float r;
    float a;

    printf("Masukkan jari - jari linkaran :");
    scanf("%f" , &r);
    a = pi * r * r;

    printf("Luas dari lingkaran tersebut adalah %f", a);

}
