#include "Matrix.h"

void initialize_1(int* Ar, int n)// матрица заполнения
{
    srand(time(0));
    for (int i = 0; i < n*n; i++) {
        *(Ar + i) = rand() % 99;
        printf("%4d", *(Ar + i));
    }
    printf("\n");
}

void count_1(int* Ar, int n)          //расчет и заполение матрицы 
{
    int sum_j = 0, sum_i = 0;
    int r1 = 0;

    for (int k = n - 1; k >= 0; k--) {
        for (int j = 0; j < n; j++) {

            // сумма ряда
            sum_j += *(Ar + r1 * n + j);

            // сумма столбца
            sum_i += *(Ar + j * n + k);
        }

        *(Ar + r1 * n + k) = sum_i + sum_j - *(Ar + r1 * n + k);
        r1++;
        sum_i = 0;
        sum_j = 0;
    }
}

void initialize_2(int** A, int n)     // матрица заполнения
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(A + i) + j) = rand() % 99;
            printf("%4d", *(*(A + i) + j));
        }
        printf("\n");
    }
}

void count_2(int** A, int n)          //расчет и заполение матрицы 
{        
    int sum_j=0, sum_i=0;
    int r1=0;

    for (int k = n-1; k >= 0; k--) {
        for (int j = 0; j < n; j++) {

            // сумма ряда
            sum_j += *(*(A + r1) + j);

            // сумма столбца
            sum_i += *(*(A + j) + k);
        }

        *(*(A + r1) + k) = sum_i + sum_j - *(*(A + r1) + k);
        r1++;
        sum_i = 0;
        sum_j = 0;
    }
}
