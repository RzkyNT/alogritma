#include <stdio.h>

int main(void)
{
    int nilai, tugas;

    printf("Nilai akhir (0-100): ");
    scanf("%d", &nilai);
    printf("Status tugas (1=Sudah, 0=Belum): ");
    scanf("%d", &tugas);

    if (nilai < 0 || nilai > 100)
    {
        printf("Nilai tidak valid\n");
    }
    else if (nilai >= 85)
    {
        printf("Predikat: A - Lulus\n");
    }
    else if (nilai >= 70)
    {
        printf("Predikat: B - Lulus\n");
    }
    else if (nilai >= 55)
    {
        if (tugas)
            printf("Predikat: C - Lulus\n");
        else
            printf("Predikat: C - Tidak lulus karena tugas belum dikerjakan\n");
    }
    else
    {
        printf("Predikat: D - Tidak lulus\n");
    }

    return 0;
}
