#include "fun.h"


void Ent(int* array) {
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 10 - 5;
	}
}

void gg(int* Arr, int* B, int* C, int* D) {
	
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
}

void GG(int*Arr, int b, int c, int d, int* B, int* C, int* D) {

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