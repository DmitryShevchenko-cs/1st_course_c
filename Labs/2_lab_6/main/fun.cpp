#include "fun.h"

char* push(char* STR, char* str)
{
	memset(str, 0, N + 1); 
	for (int i = 0; i < N - strlen(STR); i++) 
	{
		str[i] = ' ';
	}
	strcat(str, STR);
	return str;
}