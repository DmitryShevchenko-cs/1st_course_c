#include "fun.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите размер массива :\n");
	int n;
	cin >> n;

	printf("\nМассив до :\n");
	srand(time(0));
	int* A = new int[n];
	for (int i = 0; i < n; i++) {
		*(A + i) = rand() % 10;
		printf("%4d", *(A + i));
	}

	cout << endl;
	cout << endl;
	printf("Выберите метод соритировки :\n");
	printf("1- Пузырьковая сортировка\n");
	printf("2- П\n");
	printf("3- Сортировка выбором\n");

	int a;
	cin >> a;

	switch (a) {
		case 1: 
		{	
			SS(bubbleSort_1, A, n);
			break;
		}

		case 2: 
		{
			SS(bubbleSort_1, A, n);
			break;
		}

		case 3:
		{
			SS(selectionSort_3, A, n);
			break;
		}
	}
	cout << endl;

	printf("Массив после :\n");
	for (int i = 0; i < n; i++) {
		printf("%4d", *(A + i));
	}
}