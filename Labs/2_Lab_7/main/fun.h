#pragma once
#ifndef XT
#define XT
#define  _CRT_SECURE_NO_WARNINGS

#include "windows.h"
#include <iostream>
#include <ctime>

using namespace std;

struct Tabl {
	char name[10];
	char type[7];
	float tem;
	int sp;
};

void input(Tabl t);
int random_number();
void random(Tabl t);
void add_before(Tabl t);
void add_after(Tabl t);
void choice_str(Tabl t, int num);
void print(Tabl t);

#endif
