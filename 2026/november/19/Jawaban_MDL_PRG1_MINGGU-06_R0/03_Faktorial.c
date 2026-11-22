/*
Pseudocode:
Program MenghitungFaktorial
DEKLARASI:
    n, hasil : integer
function faktorial(n : integer) -> integer
    hasil <- 1
    for i <- 1 to n do
        hasil <- hasil * i
    return hasil
ALGORITMA:
    read n
    if n < 0 or n > 12 then
        write "Input harus berada pada 0..12"
    else
        write faktorial(n)
*/
#include <stdio.h>
int faktorial(int n);
int main(void)
{
    int n;
    printf("Masukkan bilangan (0..12) = ");
    scanf("%d", &n);
    if (n < 0 || n > 12)
        printf("Input harus berada pada 0..12\n");
    else
        printf("%d! = %d\n", n, faktorial(n));

    return 0;
}
int faktorial(int n)
{
    int i;
    int hasil = 1;
    for (i = 1; i <= n; i++)
        hasil = hasil * i;
    return hasil;
}
