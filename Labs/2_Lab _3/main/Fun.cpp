#include "Fun.h"

void swp(int *array){
	int* min, *b;
	min = array;
	b = array;
	int s = size;
	for (int i = 0; i < size; i++, array++) {
		if (*array < *min) {
			min = array;
		}
		if (*array % 2 != 0) {
			b = array;
		}
	}
	swap(*min, *b);
}

void newArr(int* arr) {

}