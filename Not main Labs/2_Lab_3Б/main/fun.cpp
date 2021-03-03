#include "fun.h"


void Ent(int* array) {
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 10 - 5;
	}
}

void gg(int* Arr, int* B, int* C, int* D) {
	int d = 0, c = 0, b = 0;

	for (int i = 0; i < size; i++) {
		if (*(Arr + i) > 0) {
			*(B++) = *(Arr + i);
		}

		else if (*(Arr + i) < 0) {
			*(C++) = *(Arr + i);
		}

		else if (*(Arr + i) == 0) {
			*(D++) = *(Arr + i);
		}

	}

	//
	for (int i = 0; i < size; i++) {
		if (*(Arr + i) == 0) {
			d++;
		}
		if (*(Arr + i) < 0) {
			c++;
		}
		if (*(Arr + i) > 0) {
			b++;
		}
	}
	//

	cout << b << "  " << c << "  " << d << "  " << endl << endl;
	
	int i = 0;
	for (int j = 0; j < d; j++) {
		*(Arr + i) = *(D + j);
		i++;
	}

	for (int j = 0; j < c; j++) {
		*(Arr + i) = *(C + j);
		i++;
	}

	for (int j = 0; j < b; j++) {
		*(Arr + i) = *(B + j);
		i++;
	}
}