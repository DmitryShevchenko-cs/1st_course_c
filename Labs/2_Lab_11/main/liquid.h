#pragma once
#ifndef XT
#define XT


#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>
#include <iomanip>

#define S 4

using namespace std;

class liquid {
private:
	string name;
	char type;
	short tem;
	unsigned sp;
public:
	
	liquid();
	liquid(string name1, char type1, short tem1, unsigned sp1);
	liquid(const liquid& liq);

	void random();
	int random_number();
	void show();
	void setter(string name1, char type1, short tem1, unsigned sp1);
	~liquid();
};


#endif