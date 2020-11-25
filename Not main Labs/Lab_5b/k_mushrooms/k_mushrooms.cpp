#define  _CRT_SECURE_NO_WARNINGS
#include "windows.h"
#include <iostream>

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long long k;

    while (true) {

        printf("Сколько у вас грибов?");
        scanf(" У меня %lld", &k);

        if (k % 10 == 1 && k % 100 != 11) 
            printf("У меня %lld гриб\n\n", k);

        if ((k % 10 == 2 || k % 10 == 3 || k % 10 == 4) && 
            k % 100 != 12 && k % 100 != 13 && k % 100 != 14)
            printf("У меня %lld гриба\n\n", k);

        if (k % 10 > 4 || k % 10 == 0)
            printf("У меня %lld грибов\n\n", k);

        if (k % 100 == 11 || k % 100 == 12 || k % 100 == 13 || k % 100 == 14)
            printf("У меня %lld грибов\n\n", k);

    }

    return 0;
}
