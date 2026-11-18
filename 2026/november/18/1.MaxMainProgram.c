/* PROGRAM MaxMainProgram */
/* The main program that calls the Max function
    to determine the largest value of two input integers a and b) .*/

#include <stdio.h>
#include "conio.h"

/* DECLARATION: */
/* all names that are used globally declared here */

/* procedure and function prototypes declared here */
/* returns the greatest value of a and b */

int Max(int a, int b)
/* returns the largest value of a and b */
{
    /* DECLARATION */
        /* nothing */

    /* ALGORITHM */
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
    /* DECLARATION: */
    /* all names that are used locally declared here */
    /* DECLARATION */
    int firstInt,secondInt ;      /* value to be compared */
    int MaxValue;                 /* maximum value */

    /* ALGORITHM: */
    /* all program's instructions are written here */
    printf("firstInt = "); scanf("%d", &firstInt);
    printf("secondInt = "); scanf("%d", &secondInt);
    MaxValue = Max(firstInt, secondInt);
    printf("Maximum Value = %d \n", MaxValue);
    
    getch();
}
