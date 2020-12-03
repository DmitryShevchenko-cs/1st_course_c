#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
	srand(time(NULL));

	int result;
	int mark = 0;

	for (int i = 0; i < 10; i++) {
		
		int num1 = rand() % 10,
			num2 = rand() % 10;
	
		cout << num1 << "*" << num2 << "=";
		cin >> result;

		if (result == num1 * num2) mark++;
		else cout << "";
	}

	cout << "Your mark is:" << mark << "/10" << endl;
	return 0;
}