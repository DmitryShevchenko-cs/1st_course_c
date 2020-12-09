#include <iostream>
#include <ctime>
#include <windows.h>
#include <math.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int const size = 50;
	int size2 = 0;
	int arr[size]{};
	double Arr[size]{};
	int i, j;
	double av = 0;
	int nn, nn_max=0;
	int ib;


	srand(time(NULL));

	for (i = 0; i < size; i++) arr[i] = rand() % 100 - 50;

	printf("Начальный массив:\n");

	for (i = 0; i < size; printf("%3d  ", arr[i++]));
	putchar('\n');
	putchar('\n');
	///////////////////////////////////////////////////////////////////////////
	double max = -1;

	for (nn = i = 0; i < size; i++) {

		
		

		if (arr[i] < 0) {
			if (!nn) {										//n=0?

				ib = i;
				av = arr[i];
				nn = 1;
				
			}

			else {

				av += arr[i];
				nn++;
			
			}
		}

		else {
			if (nn) {										//nn!=0
				av = fabs(av / nn);

				if (nn > 1) 
					if (av > max) {

						max = av;
						nn_max = nn;
					}
				
				nn = 0;
			}
		}
	}

	if (nn) {										//nn!=0

		av = fabs(av / nn);
		
		if (nn > 1) 
			if (av > max) {
				max = av;
				nn_max = nn;	
			}

		nn = 0;
	}

	cout << "\n\nНаибольшее абсолютное значение среднего арифметического= " << max << "\n";
	cout << "Массив-результат: "; 
	
	

	
	
	return 0;
}