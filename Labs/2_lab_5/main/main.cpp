﻿#include "Matrix.h"


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
	int n = 0;
	printf("Введите кол-во строк и столбцов: ");
	scanf("%d", &n);
	printf("\n");

	choise

		switch (a) {

		case 1: 
		{
			int *A = new int[n * n];
			initialize_1(A, n);
			
			break; 
		}
		case 2: 
		{
			int** A = new int* [n];
			for (int i = 0; i < n; i++) {
				*(A + i) = new int[n];
			}

			printf("Матрица: \n");

			initialize_2(A, n);
			count_2(A, n);

			printf("\n");
			printf("Матрица результат: \n");

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					printf("%5d", *(*(A + i) + j));
				}
				cout << endl;
			}

			for (int i = 0; i < n; i++)
			{
				delete[] A[i];
			}
			delete[] A;
			break;
		}

		default: {
			printf("ERROR\n");
			break;
		}
		}
	return 0;
}