#include <stdio.h>
#include "conio.h"

int main(void) {
    // Declaration
    int bil,inputbil;

    // Algorithm
    scanf("%d", &inputbil);
    for (bil = 9; bil >= 1; bil--) {
        if (inputbil == bil) {
            printf("123456789\n");
        } else   {
            printf("....%d....\n", bil);
        }
    }
    getch();
    return 0;
}
