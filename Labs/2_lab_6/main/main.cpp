#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char STR[N+1], str[N+2];
	char stars[]="***", zero[]="";

	for (int i = 0; i < N; i++)
	{
		*(STR + i) = '\0';
	}
	printf("Введите сообщение, '***'-прекратить ввод> ");
	scanf("%[^\n]s", STR);

	while (true)
	{
		
		if (!myStrcmp(STR,stars)) break;
		if (!myStrcmp(STR, zero)) printf("Тут пусто (\n");
		printf("%s\n", STR);
		printf("%s\n", push(STR, str));

		int c;
		while ((c = getchar()) != EOF && c != '\n'); /* <note the semicolon! */

		if (c == EOF) {
			if (feof(stdin)) {
				/* Handle stdin EOF. */
			}
			else {
				/* Handle stdin error. */
			}
		}

		for (int i = 0; i < N; i++)
		{
			*(STR + i) = '\0';
		}
		printf("Введите сообщение, '***'-прекратить ввод> ");
		scanf("%[^\n]s", STR);
		fflush(stdin);
	}
	
	return 0; 
}