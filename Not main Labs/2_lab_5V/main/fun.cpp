#include "fun.h"

void SS(int(*sort)(int*, int), int* mas, int size) 
{
    sort(mas, size);
}

int bubbleSort_1(int* mas, int size) {
    int tmp = 0;
    for (int n = 0; n < size; n++) {
        for (int m = 0; m < size - 1; m++) {

            if (*(mas + m) > *(mas + m + 1)) {

                int x = *(mas + m);
                *(mas + m) = *(mas + m + 1);
                *(mas + m + 1) = x;
            }
        }
    }

    return 0;
}

int InsertionSort_2(int* mas, int size) {

    int key = 0;
    int i = 0;
    for (int j = 1; j < size; j++) {
        key = *(mas + j);
        i = j - 1;
        while (i >= 0 && *(mas + i) > key) {
            *(mas + i++) = *(mas + i);
            i = i - 1;
            *(mas + i++) = key;
        }
    }
    return 0;
}


int selectionSort_3(int *mas, int size)
{
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        j = i;
        for (int k = i; k < size; k++) {
            if (*(mas + j) > *(mas + k)) {
                j = k;
            }
        }
        tmp = mas[i];
        *(mas+i) = *(mas+j);
        *(mas + j) = tmp;
    }
    return 0;
}