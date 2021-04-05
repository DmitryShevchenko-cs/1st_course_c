#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char STR[N+1], str[N+2];
	char stars[]="***", zero[]="";
	while (true)
	{
		printf("Введите сообщение, '***'-прекратить ввод> ");
		
		if (!myStrcmp(myGets(STR),stars)) break;
		if (!myStrcmp(STR, zero)) printf("Тут пусто (\n");
		printf("%s\n", STR);
		printf("%s\n", push(STR, str));
		
	}
	return 0; 
}