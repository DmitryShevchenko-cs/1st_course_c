#include <iostream>
#include <ctime>
#include <windows.h>
#include <chrono>
using namespace std;


int sort1(int *array, int N, int t) {
	
	int buff = 0;
	int i, j;


	for (i = 0; i < N; i++){
		buff = array[i];

		for (j = i - 1; j >= 0 && array[j] > buff; j--) {
			array[j + 1] = array[j];
		}
		array[j + 1] = buff;
	}

	
	return 0;
}


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int t = 0, t2 = 0;
	int size = 5;
	int *arr = new int[size];

	auto begin = std::chrono::steady_clock::now();
	cout << "Сортировка вставками: ";
	for (int k = 0; k < 8; k++) {

		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 100;
		}
		sort1(arr, size, t);

		size += 5;
		auto end = std::chrono::steady_clock::now();

		auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
		std::cout << "The time: " << elapsed_ms.count() << " ms\t";

	}

	delete[] arr;
	
	return 0;
}