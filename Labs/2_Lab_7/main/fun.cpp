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
	scanf_s("%s", t.type, 7);
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

void add_before(Tabl t) {
	
	int size = 0, i = 0, j = 0;
	char c;
	int line = 0;

	FILE* f_size;
	fopen_s(&f_size, "Tab.txt", "r");
	if (f_size == NULL) {

		exit(0);
	}
	while (true) {
		c = fgetc(f_size);
		if (c == '\n')size++;
		else if (c == EOF)  break;
	}
	
	fclose(f_size);

	////////////////////////
	int size_string = 50;
	
	char** str = new char* [size];
	for (int u = 0; u < size; u++)
	{
		str[u] = new char[size_string];
	}

	FILE* f_copy;
	fopen_s(&f_copy, "Tab.txt", "r");
	if (f_copy == NULL) {

		exit(0);
	}
	i = 0;
	line = size;
	while (line != 0) {
		fgets(*(str+i), size_string, f_copy);
		i++;
		line--;
	}
	fclose(f_copy);
	i = 0;
	
	////////////////////////

	FILE* f_write = NULL;
	fopen_s(&f_write, "Tab.txt", "w");
	if (f_write == NULL) {
		exit(0);
	}
	
	printf("Введите вещество, тип, температуру, скорость:\n");
	
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%s", t.type, 7);
	setbuf(stdin, NULL);
	scanf_s("%f", &t.tem);
	scanf_s("%d", &t.sp);

	fprintf_s(f_write, "%-10s %-8s  %-4.2f  %4d\n", t.name, t.type, t.tem, t.sp);
	fclose(f_write);
	////////////////////////
	
	FILE* f_add = NULL;
	fopen_s(&f_add, "Tab.txt", "a");
	if (f_add == NULL) {

		exit(0);
	}
	for (int u = 0; u < size; u++)
	{
		fprintf(f_add, "%s", str[u]);
	}
	fclose(f_add);

	for (int u = 0; u < size; u++)
	{
		delete[] str[u];
	}
	delete[] str;
	
}

void add_after(Tabl t) {

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
	scanf_s("%s", t.type, 7);
	setbuf(stdin, NULL);
	scanf_s("%f", &t.tem);
	scanf_s("%d", &t.sp);

	fprintf_s(file, "%-10s %-8s  %-3.2f  %4d\n", t.name, t.type, t.tem, t.sp);
	fclose(file);
	
}

void choice_str(Tabl t, bool& B) {
	system("cls");
	char c;
	int size = 0;
	int num = 0;
	B = 1;
	FILE* file_read;
	fopen_s(&file_read, "Tab.txt", "r");
	if (file_read == NULL) {
		B = 0;
		exit(0);
	}

	while (true) {
		c = fgetc(file_read);
		if (c == '\n')size++;
		else if (c == EOF)  break;
	}
	fclose(file_read);

	/////////////////////
	if (num > size) {
		B = 0;
		exit(0);
	}
	printf("Строк всего: %d\n",size);
	printf("Введите номер строки: ");
	scanf("%d", &num);


	FILE* file_print = NULL;
	fopen_s(&file_print, "Tab.txt", "rt");
	if (!file_print) {
		puts("Ошибка открытия файла");
		exit(0);
	}
	
	int i = 0;
	while (i != num) {
		fscanf_s(file_print, "%s", t.name, 50);
		fseek(file_print, 1, SEEK_CUR);
		fscanf_s(file_print, "%s", t.type, 50);
		fseek(file_print, 1, SEEK_CUR);
		fscanf_s(file_print, "%f", &t.tem);
		fseek(file_print, 1, SEEK_CUR);
		fscanf_s(file_print, "%d", &t.sp);
		i++;
	}
	printf("%-10s %-8s  %-3.2f  %4d\n", t.name, t.type, t.tem, t.sp);
	fclose(file_print);

	printf("\n\n\n");
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