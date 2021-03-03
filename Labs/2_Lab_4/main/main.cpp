#include "Fun.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int arr[size]{};
    int s = 0;

    Ent(arr);
 
    cout << "Массив до :\n";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << "   ";
    }
    cout << endl;
    cout << endl;

    // отрицательные элементы с нечетными индексами
    for (int i = 1; i < size; ) {
        if (*(arr + i) < 0) {
            s++;
        }
        i += 2;
    }
    //

    int* narr = new int[s];
    swp(arr,arr , narr);

    cout << "Массив после :\n";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << "   ";
    }
    cout << endl;
    cout << endl;

    cout << "Все отрицательные элементы с нечетными индексами" << endl;
   
    for (int i = 0; i < s; i++) {
        cout << *(narr + i) << "   ";
    }
    cout << endl;
    delete[] narr;
}