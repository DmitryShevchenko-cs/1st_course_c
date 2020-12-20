#include <iostream>
#include <windows.h>
#include <ctime>
#define size 4

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));
    int arr[size][size]{};
    int Arr[size][size]{};
    int min = 30, max = 0;
    int k;

    cout << "Исходный массив:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 20;
            printf("%4d", arr[i][j]);
        }
        cout << endl;
    }
    cout << endl;
    cout << "Массив а) :\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                k = j;
            }
        }
        swap(arr[i][0], max);
        arr[i][k] = max;
        max = 0;
        for (int n = 0; n < size; n++) {
            printf("%4d", arr[i][n]);
        }
        swap(arr[i][0], arr[i][k]);
        cout << endl;
    }

    cout << endl;
    cout << "Массив б) :\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j][i] < min) {
                min = arr[j][i];
                k = j;
            }
        }
        swap(arr[3][i], min);
        arr[k][i] = min;
        min = 30;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%4d", arr[i][j]);
        }
        cout << endl;
    }

    return 0;
}

