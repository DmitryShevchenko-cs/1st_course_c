#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <chrono>
#include <windows.h>
#define m 9

using namespace std;



void merge(int* A, int first, int last)
{
	int middle, start, final, j;
	int* mas = new int[100];

	middle = (first + last) / 2;  //вычисление среднего элемента
	start = first;   //начало левой части
	final = middle + 1;   //начало правой части

	for (j = first; j <= last; j++)    //от начала до конца
		if ((start <= middle) && ((final > last) || (A[start] < A[final]))){

			mas[j] = A[start];
			start++;
		}

		else{
			mas[j] = A[final];
			final++;
		}

	  //возвращение результата в список
	for (j = first; j <= last; j++) A[j] = mas[j];

};

void mergeSort(int* A, int first, int last)  //рекурсивная процедура сортировки
{
	{
		if (first < last)  //проверка того что это массив > 1 елемента
		{
			mergeSort(A, first, (first + last) / 2);  //сортировка левой части
			mergeSort(A, (first + last) / 2 + 1, last);  //сортировка правой части
			merge(A, first, last);  //слияние двух частей
		}
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int size = 5;
	int a = size, b = 1;

	int* Arr = new int[size];
	double dur_arr[m]{};

	cout << "Время работы сортировки: ";

	for (int i = 0; i < m; i++)
	{
		for (n = 0; n < size; n++) { // упорядоченое заполнение массива 
			Arr[n] = b++;
		}
		b = 1;

		auto start = chrono::high_resolution_clock::now(); // начало счетчика

		merge(Arr, 0, size);

		auto end = chrono::high_resolution_clock::now();
		chrono::duration<float> duration = end - start;   // конец счетчика

		dur_arr[i] = duration.count();
		size += 5;
	}
	size = 5;

	for (int i = 0; i < m; i++) {
		printf("%fs  ", dur_arr[i]);
	}
	cout << endl;
	cout << endl;
	/////////////////////////////////////////////////////////////

	cout << "Время работы сортировки: ";

	for (int i = 0; i < m; i++) {
		for (n = 0; n < size; n++) Arr[n] = a--; // упорядочный наоборот

		size += 5;

		auto start = chrono::high_resolution_clock::now();

		merge(Arr, 0, size);

		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
		a = size;
	}
	size = 5;
	for (int i = 0; i < m; i++) {
		printf("%fs  ", dur_arr[i]);
	}
	cout << endl;
	cout << endl;
	///////////////////////////////////////////////////////////////////

	cout << "Время работы сортировки: ";

	for (int i = 0; i < m; i++) {
		for (n = 0; n < size; n++) Arr[n] = 1 + rand() % 100; // неупорядочный

		size += 5;

		auto start = chrono::high_resolution_clock::now();

		merge(Arr, 0, size);

		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		dur_arr[i] = duration.count();
	}
	size = 5;
	for (int i = 0; i < 9; i++) {
		printf("%fs  ", dur_arr[i]);
	}
	cout << endl;
	cout << endl;

	return 0;
}