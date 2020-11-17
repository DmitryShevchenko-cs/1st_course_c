#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main(void) {

	double a, b, c, D, x, x1, x2;

	printf("input a, b, c : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	//ax^2+bx+c=0

	if (a == 0) {
		if (b == 0 && c == 0) { //0(x^2)+0x+0=0
			printf("Wrong numbers!\n");
		}
		else if (b != 0 && c == 0) {
			//x = 0 / b
			printf("x = 0\n");
		}
		else if (b == 0 && c != 0) {
			//c=0
			printf("Wrong nubmers!\n");
		}
		else if (b != 0 && c != 0) {
			x = -c / b;
			printf("x = %lf\n", x);
		}
	}

	else if (a != 0) {
		if (b != 0 && c != 0) {

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
			else if (D < 0) {
				printf("no roots!!!\n");
			}

		}
		else if (b == 0 && c != 0) {
			x = sqrt(-c / a);
			printf("x = %lf\n", x);
		}
		else if (b != 0 && c == 0) {
			x1 = 0;
			x2 = -b / a;
			printf("x1=%lf\n", x1);
			printf("x2=%lf\n", x2);
		}
		else if (b == 0 && c == 0) {
			printf("x = 0\n");
		}
		return 0;
	}

}