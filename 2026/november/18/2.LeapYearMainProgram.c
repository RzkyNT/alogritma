#include <stdio.h>
#include "conio.h"
typedef enum {false=0, true=1} boolean;
boolean IsLeapYear(int year);
int main()
{
    int year;
    printf("year = "); scanf("%d", &year); 
    if (IsLeapYear(year)) 
        printf("Leap Year\n");
    else
        printf("Non Leap Year\n");
        getch();
}
boolean IsLeapYear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return true;
    else
        return false;
}
