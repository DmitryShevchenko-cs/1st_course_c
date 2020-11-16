#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, D, x, x1, x2;

	printf("input a, b, c : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	//ax^2+bx+c=0

	if ((a != 0) && (b != 0) && (c != 0)) {
		D = (b * b) - 4 * a * c;
		if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			printf("x1=%.3lf\n", x1);
			printf("x2=%.3lf\n", x2);
		}

		else if (D == 0) {
			x = (-b + sqrt(D)) / (2 * a);
			printf("x=%.3lf\n", x);
		}

		else {
			printf("wrong number!!!\n");
		}
	}
	else if (a == 0) {
		if (b == 0 && c != 0) {

		}
		if (b != 0 && c == 0) {

		}
		else if (b == 0 && c == 0) {

		}
		else if (b != 0 && c != 0) {

		}
	}
	else if (a != 0) {
		if (b == 0 && c != 0)
		else if (b == 0 && c == 0) {

		}
		else if (b != 0 && c == 0) {

		}
	}

	return 0;
}