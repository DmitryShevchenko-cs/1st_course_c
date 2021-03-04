#include "fun.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int arr[size]{};
    int B[size], C[size], D[size]; // >0  <0  =0
    int d = 0, c = 0, b = 0;

    Ent(arr);
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << "   ";
    }
    cout << endl << endl;

    gg (arr, B, C, D);

    for (int i = 0; i < size; i++) {
        cout << *(B + i) << "   ";
    }
    cout << endl << endl;

    for (int i = 0; i < size; i++) {
        cout << *(C + i) << "   ";
    }
    cout << endl << endl;

    for (int i = 0; i < size; i++) {
        cout << *(D + i) << "   ";
    }

    GG(arr, b, c, d, B, C, D);

    cout << endl << endl;
    cout << "=============================" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << "   ";
    }
    cout << endl << endl;
}