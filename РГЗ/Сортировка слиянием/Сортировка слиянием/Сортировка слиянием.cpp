#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <chrono>
#include <windows.h>
#define m 9

using namespace std;

void Merge(int* A, int first, int last)
{
	int middle, start, final, j;
	int* mas = new int[100];
	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части
	for (j = first; j <= last; j++) //выполнять от начала до конца
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	//возвращение результата в список
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
};
//рекурсивная процедура сортировки

void MergeSort(int* A, int first, int last)
{
	{
		if (first < last)
		{
			MergeSort(A, first, (first + last) / 2); //сортировка левой части
			MergeSort(A, (first + last) / 2 + 1, last); //сортировка правой части
			Merge(A, first, last); //слияние двух частей
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


	cout << "duration: ";

	for (int i = 0; i < m; i++)
	{
		for (n = 0; n < size; n++) { // +
			Arr[n] = b++;
		}
		

		auto start = chrono::high_resolution_clock::now();

		MergeSort(Arr, 1, size);
		cout << endl;
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
		b = 1;
		size += 5;
	}
	size = 5;
	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << dur_arr[i] << "\t";
	}
	cout << endl;
	/////////////////////////////////////////////////////

	//cout << "duration: ";

	//for (int i = 0; i < m; i++)
	//{
	//	for (n = 0; n < size; n++) { // -
	//		Arr[n] = a--;
	//	}
	//	//size += 5;

	//	auto start = chrono::high_resolution_clock::now();

	//	MergeSort(Arr, 1, size);
	//	cout << endl;
	//	auto end = chrono::high_resolution_clock::now();
	//	chrono::duration<double> duration = end - start;

	//	dur_arr[i] = duration.count();

	//}
	//size = 5;
	//cout << endl;
	//for (int i = 0; i < m; i++) {
	//	cout << dur_arr[i] << "\t";
	//}
	//cout << endl;
	/////////////////////////////////////////////////////////////

	//cout << "duration: ";

	//for (int i = 0; i < m; i++)
	//{
	//	for (n = 0; n < size; n++) { // rand
	//		Arr[n] = rand() % 20;
	//	}
	//	//size += 5;

	//	auto start = chrono::high_resolution_clock::now();

	//	MergeSort(Arr, 1, size);
	//	cout << endl;
	//	auto end = chrono::high_resolution_clock::now();
	//	chrono::duration<double> duration = end - start;

	//	dur_arr[i] = duration.count();

	//}
	size = 5;
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << dur_arr[i] << "\t";
	}
	cout << endl;
}