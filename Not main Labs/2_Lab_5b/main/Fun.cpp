#include "fun.h"
void initialize(int** A, int n, int m)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(*(A + i) + j) = rand() % 10-5;
            printf("%4d", *(*(A + i) + j));
        }
        printf("\n");
    }
}

int* sum(int** A, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(*(A + i) + j) > 0) sum += *(*(A + i) + j);
        }
    }

    return &sum;
}

int* prod(int** A, int n, int m)
{
    int pr = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(*(A + i) + j) < 0) pr *= *(*(A + i) + j);
        }
    }

    return &pr;

}