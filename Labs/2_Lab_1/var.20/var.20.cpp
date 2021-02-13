
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "windows.h"
#define S 4
using namespace std;

struct Tabl {
	string name;
	char type;
	short tem;
	unsigned sp;
	
} t[S];

void f1() {
	for (int i = 1; i < S; i++) {
		cout << "Введите вещество, тип, температуру ,скорость: ";
		cin >> t[i].name >> t[i].type >> t[i].tem >> t[i].sp;
	}
}
//+
void f2() {

	t[1].name = "Анилин";
	t[2].name = "Ртуть";
	t[3].name = "Кедровое";

	t[1].type = 'Ч';
	t[2].type = 'Ч';
	t[3].type = 'М';

	t[1].tem = 20;
	t[2].tem = 20;
	t[3].tem = 29;

	t[1].sp = 1656;
	t[2].sp = 1451;
	t[3].sp = 1406;

}

void f3(){}

void f4() {
	printf("-----------------------------------------------\n");
	printf("|          Скорость звука в жидкостях         |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество  |  Тип  |Температура|  Скорость   |\n");
	printf("|           |       |  (град.С) |   (м/сек)   |\n");
	printf("|-----------|-------|-----------|-------------|\n");
	for (int i = 1; i < 4; i++)
		printf("| %9s | %5c | %9hd | %11u |\n",
			t[i].name.c_str(), t[i].type, t[i].tem, t[i].sp);
	printf("|---------------------------------------------|\n");
	printf("| примечание:  ч - чистое вещество, м - масло |\n");
	printf("-----------------------------------------------\n");
}    
//+

int main(void) {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;

	cout << "1 - ввод с экрана\n";
	cout << "2 - случайным образом\n";
	cin >> a;

	if (a == 1) {
		f1();

		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> a;

		if (a == 3) {

		}

		else if (a == 4) {
			f4();
		   
		}
	}

	else if (a == 2) {
		f2();
		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> a;

		if (a == 3) {

		}

		else if (a == 4) {
			f4();
		}

		else cout << "wrong number\n";

	}

	else cout << "wrong number";

}