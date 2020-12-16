#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <chrono>
#include <windows.h>
#define m 9

using namespace std;

void merge_sort(int* unsorted, unsigned int size)
{
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int size = 10;
	int a = size, b = 1;
	int* Arr = new int[size];
	double dur_arr[m]{};


	cout << "duration: ";

	for (int i = 0; i < m; i++)
	{
		for (n = 0; n < size; n++) { // +
			Arr[n] = b++;
		}
		//size += 5;

		auto start = chrono::high_resolution_clock::now();

		merge_sort(Arr, size);
		cout << endl;
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();

	}
	size = 5;
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << dur_arr[i] << "\t";
	}
	cout << endl;
	/////////////////////////////////////////////////////

	cout << "duration: ";

	for (int i = 0; i < m; i++)
	{
		for (n = 0; n < size; n++) { // -
			Arr[n] = a--;
		}
		//size += 5;

		auto start = chrono::high_resolution_clock::now();

		merge_sort(Arr, size);
		cout << endl;
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();

	}
	size = 5;
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << dur_arr[i] << "\t";
	}
	cout << endl;
	///////////////////////////////////////////////////////////

	cout << "duration: ";

	for (int i = 0; i < m; i++)
	{
		for (n = 0; n < size; n++) { // rand
			Arr[n] = rand() % 20;
		}
		//size += 5;

		auto start = chrono::high_resolution_clock::now();

		merge_sort(Arr, size);
		cout << endl;
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();

	}
	size = 5;
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << dur_arr[i] << "\t";
	}
	cout << endl;
}