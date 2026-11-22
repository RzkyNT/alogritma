#include <stdio.h>
#include "conio.h"
int Max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int firstInt,secondInt ;      
    int MaxValue;                 
    printf("firstInt = "); scanf("%d", &firstInt);
    printf("secondInt = "); scanf("%d", &secondInt);
    MaxValue = Max(firstInt, secondInt);
    printf("Maximum Value = %d \n", MaxValue);
    getch();
}
