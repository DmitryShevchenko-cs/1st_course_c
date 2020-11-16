#include <iostream>
#include <stdio.h>
#include <cstdio>

int a;

int main()
{
	printf("Input a:");
	scanf_s("%d", &a);
	a = a * a;
	a = a * a * a;
	printf("%d", a);
}