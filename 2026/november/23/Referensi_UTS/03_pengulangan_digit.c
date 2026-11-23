#include <stdio.h>

int jumlahDigit(int n);
int jumlahDigitGanjil(int n);

int main(void)
{
    int n;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Input harus positif\n");
    else
    {
        printf("Jumlah semua digit = %d\n", jumlahDigit(n));
        printf("Jumlah digit ganjil = %d\n", jumlahDigitGanjil(n));
    }

    return 0;
}

int jumlahDigit(int n)
{
    int jumlah = 0;

    while (n > 0)
    {
        jumlah += n % 10;
        n /= 10;
    }

    return jumlah;
}

int jumlahDigitGanjil(int n)
{
    int jumlah = 0;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 == 1)
            jumlah += digit;
        n /= 10;
    }

    return jumlah;
}
