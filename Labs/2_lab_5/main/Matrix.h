#pragma once
#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>


using namespace std;

void initialize_1(int* Ar, int n);
void initialize_2(int** A, int n);
void count_1(int** A, int n);
void count_2(int **A, int n);

#ifndef choise
#define choise int a; printf("Выбор: \n 1 - Работа с одномерным как с двумерным \n 2 - Работа с двумерным как с двумерным \n"); scanf("%d", &a); 
#endif

#endif XT