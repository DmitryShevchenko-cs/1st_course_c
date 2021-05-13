#include "liquid.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%s", t.type, 7);
	setbuf(stdin, NULL);
	scanf_s("%f", &t.tem);
	scanf_s("%d", &t.sp);*/
	int a = 0;
	const int st = 3;
	srand(time(NULL));

	string name1;
	char type1{};
	short tem1 = 0;
	unsigned sp1 = 0;
	liquid liq[st];

	cout << "как хотите заполнить таблицу?\n1-вручную\n2-рандомно\n";
	cin >> a;

	switch (a) {
	case 1: 
		for (int i = 0; i < S; i++) {
			
			cin >> name1;
			cin >> type1;
			cin >> tem1;
			cin >> sp1;
			cout << endl << endl;

			liq[i].setter(name1, type1, tem1, sp1);
		}
		cout << "www" << endl << endl;
		for (int i = 0; i < S; i++)
		{
			liq[i].show();
		}
		cin >> a;
		break;

	case 2:
	
		
		cout << "www" << endl << endl;
		for (int i = 0; i < S; i++)
		{
			liq[i].random();
			liq[i].show();
		}
		cin >> a;
		break;
	case 3:
		break;
	case 4:
		printf("-----------------------------------------------\n");
		printf("|          Скорость звука в жидкостях         |\n");
		printf("|---------------------------------------------|\n");
		printf("| Вещество  |  Тип  |Температура|  Скорость   |\n");
		printf("|           |       |  (град.С) |   (м/сек)   |\n");
		printf("|-----------|-------|-----------|-------------|\n");
		for (int i = 0; i < S; i++)
		{
			liq[i].show();
		}
		printf("|---------------------------------------------|\n");
		printf("| примечание:  ч - чистое вещество, м - масло |\n");
		printf("-----------------------------------------------\n");
		break;
	default:
		cout << "неверное число" << endl;
	}


}