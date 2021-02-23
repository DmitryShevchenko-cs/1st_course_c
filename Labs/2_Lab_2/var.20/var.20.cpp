#include "Header.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	struct Tabl t[S]{};

	cout << "1 - ввод с экрана\n";
	cout << "2 - случайным образом\n";
	
	cin >> PRINT_TYPE;

	if (PRINT_TYPE == 1) {
		input(t);
		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> PRINT_TYPE;

		if (PRINT_TYPE == 3) {
			cout << "Не отсортированная структура:" << endl;
			print(t);
			cout << endl;
			cout << "Отсортированная структура:" << endl;
			f3(t);
			print(t);
		}

		else if (PRINT_TYPE == 4) {
			print(t);
		}
	}

	else if (PRINT_TYPE == 2) {
		r(t);
		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> PRINT_TYPE;

		if (PRINT_TYPE == 3) {
			cout << "Не отсортированная структура:" << endl;
			print(t);
			cout << endl;
			cout << "Отсортированная структура:" << endl;
			f3(t);
			print(t);
		}

		else if (PRINT_TYPE == 4) {
			print(t);
		}
		else cout << "wrong number\n";
	}
	else cout << "wrong number";
}