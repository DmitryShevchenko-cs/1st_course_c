#include <iostream>
#include <stdio.h>
#include <cstdio>

int y, d1, n, l;
long y100, y1000;

int main() {
	d1 = 24 * 60 * 60;
	l = d1 * 366;
	n = d1 * 365;

	printf("Year: ");
	scanf_s("%d", &y);

	if (y % 4 == 0) {
		printf("%d\n", l);
	}
	else {
		printf("%d\n", n);
	}
	y100 = (n * 75) + (l * 25);
	printf("\n100 year is %lu seconds\n", y100);//%lu (длинное целое без знака)
	y1000 = y100 * 10;
	printf("1000 year is %lu seconds\n", y1000);

}