#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char STR[N], str[N];
	while (true)
	{
		printf("Введите сообщение> ");
		if (!strcmp(gets_s(STR), "***")) break;
		cout << STR << endl;
		cout << push(STR,str) << endl;
	}
	
	return 0;
}