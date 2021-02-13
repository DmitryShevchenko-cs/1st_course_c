
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "windows.h"
using namespace std;

struct Tabl {
    string name;
    char type;
    short tem;
    unsigned sp;
    
} t[4]{};

void f1() {
    
}

void f2(int a) {

    t[1].name = "Анилин";
    t[2].name = "Ртуть";
    t[3].name = "Кедровое";

    t[1].type = 'Ч';
    t[2].type = 'Ч';
    t[3].type = 'М';

    t[1].tem = 20;
    t[2].tem = 20;
    t[3].tem = 29;

    t[1].sp = 1656;
    t[2].sp = 1451;
    t[3].sp = 1406;

}


int main(void) {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;

    cout << "1 - ввод с экрана\n";
    cout << "2 - случайным образом\n";
    cin >> a;


    if (a == 2) {
        f2(a);
        cout << "Что бдуем делать дальше?\n";
        cout << "3 - сортировка  \n";
        cout << "4 - печать \n";
        cin >> a;

        if (a == 3) {

        }

        else if (a == 4) {
            
            printf("-----------------------------------------------\n");
            printf("|          Скорость звука в жидкостях         |\n");
            printf("|---------------------------------------------|\n");
            printf("| Вещество  |  Тип  |Температура|  Скорость   |\n");
            printf("|           |       |  (град.С) |   (м/сек)   |\n");
            printf("|-----------|-------|-----------|-------------|\n");
            for (int i = 1; i < 4; i++)
                printf("| %9s | %5c | %9hd | %11u |\n",
                    t[i].name.c_str(), t[i].type, t[i].tem, t[i].sp);
            printf("|---------------------------------------------|\n");
            printf("| примечание:  ч - чистое вещество, м - масло |\n");
            printf("-----------------------------------------------\n");
        }

        else cout << "wrong number\n";

    }

    else cout << "wrong number";

}