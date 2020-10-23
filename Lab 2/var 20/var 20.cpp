#include <iostream>
#include <stdio.h>

int main(void){
	setlocale(LC_ALL,"ru");

	char name1[9], name2[9], name3[9];
	char type1[1], type2[1], type3[1];
	short int tem1, tem2, tem3;
	unsigned int sp1, sp2, sp3;

	printf("1. Введите: название, школу, количество, площадь >");
	scanf_s("%s %c %hd %u", name1, &type1, &tem1, &sp1);

	printf("2. Введите: название, школу, количество, площадь >");
	scanf_s("%s %c %hd %u", name2, &type2, &tem2, &sp2);

	printf("3. Введите: название, школу, количество, площадь >");
	scanf_s("%s %c %hd %u", name3, &type3, &tem3, &sp3);
	

}
