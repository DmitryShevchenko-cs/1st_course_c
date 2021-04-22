#include "fun.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	struct List* head=NULL;
	
	while (true)
	{

		printf("\n1 - Создание списка\n");
		printf("2 - Печать спика\n");
		printf("3 - Поиск по критерию (осуществить выбор критерия)\n");
		printf("4 - Добавление элемента (в любое заданное место)\n");
		printf("5 - Удаление любого элемента\n");
		printf("6 - Сортировка\n");
		printf("7 - Запись списка в файл \n");
		printf("8 - Создание нового списка из файла \n");
		printf("9 - Выход из программы\n");
		printf(">> ");

		scanf_s("%d", &choice);

		switch (choice) {
		case(1): head = create();
			break;

		case(2): 
			if (head == NULL) {
				printf("Структуры не существует!!!\n\n");
				break;
			}
			print(head);
			break;

		case(3):
			break;

		case(4):
			break;

		case(5):
			break;

		case(6):
			break;

		case(7):
			break;

		case(8):
			break;

		case(9):
			printf("Выход\n");
			return 0;

		default:
			system("cls");
			printf("Неверное число\n");
			break;
		}
	}

	free(head);
	return 0;
}

