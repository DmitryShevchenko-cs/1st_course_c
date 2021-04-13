#pragma once
#ifndef XT
#define XT

#include "windows.h"
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <fstream>

#pragma warning(disable : 4996)
#define  _CRT_SECURE_NO_WARNINGS

using namespace std;

struct Tabl {
	char name[10];
	char type;
	int tem;
	int sp;
};

void input(Tabl t);
void random(Tabl t);
void print(Tabl t);

#endif
