#pragma once
#ifndef XT
#define XT

#include "windows.h"
#include <ctime>
#include <iostream>

#define  _CRT_SECURE_NO_WARNINGS
#define S 7
#define DEBAG 
using namespace std;

struct Tabl {
	char name[10];
	char type;
	short tem;
	unsigned sp;
};

void input(Tabl t[]);
void random(Tabl t[]);

void print(Tabl t[]);

#endif
