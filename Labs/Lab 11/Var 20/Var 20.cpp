#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

void fun(int* a, int s) {
	if (a[s] % 2 == 0) {
		cout << a[s] << '\t';
	}
	if (s > 0) {
		fun(a, s - 1);
	}
}

//void fun(int* a, int s) {
//	int N = 0;
//	if (a[N] % 2 == 0) {
//		cout << a[N] << '\t';
//	}
//	if (N < s) {
//		fun(a, s);
//	}
//}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	int size;
	
	cin >> size;

	int* A = new int[size];
	for (int i = 0; i < size; i++) {
		A[i] = rand() % 50;
	}

	for (int i = 0; i < size; i++) {
		cout<<A[i]<<'\t';
	}
	cout << endl;
	fun(A, size-1);
}