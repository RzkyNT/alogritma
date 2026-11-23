#include <stdio.h>

typedef struct
{
    float celsius;
    float fahrenheit;
    float kelvin;
} Suhu;

float keFahrenheit(float celsius);
float keKelvin(float celsius);
void tampilkanSuhu(Suhu suhu);

int main(void)
{
    Suhu suhu;

    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &suhu.celsius);

    suhu.fahrenheit = keFahrenheit(suhu.celsius);
    suhu.kelvin = keKelvin(suhu.celsius);
    tampilkanSuhu(suhu);

    return 0;
}

float keFahrenheit(float celsius)
{
    return celsius * 9.0 / 5.0 + 32.0;
}

float keKelvin(float celsius)
{
    return celsius + 273.15;
}

void tampilkanSuhu(Suhu suhu)
{
    printf("%.2f Celsius = %.2f Fahrenheit\n", suhu.celsius, suhu.fahrenheit);
    printf("%.2f Celsius = %.2f Kelvin\n", suhu.celsius, suhu.kelvin);
}
