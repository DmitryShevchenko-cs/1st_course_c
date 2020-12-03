#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num1, num2, i;
	srand(time(NULL));

	num1 = rand() % 100;
	cout << num1 << endl;

	for (i = 0; ;) {
		cin >> num2;
		i++;
		if (num2 == num1) break;
		if (num2 > num1) cout << "Ваше число больше" << endl;
		if (num2 < num1) cout << "Ваше число меньше" << endl;
	}
	cout << "Ура, вы отгадали число" << endl;
	cout << "Количество попыток:" << i << endl;

	return 0;
}