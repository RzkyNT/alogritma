/*
Pseudocode:
Program KonversiRomawi

DEKLARASI:
    n : integer

function roman(n : integer) -> string
    depend on n
        1  : return "I"
        2  : return "II"
        3  : return "III"
        4  : return "IV"
        5  : return "V"
        6  : return "VI"
        7  : return "VII"
        8  : return "VIII"
        9  : return "IX"
        10 : return "X"
        otherwise : return "Input tidak valid"

ALGORITMA:
    read n
    write roman(n)
*/
#include <stdio.h>
char *roman(int n);
int main(void)
{
    int n;
    printf("Masukkan angka (1..10) = ");
    scanf("%d", &n);
    printf("Angka Romawi = %s\n", roman(n));
    return 0;
}

char *roman(int n)
{
    switch (n)
    {
        case 1: return "I";
        case 2: return "II";
        case 3: return "III";
        case 4: return "IV";
        case 5: return "V";
        case 6: return "VI";
        case 7: return "VII";
        case 8: return "VIII";
        case 9: return "IX";
        case 10: return "X";
        default: return "Input tidak valid";
    }
}
