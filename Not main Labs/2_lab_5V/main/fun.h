#pragma once
#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "windows.h"
#include <ctime>

using namespace std;
void SS(int(*sort)(int*, int), int* mas, int size);
int bubbleSort_1(int* mas, int size);
int InsertionSort_2(int* mas, int size);
int selectionSort_3(int* mas, int size);
#endif