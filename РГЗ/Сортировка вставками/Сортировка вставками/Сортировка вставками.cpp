#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <chrono>
#include <windows.h>
#define m 9

using namespace std;

void sort1(int* arr, int N) {
	int buff = 0; // для хранения перемещаемого значения
	int i, j;

	for (i = 1; i < N; i++)
	{
		buff = arr[i];  
		for (j = i - 1; j >= 0 && arr[j] > buff; j--)
			arr[j + 1] = arr[j];

		arr[j + 1] = buff;
	}
	
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int size = 5;
	int a = size, b = 1;
	int Arr[100]{};
	float dur_arr[m]{};

	
	cout << "Время работы сортировки:"; 

	for (int i = 0; i < m; i++)
	{
		for (n = 0; n < size; n++) { // +
			Arr[n] = b++;
		}
		b = 1;
		
		auto start = chrono::high_resolution_clock::now(); // начало счетчика

		sort1(Arr, size);

		auto end = chrono::high_resolution_clock::now();
		chrono::duration<float> duration = end - start;   // конец счетчика

		dur_arr[i] = duration.count();
		size += 5;
	}
	size = 5;
	
	for (int i = 0; i < m; i++) {
		printf("%f  ", dur_arr[i]);
	}
	cout << endl;
	/////////////////////////////////////////////////////////////

	cout << "Время работы сортировки:";

	for (int i = 0; i < m; i++){
		for (n = 0; n < size; n++) Arr[n] = a--; // упорядочный наоборот

		size += 5;

		auto start = chrono::high_resolution_clock::now();

		sort1(Arr, size);

	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> duration = end - start;
	dur_arr[i] = duration.count();


		//dur_arr[i] = duration.count();
		a = size;
	}
	size = 5;
	for (int i = 0; i < m; i++) {
		printf("%f  ", dur_arr[i]);
	}
	cout << endl;
	///////////////////////////////////////////////////////////////////

	cout << "Время работы сортировки:";

		for (int i = 0; i < m; i++) {
			for (n = 0; n < size; n++) Arr[n] = 1 + rand() % 100; // неупорядочный

			size += 5;

			auto start = chrono::high_resolution_clock::now();

			sort1(Arr, size);

			auto end = chrono::high_resolution_clock::now();
			chrono::duration<double> duration = end - start;
			dur_arr[i] = duration.count();
		}
		size = 5;
		for (int i = 0; i < 9; i++) {
			printf("%f  ", dur_arr[i]);
		}
		cout << endl;

	return 0;
}
