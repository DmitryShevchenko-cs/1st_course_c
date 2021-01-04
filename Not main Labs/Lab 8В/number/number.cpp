#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long int num_a;
    int sum=0, k=0;
    int temp, un_num = 0;
   
    //354
    cout << "Введите число: ";
    cin >> num_a;
    
    while (num_a != 0) {
        
        temp = num_a % 10;
      
        un_num += temp;
        un_num *= 10;

        sum += temp;

        num_a /= 10;
        k++;

    }
    un_num /= 10;
    cout << endl << endl;
    cout << "Число наоборот: " << un_num << endl;
    cout << "Сумма цифр: " << sum << endl;
    cout << "Кол-во цифр: " << k << endl;
   

    return 0;
}

