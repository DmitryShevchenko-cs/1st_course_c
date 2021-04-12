#include "fun.h"
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct Tabl t[S]{};
	int a;

	while (true)
	{
		printf("1 - ввод с экрана\n");
		printf("2 - случайным образом\n");
		printf("3 - Добавить запись в начало файла\n");
		printf("4 - Добавить запись в конец файла\n");
		printf("5 - Печать одной записи из файла по номеру.\n");
		printf("6 - Печать всех записей из файла\n");
		printf("7 - Выход\n");

		scanf_s("%d", &a);
		switch (a) {
		case(1): // ввод с экрана
			input(t);
			break;
		case(2):
			random(t); // случайный ввод
			break;
		case(3): break;
		case(4): break;
		case(5):  // печать по номеру

			break;
		case(6): // печать всей
			print(t);
			break;
		case(7):
			printf("Выход\n");
			return 0; //выход
		default:
			printf("Неверное число\n");
			break;
		}
	}

	return 0;
}

