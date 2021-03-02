#include "Fun.h"

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    int arr[size]{};
    //int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 50;
    }

    cout << "Массив до :\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    cout << endl;

    cout << "Массив после :\n";
    swp(arr);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
}