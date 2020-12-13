#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

void FillArray(int arr[], int const size){
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int const size = 9;
	int arr[9];

	FillArray(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}


}