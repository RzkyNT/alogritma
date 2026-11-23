#include <stdio.h>

int hitungTarif(int jenis, int jam);

int main(void)
{
    int jenis, jam, tarif;

    printf("Jenis kendaraan (1=Motor, 2=Mobil): ");
    scanf("%d", &jenis);
    printf("Durasi parkir (jam): ");
    scanf("%d", &jam);

    tarif = hitungTarif(jenis, jam);

    if (jam <= 0)
        printf("Durasi harus lebih dari 0\n");
    else if (tarif == -1)
        printf("Jenis kendaraan tidak valid\n");
    else
        printf("Total tarif parkir: Rp%d\n", tarif);

    return 0;
}

int hitungTarif(int jenis, int jam)
{
    int tarifPerJam, tarif;

    if (jam <= 0)
        return 0;

    if (jenis == 1)
        tarifPerJam = 3000;
    else if (jenis == 2)
        tarifPerJam = 5000;
    else
        return -1;

    tarif = tarifPerJam + (jam - 1) * tarifPerJam / 2;
    return tarif;
}
