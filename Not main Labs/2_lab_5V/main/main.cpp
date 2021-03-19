#include "fun.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	scanf("%d", &a);

	int (*point)(int a);
	point = point_a;
	cout << point(a) << endl;

}