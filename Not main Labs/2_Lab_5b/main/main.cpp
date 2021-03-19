#include "fun.h"
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	int n = 0, m = 0;
	int result;

	printf("Введите кол-во строк и столбцов: ");
	scanf("%d", &n);
	scanf("%d", &m);
	printf("\n");

	int** A = new int* [n];
	for (int i = 0; i < n; i++) {
		*(A + i) = new int[m];
	}
	printf("Матрица: \n");
	initialize(A, n, m);

	int(*s)(int** A, int n, int m);
	int(*product)(int** A, int n, int m);

	s = sum;
	result = s(A, n, m);
	printf("\nСумма положительных элементов \n%d\n",result);
	
	product = prod;
	result = product(A, n, m);
	printf("\nПроизведение отрицательных элементов\n%d\n", result);

	for (int i = 0; i < n; i++)
	{
		delete[] A[i];
	}
	delete[] A;
}
