#include "Fun.h"

void fread(int* mas1, int* mas2) {

	FILE* f_read = NULL;
	fopen_s(&f_read, "Mass.txt", "r");
	if (!f_read) {
		printf("Ошибка открытия файла на чтение");
		exit(0);
	}
	for (int i = 0; i < 10; i++) {
		fscanf(f_read, "%d", &*(mas2 + i));
	}

	fclose(f_read);
	
	

}
void fwrite(int* mas) {
	FILE* f_write = NULL;
	fopen_s(&f_write, "Mass.txt", "w");
	if (f_write == NULL) {
		printf("Ошибка открытия файла на запись");
		exit(0);
	}
	for (int i = 0; i < 10; i++)
		fprintf_s(f_write, "%d\t", *(mas+i));
	fprintf_s(f_write, "\n");
	fclose(f_write);
}