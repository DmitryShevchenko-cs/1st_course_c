#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char STR[N+1], str[N+2];
	char stars[]="***", zero[]="";

	
	printf("Введите сообщение, '***'-прекратить ввод> ");
	scanf("%[^\n]s", STR);

	while (true)
	{
		
		if (!myStrcmp(STR, stars)) {
			printf("ВЫХОД\n");
			break;
		}
		if (!myStrcmp(STR, zero)) 
			printf("Тут пусто (\n");
		else {
			printf("%s\n", STR);
			printf("%s\n", push(STR, str));
		}

		if (scanf("%*[^\n]") == EOF) {
			if (feof(stdin)) {
				// Handle stdin EOF.
			}
			else {
				// Handle stdin error.
			}
		}
		getchar();

		for (int i = 0; i < N; i++)
		{
			*(STR + i) = '\0';
		}
		printf("Введите сообщение, '***'-прекратить ввод> ");
		scanf("%[^\n]s", STR);
		
	}
	
	return 0; 
}