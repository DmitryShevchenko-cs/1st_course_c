#pragma once
#ifndef XT
#define XT
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <ctime>

using namespace std;

void initialize(int** A, int n, int m);
int sum(int** A, int n, int m);
int prod(int** A, int n, int m);
#endif