#include <iostream>
#include <ctime>
#include <windows.h>
#include <chrono>
using namespace std;


int sort1(int* arr, int N) {

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
	srand(time(NULL));
	int t = 0, t2 = 0;
	int size = 5;
	int* arr = new int[size];


	auto begin = chrono::steady_clock::now();
	cout << "Сортировка вставками: " << "The time: ";
	for (int k = 0; k < 8; k++) {

		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 100;
		}
		sort1(arr, size);

		size += 5;
		auto end = chrono::steady_clock::now();

		auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end - begin);
		cout << elapsed_ms.count() << " ms\t";

	}

	delete[] arr;

	return 0;
}