#include <stdio.h>
#include "windows.h"
#include <math.h>

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    short n;      
    double x, y;   
    short h;        
    printf("|   x   |      y     |\n");
    printf("|-------|------------|\n");
    for (n = 0; n < 5; n++) {

        for (x = 0; x < 4; x += 0.25) {
            if (x < 1) y = 1 - x;
            else if (x < 3) y = -sqrt(1 - (x - 2) * (x - 2));
            else y = x - 3;
            printf("| %5.2lf | %10.7lf |", x + n * 4, y);

            h = (y + 1) * 10;
            if (y - 1 - h * 10 > 0.5) h++;
            for (; h > 0; h-- ) printf(" ");
            printf("*\n");
        }
        //getchar();
    }
    return 0;
} 