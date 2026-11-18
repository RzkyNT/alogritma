
#include <stdio.h>
#include <conio.h>

void inputnilaialastinggi();
void CalculateTriangleArea(float base, float height);
void PrintArea(float area);
float area, base, height, b, h;
int main(void) {
    inputnilaialastinggi();
    getch();
    return 0;
}

void inputnilaialastinggi() {
    // Declaration
    printf("Masukkan nilai alas: ");
    scanf("%f", &b);

    printf("Masukkan nilai tinggi: ");
    scanf("%f", &h);

    // Algorithm
    CalculateTriangleArea(b, h);
}

void CalculateTriangleArea(float base, float height) {
    area = (base * height) / 2.0;

    PrintArea(area);
}

void PrintArea(float area) {
    printf("\nLuas segitiga adalah: %.2f\n", area);

}
