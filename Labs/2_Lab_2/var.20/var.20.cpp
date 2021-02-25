#include "Header.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	struct Tabl t[S]{};
	int a;


	cout << "1 - ввод с экрана\n";
	cout << "2 - случайным образом\n";

	int b;
	cin >> b;

	if (PRINT_TYPE(b) == 1) {
		input(t);
		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> a;

		if (a == 3) {
			cout << endl;
			sort(t);
			cout << "Отсортированная структура:" << endl;
			print(t);
		}

		else if (a == 4) {
			print(t);
		}
	}

	else if (PRINT_TYPE(b) == 2) {
		random(t);
		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> a;

		if (a == 3) {
			cout << endl;
			sort(t);
			cout << "Отсортированная структура:" << endl;
			print(t);
		}

		else if (a == 4) {
			print(t);
		}
		else cout << "wrong number\n";
	}
	else cout << "wrong number";
}