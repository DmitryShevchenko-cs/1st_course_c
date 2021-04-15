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

void input(Tabl t, int& line);
int random_number();
void random(Tabl t, int& line);
void add_before(Tabl t, int& line);
void add_after(Tabl t, int& line);
void choice(Tabl t);
void print(Tabl t, int& line);

#endif
