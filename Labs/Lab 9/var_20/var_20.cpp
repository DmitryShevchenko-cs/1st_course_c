#include <iostream>
#include <ctime>
#include <windows.h>
#define S 9
using namespace std;

short arr[S][S]{};
short i, j, k;
short r1, r2;
short sum_i, sum_j, sum;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	srand(time(NULL));
	
	r1 = 0;

	for (i = 0; i < S; i++) {            //строка

		for (j = 0; j < S; j++) {        //столбец
			arr[i][j] = rand() % 99;
		}
	}
	cout << "Начальный массив :" << endl;
	for (i = 0; i < S; i++) {            

		for (j = 0; j < S; j++) {        
			printf("%4d", arr[i][j]);
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	for (k = 8; k >= 0; k--) {            
		for (j = 0; j < S; j++) {
			
			//столбец
			sum_j += arr[r1][j];
			
			//линия
			sum_i += arr[j][k];

			
		}
		
		arr[r1][k] = sum_i + sum_j - arr[r1][k];
		r1++;
		sum_i = 0;
		sum_j = 0;
		
	}

	cout << "Массив результат :" << endl;

	for (i = 0; i < S; i++) {            

		for (j = 0; j < S; j++) {        
			printf("%5d", arr[i][j]);
		}
		cout << endl;
	}

}