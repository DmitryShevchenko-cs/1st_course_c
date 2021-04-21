#pragma once
#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>
#include <conio.h>

using namespace std;

struct Tabl {
	char name[10];
	char type[7];
	float tem;
	int sp;
};
struct Tlist {
	Tabl info;
	Tlist* next;
};
void create(Tabl* t);

#endif
