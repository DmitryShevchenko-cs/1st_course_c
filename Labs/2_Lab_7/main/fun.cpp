#include "fun.h"

void input(Tabl t[]) {

	for (int i = 0; i < S; i++) {
		cout << i + 1 << "." << " Введите вещество, тип, температуру ,скорость: ";
		cin >> t[i].name >> t[i].type >> t[i].tem >> t[i].sp;
	}
	cout << endl;

}

void random(Tabl t[]) {
#ifdef DEBAG
	cout << endl << __DATE__ << endl << __TIME__ << endl << endl;
#endif
	srand(time(NULL));
	int arr[S]{};
	bool already;

	for (int i = 0; i < S; ) {

		already = false;
		int newrand = rand() % S;

		for (int j = 0; j < i; j++) {
			if (*(arr + i) == newrand) {
				already = true;
			}
		}

		if (already == false) {
			*(arr+i) = newrand;
			i++;
		}
	}

	t[arr[0]] = { {'А', 'н', 'и', 'л', 'и', 'н', '\0'}, 'Ч' , 20 , 1656 };
	t[arr[1]] = { {'Р', 'т', 'у', 'т', 'ь', '\0'} , 'Ч' , 20 , 1451 };
	t[arr[2]] = { {'К', 'е', 'д', 'р', 'о', 'в', 'о', 'е', '\0'} , 'М' , 29 , 1406 };
	t[arr[3]] = { {'Б', 'е', 'н', 'з', 'о', 'л', '\0'} , 'Ч' , 20 , 1324 };
	t[arr[4]] = { {'В', 'о', 'д', 'а', '\0'} , 'Ч' , 20 , 1481 };
	t[arr[5]] = { {'С', 'п', 'и', 'р', 'т', '\0'} , 'Ч' , 20 , 1180 };
	t[arr[6]] = { {'Г', 'л', 'и', 'ц', 'е', 'р', 'и', 'н', '\0'} , 'Ч' , 20 , 1923 };

	cout << "Произошло заполнение" << endl;
	cout << endl;
#ifdef DEBAG
	cout << "Файл: " << __FILE__ << endl << "Функция: " << __FUNCTION__ << endl << endl;
#endif
	cout << endl;
}

void sort(Tabl t[]) {
#ifdef DEBAG
	cout << endl << __DATE__ << endl << __TIME__ << endl << endl;
#endif
	for (int i = 0; i < S; i++) {
		for (int j = 0; j < S - 1; j++) {
			if (t[j].sp > t[j + 1].sp) swap(*(t+j), *(t + j + 1));
		}
	}
	cout << "Произошла сортировка" << endl;
	cout << endl;
#ifdef DEBAG
	cout << "Файл: " << __FILE__ << endl << "Функция: " << __FUNCTION__ << endl << endl;
#endif
	cout << endl;
}

void print(Tabl t[]) {
#ifdef DEBAG
	cout << endl << __DATE__ << endl << __TIME__ << endl << endl;
#endif
	printf("-----------------------------------------------\n");
	printf("|          Скорость звука в жидкостях         |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество  |  Тип  |Температура|  Скорость   |\n");
	printf("|           |       |  (град.С) |   (м/сек)   |\n");
	printf("|-----------|-------|-----------|-------------|\n");
	for (int i = 0; i < S; i++)
		printf("| %9s | %5c | %9hd | %11u |\n",
			t[i].name, t[i].type, t[i].tem, t[i].sp);
	printf("|---------------------------------------------|\n");
	printf("| примечание:  ч - чистое вещество, м - масло |\n");
	printf("-----------------------------------------------\n");
	cout << endl;
#ifdef DEBAG
	cout << "Файл: " << __FILE__ << endl << "Функция: " << __FUNCTION__ << endl << endl;
#endif
}