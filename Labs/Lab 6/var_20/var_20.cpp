#include <stdio.h>
#include <math.h>
#include "windows.h"

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long n; 
    double dbln;
    double sum = 0;        
    double a;         
    const long double eps = 0.000001;  
    short k1 = 1;         
      

    for (n = 0; ; n++, k1 *= -1) {
        dbln = n;
        a = k1 * (dbln + 1) / (2 * dbln * dbln + 1);

        if (fabs(a) >= eps) {
            sum += a;      
        }
        else break;

        if (n == 9) {
            printf("Сумма 10 членов ряда = %10.7lf\n", sum);
        }
    }

    printf("Полная сумма ряда = %10.7lf\n", sum);
    return 0;
}
