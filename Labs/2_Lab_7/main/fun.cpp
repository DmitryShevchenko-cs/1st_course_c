#include "fun.h"

void input(Tabl t) {
	system("cls");
	FILE* file = NULL;
	fopen_s(&file ,"Tab.txt", "w");
	if (file == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}

	printf("Введите вещество, тип, температуру, скорость:\n");
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%c", t.type, 7);
	setbuf(stdin, NULL);
	scanf_s("%f", &t.tem);
	scanf_s("%d", &t.sp);

	fprintf_s(file, "%-10s %-8s  %-4.2f  %4d\n", t.name, t.type, t.tem, t.sp);
	fclose(file);


}
int random_number() {
	srand(time(NULL));
	int arr[7]{};
	bool already;

	for (int i = 0; i < 7; ) {

		already = false;
		int newrand = rand() % 7;

		for (int j = 0; j < i; j++) {
			if (*(arr + i) == newrand) {
				already = true;
			}
		}

		if (already == false) {
			*(arr + i) = newrand;
			i++;
		}
	}
	int k = 0;
	return *(arr + k++);
}
void random(Tabl t) {
	
	int randnum = random_number();
	char NAME[7][10]{ "Анилин", "Рутуть", "Кедровое", "Бензол", "Вода", "Спирт", "Глицерин" };
	char TYPE[7][7]{ "Чистое", "Чистое", "Масло", "Чистое", "Чистое", "Чистое", "Чистое" };
	float TEMP[7]{ 20, 21, 29, 23, 30, 25, 28 };
	int SP[7]{ 1656, 1451, 1406, 1324, 1481, 1180, 1923 };
	
	strcpy(t.name, *(NAME + randnum));
	strcpy(t.type, *(TYPE + randnum));
	t.tem = *(TEMP + randnum);
	t.sp = *(SP + randnum);

	FILE* file = NULL;
	fopen_s(&file, "Tab.txt", "w");
	if (file == NULL) {

		exit(0);
	}

	fprintf_s(file, "%-10s %-8s  %-4.2f  %4d\n", t.name, t.type, t.tem, t.sp);
	fclose(file);
}

void add(Tabl t) {

	system("cls");
	FILE* file = NULL;
	fopen_s(&file, "Tab.txt", "a");
	if (file == NULL) {
		puts("Ошибка открытия файла");
		exit(0);
	}

	printf("Введите вещество, тип, температуру, скорость:\n");
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%c", t.type, 7);
	setbuf(stdin, NULL);
	scanf_s("%f", &t.tem);
	scanf_s("%d", &t.sp);

	fprintf_s(file, "%-10s %-8s  %-3.2f  %4d\n", t.name, t.type, t.tem, t.sp);
	fclose(file);
}

void print(Tabl t) {
	
	system("cls");
	FILE* file = NULL;
	fopen_s(&file, "Tab.txt", "r");
	if (!file) {
		puts("Ошибка открытия файла");
		exit(0);
	}
	char ch = fgetc(file);
	while (!feof(file)) {
		putchar(ch);
		ch = fgetc(file);
	}
	fclose(file);
	printf("\n\n\n");

}