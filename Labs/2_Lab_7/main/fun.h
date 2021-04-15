#pragma once
#ifndef XT
#define XT
#define  _CRT_SECURE_NO_WARNINGS

#include "windows.h"
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <fstream>

using namespace std;

struct Tabl {
	char name[10];
	char type;
	int tem;
	int sp;
};

void input(Tabl t);
void random(Tabl t);
void add(Tabl t);
void print(Tabl t);

#endif
