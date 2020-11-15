#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <conio.h> // для _getch
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y;

	while (true)
	{
		//system("cls"); //очистка экрана вывода

		printf("Введите координату x >");
		scanf("%lf", &x);
		printf("Введите координату y >");
		scanf("%lf", &y);

		printf("x=%3.2lf;  y=%.3lf\n", x, y);

		if (((x <= 0) && (y <= 0) && (y >= -x - 1)) || 
			((x >= 0) && (y >= 0) && (y <= -x + 1))) {
			printf("Точка попадает в область\n\n");
		}
					 
		else { 
			printf("Точка не попадает в область\n\n"); 
		}

		//printf("Для продолжения нажмите любую клавишу");
		//_getch(); //ждет нажатия кнопки
	}
	return 0; 
}