#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

void fun(int* a, int s) {
	
	if (s >= 0) {
		fun(a, s - 1);
		if (a[s] % 2 == 0) {
			cout << a[s] << '\t';
		}
	}
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	int size;
	cout << "Введите количество елементов массива:\t";
	cin >> size;
	cout << "Массив:\n";
	int* A = new int[size];
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 50;
	}

	for (int i = 0; i < size; i++) {
		cout<<A[i]<<'\t';
	}
	cout <<"\nЧетные елементы массива:"<< endl;
	fun(A, size);
}