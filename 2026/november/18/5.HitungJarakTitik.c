/*
Pseudocode:
type Titik : record < x : real, y : real >

function jarak(P1, P2 : Titik) -> real
{ mengembalikan jarak Euclidean antara titik P1 dan P2 }

DEKLARASI:
    d : real

ALGORITMA:
    d <- sqrt((P1.x - P2.x)*(P1.x - P2.x) + (P1.y - P2.y)*(P1.y - P2.y))
    return d
*/
/* PROGRAM MenghitungJarakTitik */
#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Titik;

float jarak(Titik P1, Titik P2);

int main() {

    Titik P1, P2;
    float hasilJarak;

    printf("Titik P1 : \n");
    printf("  x = "); scanf("%f", &P1.x);
    printf("  y = "); scanf("%f", &P1.y);

    printf("Titik P2 : \n");
    printf("  x = "); scanf("%f", &P2.x);
    printf("  y = "); scanf("%f", &P2.y);

    hasilJarak = jarak(P1, P2);
    printf("Jarak kedua titik : %f \n", hasilJarak);

    return 0;
}

float jarak(Titik P1, Titik P2) {
    float d;

    d = sqrt(((P1.x - P2.x) * (P1.x - P2.x)) + ((P1.y - P2.y) * (P1.y - P2.y)));
    return d;
}
