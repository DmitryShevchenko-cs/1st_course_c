#include <iostream>
#include <stdio.h>
#include <cstdio>

int a, b, c, p, S;

int main() {

	printf("Input side of triangle (a):");//a
	scanf_s("%d", &a);

	printf("Input side of triangle (b):"); //b
	scanf_s("%d", &b);

	printf("Input side of triangle (c):");//c
	scanf_s("%d", &c);

	p = ((a + b + c) / 2);
	S = int(sqrt(int(p * (p - a) * (p - b) * (p - c))));

	if (a + b > c && b + c > a && c + a > b) {

		printf("%d\n", S);
	}

	else {
		printf("This triangle is incorrect\n");
	}

}
