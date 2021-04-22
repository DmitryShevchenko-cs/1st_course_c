#include "fun.h"

struct List* create(void)
{
	system("cls");
	List* data, * tail; char c;
	struct List* head = tail = data = (List*)malloc(sizeof(List));

	printf("\n  name: ");
	scanf_s("%s", data->name, 10);
	setbuf(stdin, NULL);
	printf("\n  type: ");
	scanf_s("%s", data->type, 10);
	setbuf(stdin, NULL);
	printf("\n  temperature: ");
	scanf_s("%fl", &data->tem);
	printf("\n  speed: ");
	scanf_s("%d", &data->sp);
	do {
		data = (List*)malloc(sizeof(List));

		printf("\n  name: "); 
		scanf_s("%s", data->name, 10);
		setbuf(stdin, NULL);
		printf("\n  type: ");
		scanf_s("%s", data->type, 10);
		setbuf(stdin, NULL);
		printf("\n  temperature: ");
		scanf_s("%fl", &data->tem);
		printf("\n  sp: ");
		scanf_s("%d", &data->sp);


		tail->next = data;

		tail = data;
		printf(" Закінчити? y/n  ");
		c = _getch();

	} while (c != 'y');
	data->next = NULL;
	system("cls");
	return head;
}

void print(List* head)
{
	system("cls");
	List* data;
	data = head;
	int i = 1;
	while (data != NULL) 
	{
		printf( "\n  %d- %-10s %-8s  %-4.2f  %4d\n", i, data->name, data->type, data->tem, data->sp);
		data = data->next; 
		i++;
	}
	//_getch();
}