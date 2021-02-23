//#pragma once

#ifndef ST
#define ST
#include <stdio.h>
#include "windows.h"
#include <time.h>
#include <iostream>

using namespace std;

#define S 7

struct Tabl {
	string name;
	char type;
	short tem;
	unsigned sp;
};

void input(Tabl t[]);
void r(Tabl t[]);
void f3(Tabl t[]);
void print(Tabl t[]);

#endif