#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <math.h>

	
int main(void){

	double x = 2.3, a = 3.4;
	double n = 2.3, m = 3.4;
	double lg;
	long double ax;
	long double t1, t2;
	

	printf("Input numbers: x, a> ");
	//scanf("%lf %lf", &x, &a);
	lg = ((pow(a, 2) + pow(x, 2)) / (pow(a, 2) - pow(x, 2)));
	t1 = (1 / (4 * pow(a, 3))) * log(lg);
	printf("t1= %lf\n", t1);

	printf("Input numbers: n, m> ");
	//scanf("%lf %lf", &x, &a);
	ax = a * x;
	t2 = (pow(cos(ax), n - 1)) / (a * (m - 1) * pow(sin(ax), m - 1));
	printf("t2= %lf\n", t2);


}