#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long int num_a;
    int sum=0, k=0;
    long int num_b;
    int temp;
    int sumall;
    cout << "Введите число: ";
    cin >> num_a;
    cout << "Число наоборот: ";
    while (num_a != 0) {
        
        temp = num_a % 10;
        cout << temp;
       
        
        sum += temp;

        num_a /= 10;
        k++;

    }

    cout << "\n\n" <<"Сумма цифр: " << sum << endl;
    cout <<"Кол-во цифр: "<< k << endl;
   

    return 0;
}

