#include <iostream>
#include <stdio.h>
#include <cstdio>

int year, one_day, normal_y, long_y;
long y100, y1000;

int main() {
	one_day = 24 * 60 * 60;
	long_y = one_day * 366;
	normal_y = one_day * 365;

	printf("Year: ");
	scanf_s("%d", &year);

	if (year % 4 == 0) {
		printf("%d\n", long_y);
	}
	else {
		printf("%d\n", normal_y);
	}
	y100 = (normal_y * 75) + (long_y * 25);
	printf("\n100 year is %d seconds\n", y100);//%lu (длинное целое без знака)
	y1000 = y100 * 10;
	printf("1000 year is %lu seconds\n", y1000);

}