//#pragma once
#ifndef XT
#define XT

#include "windows.h"
#include <time.h>
#include <iostream>


#define S 7
#define PRINT_TYPE a

//#define PRINT_TYPE cin >> a
#define DEBAG 
using namespace std;

struct Tabl {
	string name;
	char type;
	short tem;
	unsigned sp;
};

void input(Tabl t[]);
void random(Tabl t[]);
void sort(Tabl t[]);
void print(Tabl t[]);

#endif