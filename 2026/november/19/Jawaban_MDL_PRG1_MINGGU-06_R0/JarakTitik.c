/*
Pseudocode:
Program MenghitungJarakTitik

DEKLARASI:
    type Titik : record < x : real, y : real >
    P1, P2 : Titik
    hasil : real

function akarKuadrat(bilangan : real) -> real
    if bilangan = 0 then
        return 0
    perkiraanAkar <- bilangan / 2
    repeat 20 times
        perkiraanAkar <- (perkiraanAkar + bilangan / perkiraanAkar) / 2
    return perkiraanAkar

function jarak(P1, P2 : Titik) -> real
    dx <- P1.x - P2.x
    dy <- P1.y - P2.y
    return akarKuadrat(dx * dx + dy * dy)

ALGORITMA:
    read P1.x, P1.y, P2.x, P2.y
    hasil <- jarak(P1, P2)
    write hasil
*/
#include <stdio.h>
typedef struct
{
    float x;
    float y;
} Titik;
float jarak(Titik P1, Titik P2);
float akarKuadrat(float bilangan);
int main(void)
{
    Titik P1;
    Titik P2;
    printf("Titik P1:\n");
    printf("x = ");
    scanf("%f", &P1.x);
    printf("y = ");
    scanf("%f", &P1.y);
    printf("Titik P2:\n");
    printf("x = ");
    scanf("%f", &P2.x);
    printf("y = ");
    scanf("%f", &P2.y);
    printf("Jarak kedua titik = %.2f\n", jarak(P1, P2));
    return 0;
}
float jarak(Titik P1, Titik P2)
{
    float dx = P1.x - P2.x;
    float dy = P1.y - P2.y;
    return akarKuadrat(dx * dx + dy * dy);
}
float akarKuadrat(float bilangan)
{
    float perkiraanAkar;
    int i;

    if (bilangan == 0)
    {
        return 0;
    }
    perkiraanAkar = bilangan / 2;
    for (i = 0; i < 20; i++)
    {
        perkiraanAkar = (perkiraanAkar + bilangan / perkiraanAkar) / 2;
    }
    return perkiraanAkar;
}
