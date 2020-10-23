#include <stdio.h>
#include <iostream>
#include <math.h>

double x, a, n, m;
double lg;
long double t1, t2;
int main(void){

	printf("input x:");
	scanf_s("%lf", &x);//2
	printf("input a:");
	scanf_s("%lf", &a);//3
	printf("input n:");
	scanf_s("%lf", &a);//4
	printf("input m:");
	scanf_s("%lf", &a);//5
	
	lg = ((pow(double(a), 2) + pow(double(x), 2)) / (pow(double(a), 2) - pow(double(x), 2)));
	t1 = (1/(4*pow(double(a), 3)))*log(lg);
	t2 = ( pow(cos(a * x), n - 1)) / (a * (m - 1) * pow( sin(a * x), m - 1));
	printf("t1= %lf\n", t1);
	printf("t2= %lf", t2);
}