#include "Fun.h"

int main () {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	int mas1[10]{}, mas2[10]{};

	printf("Mas1>\n");
	for (int i = 0; i < 10; i++) {
		*(mas1 + i) = rand() % 10;
		cout << *(mas1 + i) << '\t';
	}
	printf("\n");
	
	fwrite(mas1);
	fread(mas1, mas2);

	printf("Mas2>\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", *(mas2 + i));
	}
	printf("\n");

	int sum = 0;
	for (int i = 0; i < 10 ; ) {
		if ((*(mas2 + i) % 2 == 0 ) && (*(mas2 + i) != 0)) {
			sum += *(mas2 + i);
			i++;
		}
		else i++;
	}
	cout << sum;
	return 0;
}