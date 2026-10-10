#include <stdio.h>
#include "conio.h"

int main(void) {
//declaration
float l;
float w;
float area;

//algoritma
printf("Masukkan panjang");
scanf("%f", &l);
printf("Masukkan lebar");
scanf("%f", &w);
area = l * w;
printf("hasilnya");
printf("%f", area);
getch();

}
