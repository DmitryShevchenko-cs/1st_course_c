#pragma once
#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#define N 10
using namespace std;
char* myGets(char* s);
bool myStrcmp(char* str1, char* str2);
int myStrlen(const char* str);
char* myStrcat(char* str1, char* str2);
char* push(char* STR, char* str);
#endif