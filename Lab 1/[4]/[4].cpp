#include<iostream>
#include<stdio.h>

int a, b;

int main() {
	a = 1;
	b = 2;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\na=%d\n", a);
	printf("b=%d\n", b);
}