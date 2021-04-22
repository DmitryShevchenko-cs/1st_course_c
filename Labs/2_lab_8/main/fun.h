#pragma once
#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>
#include <conio.h>

using namespace std;

struct List {
	char name[10];
	char type[7];
	float tem;
	int sp;
	List* next = NULL;
};
//struct List* head;
struct List* create(void);
void print(List* head);

#endif
