/* PROGRAM LeapYearMainProgram */
/* The main program determines whether a year is a leap year.
Example of IsLeapYear function call .*/

#include <stdio.h>
#include "conio.h"

/* DECLARATION: */
/* all names that are used globally declared here */
typedef enum {false=0, true=1} boolean;
/* Boolean data type */

/* procedure and function prototypes declared here */
/* returns true if the year is a leap year, false if not */
boolean IsLeapYear(int year);

int main()
{
    /* DECLARATION; */
    /* all names that are used locally declared here */
    /* DECLARATION */
    int year;

    /* ALGORITHM: */
    /* all program's instructions are written here */
    printf("year = "); scanf("%d", &year); /* read year */
    if (IsLeapYear(year)) /* calling IsLeapYear() function*/
        printf("Leap Year\n");
    else
        printf("Non Leap Year\n");
        getch();
}

boolean IsLeapYear(int year)
/* returns true if the year is a leap year, false if not */
{
    /* DECLARATION */
    /* nothing */

    /* ALGORITHM */
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return true;
    else
        return false;
}
