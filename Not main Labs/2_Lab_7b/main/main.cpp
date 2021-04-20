#include "Fun.h"

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	int mas1[10]{}, mas2[10]{};
	FILE* f;

	printf("Mas1>\n");
	for (int i = 0; i < 10; i++) {
		*(mas1 + i) = rand() % 10;
		cout << *(mas1 + i) << '\t';
	}
	printf("\n");
	
	fopen_s(&f, "text", "wb");
	if (!f) {
		printf("Ошибка открытия файла на чтение");
		exit(0);
		}
	fwrite(mas1, sizeof(int), 10, f);
	fclose(f);

	printf("Mas2>\n");

	fopen_s(&f, "text", "rb");
	if (!f) {
		printf("Ошибка открытия файла на чтение");
		exit(0);
	}
	for (int i = 0; i < 10; i++) {
		fread(&*(mas2 + i), sizeof(int), 10, f);
		printf("%d\t", *(mas2 + i));
	}	
	fclose(f);
	
	printf("\n\nsum = %d\n\n", count(mas2));
	return 0;
}