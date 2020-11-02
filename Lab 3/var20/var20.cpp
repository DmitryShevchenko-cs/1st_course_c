#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
	
int main(void){

	double x;
	double a = 5.4;
	double n = 2, m = 2;
	double ax, l;
	double t1, t2;

	printf("Input numbers: x> ");
	scanf("%lf", &x);
	l = (pow(a, 2) + pow(x, 2)) / ((a - x) * (a + x));
	
	if (l > 0) {
		
		t1 = (1 / (4 * pow(a, 3))) * log(l);
		ax = a * x;
		t2 = (pow(cos(ax * 3.14 / 180), n - 1)) / (a * (m - 1) * pow(sin(ax * 3.14 / 180), m - 1));

		printf("t1= %lf\n", t1);
		printf("t2= %lf\n", t2);
	}

	else {
		printf("wrong number!!!\n");
	}

}