#include "fun.h"
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	

	struct Tabl t {};
	int choice, num = 0;
	bool b=0;
	int line;
	while (true)
	{
		
		printf("1 - ввод с экрана и запись в файл\n");
		printf("2 - ввод случайным образом и запись в файл\n");
		printf("3 - добавить запись в начало файла\n");
		printf("4 - добавить запись в конец файла\n");
		printf("5 - печать одной записи из файла по номеру\n");
		printf("6 - печать всех записей из файла \n");
		printf("7 - выход из программы \n");
		printf(">> ");

		scanf_s("%d", &choice);

		switch (choice) {
		case(1): input(t); // ввод с экрана+++++++++++
			break;

		case(2): random(t); // случайный ввод++++++++
			break;

		case(3):add_before(t);
			break; // добавить в начало

		case(4): add_after(t);
			break; // добавить в конец+++++++++++++++++++++++++

		case(5):  // печать по номеру
			choice_str(t, b);
			if (!b) cout << "Файл пуст или данной строки несуществует" << endl;
			printf("\n\n\n");
			break;

		case(6): // печать всей++++++++++++++++++++
			print(t);
			break;

		case(7):
			printf("Выход\n");
			return 0; //выход++++++++++++++++++

		default:
			system("cls");
			printf("Неверное число\n");
			break;
		}
	}

	return 0;
}

