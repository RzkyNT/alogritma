#include <stdio.h>
#include "conio.h"

void CalculateTriangleArea (float base, float height, float *area);

int main()
{
float b;
float h;
float a;
printf("Triangle base? "); scanf("%f", &b); printf("\nTriangle height? "); scanf("%f", &h);
CalculateTriangleArea(b, h, &a);
printf("Triangle Area = %.2f \n", a);
printf("Finish");
getch();
};
void CalculateTriangleArea (float base, float height, float *area)
{
    *area = (base * height)/2.0;
}
