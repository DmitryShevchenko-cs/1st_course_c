#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <chrono>
#include <windows.h>
#define m 9

using namespace std;

int sort1(int* arr, int N) {
	int n;
	int buff = 0; // для хранения перемещаемого значения
	int i, j;

	for (i = 1; i < N; i++)
	{
		buff = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > buff; j--)
			arr[j + 1] = arr[j];

		arr[j + 1] = buff;
	}

	return 0;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int size = 5;
	int a = size, b = 1;
	int* Arr = new int[size];
	double dur_arr[m]{};

	
	cout << "duration: ";

	for (int i = 0; i < 9; i++)
	{
		for (n = 0; n < size; n++) { // upor
			Arr[n] = b++;
		}

		size += 5;

		auto start = chrono::high_resolution_clock::now();

		sort1(Arr, size);

		auto end = chrono::high_resolution_clock::now();
		//auto duration = std::chrono::duration_cast<std::chrono::milliseconds > (end - start);

		chrono::duration<double> duration = end - start;


		dur_arr[i] = duration.count();

	}
	size = 5;
	cout << endl;
	for (int i = 0; i < 9; i++) {
		cout << dur_arr[i] << "\t";
	}
	cout << endl;
	//////////////////////////////////////////////////////////////

	cout << "duration: ";

	for (int i = 0; i < 9; i++){
		for (n = 0; n < size; n++) Arr[n] = a--; // упорядочный наоборот

		size += 5;

		auto start = chrono::high_resolution_clock::now();

		sort1(Arr, size);

		auto end = chrono::high_resolution_clock::now();
		//auto duration = std::chrono::duration_cast<std::chrono::milliseconds > (end - start);

		chrono::duration<double> duration = end - start;


		dur_arr[i] = duration.count();

	}
	size = 5;
	cout << endl;
	for (int i = 0; i < 9; i++) {
		cout << dur_arr[i] << "\t";
	}
	cout << endl;
	///////////////////////////////////////////////////////////////////

	cout << "duration: ";

		for (int i = 0; i < 9; i++) {
			for (n = 0; n < size; n++) Arr[n] = 1 + rand() % 100; // неупорядочный

			size += 5;

			auto start = chrono::high_resolution_clock::now();

			sort1(Arr, size);

			auto end = chrono::high_resolution_clock::now();
			//auto duration = std::chrono::duration_cast<std::chrono::milliseconds > (end - start);

			chrono::duration<double> duration = end - start;


			dur_arr[i] = duration.count();

		}
		size = 5;
		cout << endl;
		for (int i = 0; i < 9; i++) {
			cout << dur_arr[i] << "\t";
		}
		cout << endl;

	return 0;
}
