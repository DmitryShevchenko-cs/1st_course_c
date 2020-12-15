#include <iostream>
#include <ctime>
#include <stdio.h>
#include <windows.h>

using namespace std;
int avarage (int *Arr, int rows, int cols) {
	int arr[20][20]{};
	int temp = 0; //номер елемента одномер массива
	int AvarageValue = 0;
	int arr_max[20]{};

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = Arr[temp];
			cout << arr[i][j] << " ";
			temp++;
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < rows; i++)
	{
		int max = arr[i][0];
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
		arr_max[i] = max;
		cout << arr_max[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < rows; i++)
	{
		AvarageValue += arr_max[i];
	}
	AvarageValue = AvarageValue / rows;
	cout << AvarageValue;

	return AvarageValue;
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	/*int size;
	cout << "Введите размер одномерного массива: ";
	cin >> size;
	int* Arr = new int[size];*/
	bool R = false;
	int size; 
	int Arr[100]{};
	int N, M;

	cout << "enter size ";
	cin >> size;
	cout << "enter N, M";
	cin >> N >> M ;

	for (int i = 0; i < size; i++) {
		
		Arr[i] = rand() & 50;
		cout << Arr[i] << " ";
	}
	cout << endl;
	cout << endl;

	avarage(Arr, N, M);

	return 0;
}

