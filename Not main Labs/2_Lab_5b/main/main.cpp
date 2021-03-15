#include "fun.h"
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int* s, *product;
	int n = 0, m = 0;

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
	s = sum(A, n, m);
	printf("\nСумма положительных элементов \n%d\n",*s);
	
	product = prod(A, n, m);
	printf("\nПроизведение отрицательных элементов\n%d\n", *product);
}
