#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"ru");

	char name1[9], name2[9], name3[9];
	char type1, type2, type3;
	short tem1, tem2, tem3;
	unsigned int sp1, sp2, sp3;

	printf("1. Введите: вещество, тип, температуру, скорость >");
	scanf("%s %c %hd %u", name1, &type1, &tem1, &sp1);
	printf("2. Введите: вещество, тип, температуру, скорость >");
	scanf("%s %c %hd %u", name2, &type2, &tem2, &sp2);
	printf("3. Введите: вещество, тип, температуру, скорость >");
	scanf("%s %c %hd %u", name3, &type3, &tem3, &sp3);
	
	printf("--------------------------------------------\n"); 
	printf("| Скорость звука в жидкостях               |\n");
	printf("|------------------------------------------|\n");
	printf("| Вещество  | Тип | Температура | Скорость |\n");
	printf("|           |     |  (град.С)   | (м/сек)  |\n");
	printf("|------------------------------------------|\n");
	printf("| %9s | %3c | %11hd | %8u |\n", name1, type1, tem1, sp1);
	printf("| %9s | %3c | %11hd | %8u |\n", name2, type2, tem2, sp2);
	printf("| %9s | %3c | %11hd | %8u |\n", name3, type3, tem3, sp3);
	printf("|------------------------------------------|\n");
	printf("| Примечание:  Ч - чистое вещество,        |\n");
	printf("|                М - масло                 |\n");
	printf("|------------------------------------------|\n");

	return 0;
}
