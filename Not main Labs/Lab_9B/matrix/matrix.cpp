#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   
    int rows, cols;
    int rows1, cols1;
    int w = 0;
    cout << "Введите количество строк массива: ";
    cin >> rows;
    cout << "\nВведите количество колонок массива: ";
    cin >> cols;

    int** A = new int* [rows];
    for (int i = 0; i < rows; i++) {
        A[i] = new int[cols];
    }

    /////////////

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            A[i][j] = rand() % 20;
            cout << A[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    ////////////

    cout << "Введите количество строк массива: ";
    cin >> rows1;
    cout << "\nВведите количество колонок массива: ";
    cin >> cols1;

    while (w < 1) {
        if (cols != rows1) {
            cout << "\nКол-во столбцов в первом массиве должно равнятся кол-ву строк во втором массиве\n";
            cout << "Введите количество строк массива: ";
            cin >> rows1;
            cout << "\nВведите количество колонок массива: ";
            cin >> cols1;
        }
        else if (rows < 0 || cols < 0 || cols1 < 0 || rows1 < 0){
            cout << "Строка или столбец не могут быть отрицательными\n";
        }

        else break;
    }

    int** B = new int* [rows1];
    for (int i = 0; i < rows1; i++) {
        B[i] = new int[cols1];
    }

    ///////
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            B[i][j] = rand() % 20;
            cout << B[i][j] << '\t';
        }
        cout << endl;
    }
    //////////////////////////////////////////////////////

    int** C = new int* [rows];
    for (int i = 0; i < rows; i++) 
        C[i] = new int[cols1];

    for (int rows3 = 0; rows3 < rows; rows3++)
    {
        C[rows3] = new int[cols];
        for (int cols3 = 0; cols3 < cols; cols3++)
        {
            C[rows3][cols3] = 0;
        }
    }

    int q2 = 0;
    for (int rows3 = 0; rows3 < rows; rows3++)
    {
        for (int cols3 = 0; cols3 < cols1; cols3++){

            for (int q = 0; q < cols; q++){
                
                q2 += A[rows3][q] * B[q][cols3];
            }
            C[rows3][cols3] = q2;
            q2 = 0;
        }
    }
    cout << endl;
    for (int rows3 = 0; rows3 < rows; rows3++) {
        for (int cols3 = 0; cols3 < cols; cols3++) {
            cout << C[rows3][cols3] << '\t';
        }
        cout << endl;
    }


}

