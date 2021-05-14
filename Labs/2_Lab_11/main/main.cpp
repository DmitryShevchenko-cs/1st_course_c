#include "liquid.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	int a = 0;

	string name;
	char type;
	short tem;
	unsigned sp;

	cout << "Что делаем?\n1-сами ввести\t2-рандомную таблицу\n";
	cin >> a;
	liquid A[S];
	switch (a) {

	case 1:
		cout << "name, type, temperature, speed\n";
		for (int i = 0; i < S; i++)
		{
			cout << "---------------------\n";
			cin >> name;
			cin >> type;
			cin >> tem;
			cin >> sp;
			A[i].setter(name, type, tem, sp);
		}
		break;

	case 2:
		for (int i = 0; i < S; i++)
		{
			A[i].random();
		}

	default:
		cout << "неверное число" << endl;
		break;
	}
	system("cls");
	
	printf("-----------------------------------------------\n");
	printf("|          Скорость звука в жидкостях         |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество  |  Тип  |Температура|  Скорость   |\n");
	printf("|           |       |  (град.С) |   (м/сек)   |\n");
	printf("|-----------|-------|-----------|-------------|\n");

	for (int i = 0; i < S; i++)
	{
		A[i].show();
	}
	printf("|---------------------------------------------|\n");
	printf("| примечание:  ч - чистое вещество, м - масло |\n");
	printf("-----------------------------------------------\n");
	system("PAUSE");
	
	return 0;

}