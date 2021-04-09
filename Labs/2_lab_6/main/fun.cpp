#include "fun.h"


bool myStrcmp(char* str1, char* str2){

	for (int i = 0; ; i++)
	{
		if (*(str1 + i) != *(str2 + i))
		{
			return *(str1 + i) < *(str2 + i) ? -1 : 1;
		}

		if (*(str1 + i) == '\0')
		{
			return 0;
		}
	}

	
}
int myStrlen(char* str)
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
	
	while (*str1) str1++;
	while (*str2) {
		*str1++ = *str2++;
	}
	return str1;
}

char* push_str(char* str1, char* str2)
{
	int i_strlen = myStrlen(str1);
	for (int i = 0; i <= N; i++)
	{
		*(str2 + i) = '\0';
	}
	
	for (int i = 0; i < N - i_strlen; i++)
	{
		*(str2 + i) = ' ';
	}
	myStrcat(str2, str1);
	return str2;
}