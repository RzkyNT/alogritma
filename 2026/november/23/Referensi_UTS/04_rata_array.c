#include <stdio.h>

int main(void)
{
    int n, i, nilai[100], maksimum, minimum;
    float rataRata = 0;

    printf("Banyak nilai: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Banyak nilai harus antara 1 sampai 100\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
        rataRata += nilai[i];
    }

    maksimum = nilai[0];
    minimum = nilai[0];

    for (i = 1; i < n; i++)
    {
        if (nilai[i] > maksimum)
            maksimum = nilai[i];
        if (nilai[i] < minimum)
            minimum = nilai[i];
    }

    rataRata /= n;

    printf("Nilai minimum = %d\n", minimum);
    printf("Nilai maksimum = %d\n", maksimum);
    printf("Nilai rata-rata = %.2f\n", rataRata);

    return 0;
}
