#include <stdio.h>
char* roman(int angka);

int main() {
    int n;
    printf("Masukkan angka (1..10) = ");
    scanf("%d", &n);

    printf("Angka Romawi = %s \n", roman(n));

    return 0;
}

char* roman(int angka) {
        switch (angka) {
        case 1:  return "I";
        case 2:  return "II";
        case 3:  return "III";
        case 4:  return "IV";
        case 5:  return "V";
        case 6:  return "VI";
        case 7:  return "VII";
        case 8:  return "VIII";
        case 9:  return "IX";
        case 10: return "X";
        default: return "Angka di luar jangkauan";
    }
}
