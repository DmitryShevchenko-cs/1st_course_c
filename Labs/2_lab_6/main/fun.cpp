#include "fun.h"

char* myGets(char* s) {
	
	int ch;
	char* p = s;

	while ((ch = getchar()) != '\n' && ch != EOF) {
	
		*s = (char)ch;
		s++;
	}

	*s = '\0';
	return p;
}

bool myStrcmp(char* str1, char* str2){

	for (int i = 0; i < N; i++) {
		if (*(str1 + i) != *(str2 + i)) return 1;
		else return 0;
	}

}
int myStrlen(const char* str)
{
	int counter = 0;
	while (*(str+counter) != '\0')
	{
		counter++;
	}
	return counter;
}

char* myStrcat(char* str1, char* str2)
{
	while (*str1)
	{
		str1++;
	}
	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return str1;
}

char* push(char* STR, char* str)
{
	
	for (int i = 0; i <= N; i++)
	{
		*(str + i) = '\0';
	}
	for (int i = 0; i < N - myStrlen(STR); i++)
	{
		*(str + i) = ' ';
	}
	myStrcat(str, STR);
	return str;
}