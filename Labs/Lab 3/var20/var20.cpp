#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
	
int main(void){

	double x;
	double a = 7.5;
	double n = 2, m = 2;
	double с, l;
	double t1, t2;

	printf("Input numbers: x> ");
	scanf("%lf", &x);
	l = (pow(a, 2) + pow(x, 2)) / ((a - x) * (a + x));	//ОДЗ для логарифма
	if (x < a && x!=0) {	//если х=0 то под знаком логарифма будет 1, а логарифм 1 это 0
		
		t1 = (1 / (4 * pow(a, 3))) * log(l);
		с = a*x * 3.14 / 180;
		t2 = (pow(cos(с), n - 1)) / (a * (m - 1) * pow(sin(с), m - 1));
		printf("t1= %lg\n", t1);	//lg-тоже самое что и lf, но исключает незначущие нули
		printf("t2= %lg\n", t2);
	}

	else {
		printf("wrong number!!!\n");
	}

}