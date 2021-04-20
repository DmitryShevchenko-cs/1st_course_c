#include "Fun.h"

int count(int* mas2) {
	int sum = 0;
	for (int i = 0; i < 10; ) {
		if ((*(mas2 + i) % 2 == 0) && (*(mas2 + i) != 0)) {
			sum += *(mas2 + i);
			i++;
		}
		else i++;
	}
	return sum;
}