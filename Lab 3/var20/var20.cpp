#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
	
int main(void){

	double x;
	double a = 7.5;
	double n = 2, m = 2;
	double ax, l;
	double t1, t2;

	printf("Input numbers: x> ");
	scanf("%lf", &x);
	l = (pow(a, 2) + pow(x, 2)) / ((a - x) * (a + x));//ОДЗ для логарифма
	if (x < a) {
		
		t1 = (1 / (4 * pow(a, 3))) * log(l);
		ax = a * x;
		t2 = (pow(cos(ax * 3.14 / 180), n - 1)) / (a * (m - 1) * pow(sin(ax * 3.14 / 180), m - 1));
		printf("t1= %lg\n", t1);  //lg-тоже самое что и lf, но исключает незначущие нули
		printf("t2= %lg\n", t2);
	}

	else {
		printf("wrong number!!!\n");
	}

}