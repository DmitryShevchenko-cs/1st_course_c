#include "fun.h"


void create(struct List*& head, struct List *&tail)
{
	List* p, * pred;
	pred = NULL;
	do {
		p = (List*)malloc(sizeof(List));

		printf("\n  name: ");
		scanf_s("%s", p->name, 10);
		setbuf(stdin, NULL);
		printf("\n  type: ");
		scanf_s("%s", p->type, 10);
		setbuf(stdin, NULL);
		printf("\n  temperature: ");
		scanf_s("%fl", &p->tem);
		printf("\n  speed: ");
		scanf_s("%d", &p->sp);

		p->v1 = pred;
		if (pred != NULL)
			pred->next = p;
		else
			head = p;
		pred = p;
		puts(" �������� - <esc>");
	} while (_getch() != 27);
	tail = p;
	tail->next = NULL;
}


void list(List* p, List* head, List* tail)
{	
	int i = 1;
	if (p == head)
		while (p != NULL)
		{
			printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n", i, p->name, p->type, p->tem, p->sp);
			i++;
			p = p->next;
		}
	else if (p == tail)
		while (p != NULL)
		{
			printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n", i, p->name, p->type, p->tem, p->sp);
			i++;
			p = p->v1;
		}
	else
		printf("����������� ������");
	_getch();
}



int search(List* head, List* tail) {
	system("cls");
	int choice;
	List* temp = head;
	int i = 1;
	bool q = true;

	while (true)
	{

		printf("\n  1 - ����� �� �����\n");
		printf("\n  2 - ����� �� ����\n");
		printf("\n  3 - ����� �� ����������� \n");
		printf("\n  4 - ����� �� ��������\n");
		printf("\n  5 - �����\n");
		printf("\n  >> ");

		scanf_s("%d", &choice);

		switch (choice) {

		case 1:
			char name1[10];
			temp = head;

			printf("\n  name>");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->name, name1) == 0) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);

				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 2:

			char type1[10];
			temp = head;

			printf("\n  type>");
			scanf("%s", type1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->type, type1) == 0) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);

				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 3:

			float tem1;
			temp = head;

			printf("\n  temperature>");
			scanf("%fl", &tem1);
			setbuf(stdin, NULL);


			while (temp != NULL) {
				if (temp->tem == tem1) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);

				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 4:

			int sp1;
			temp = head;

			printf("\n  temperature>");
			scanf("%d", &sp1);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (temp->sp == sp1) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);
				}
				i++;
				temp = temp->next;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 5:
			printf("\n  �����\n\n");
			return 0;
			break;


		default:
			printf("\n  �� ����� �� �� �����!!!\n\n");
			break;
		}
	}
}

int searchB(List* head, List* tail) {
	system("cls");
	int choice;
	List* temp = tail;
	int i = 1;
	bool q = true;

	while (true)
	{

		printf("\n  1 - ����� �� �����\n");
		printf("\n  2 - ����� �� ����\n");
		printf("\n  3 - ����� �� ����������� \n");
		printf("\n  4 - ����� �� ��������\n");
		printf("\n  5 - �����\n");
		printf("\n  >> ");

		scanf_s("%d", &choice);

		switch (choice) {

		case 1:
			char name1[10];
			temp = tail;

			printf("\n  name>");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->name, name1) == 0) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);

				}
				i++;
				temp = temp->v1;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 2:

			char type1[10];
			temp = tail;

			printf("\n  type>");
			scanf("%s", type1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->type, type1) == 0) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);

				}
				i++;
				temp = temp->v1;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 3:

			float tem1;
			temp = tail;

			printf("\n  temperature>");
			scanf("%fl", &tem1);
			setbuf(stdin, NULL);


			while (temp != NULL) {
				if (temp->tem == tem1) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);

				}
				i++;
				temp = temp->v1;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 4:

			int sp1;
			temp = tail;

			printf("\n  temperature>");
			scanf("%d", &sp1);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (temp->sp == sp1) {
					q = false;
					printf("\n  %d- %-10s %-8s  %-4.2f  %4d\n",
						i, temp->name, temp->type, temp->tem, temp->sp);
				}
				i++;
				temp = temp->v1;
			}
			if (q) printf("\n  ������ �� �������!!!\n\n");

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 5:
			printf("\n  �����\n\n");
			return 0;
			break;


		default:
			printf("\n  �� ����� �� �� �����!!!\n\n");
			break;
		}
	}
}

void ADD(int el, List tt, List* head, List* tail) {
	List* temp = (List*)malloc(sizeof(List));

	if (el == 1) {
		temp->next = head;
		head = temp;

	}
	else {
		List* temp_pos = head;

		for (int i = 0; i < el - 2; i++)
			temp_pos = temp_pos->next;

		temp->next = temp_pos->next;
		temp_pos->next = temp;

	}
	strcpy(temp->name, tt.name);
	strcpy(temp->type, tt.type);
	temp->tem = tt.tem;
	temp->sp = tt.sp;
}

void del(int el, List* head, List * tail) {
	List* temp_pos = head;

	if (el == 1) {
		head = head->next;
		free(temp_pos);
	}
	else {
		for (int i = 0; i < el - 2; i++)
			temp_pos = temp_pos->next;

		List* temp = temp_pos->next;

		if (temp->next == NULL) temp_pos->next = NULL;
		else temp_pos->next = temp->next;

		free(temp);
	}
}
	
void sort(List* head, List* tail) {
	struct List* temp = head;

	int lines = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		lines++;
	}
	List* ptr, * trash, * tmp;
	tmp = (struct List*)malloc(sizeof(struct List));

	for (int n = 0; n < lines; n++) {

		ptr = head;
		while (ptr->next != NULL) {

			temp = ptr->next;
			if (strcmp(ptr->name, temp->name) > 0) {

				trash = temp->next;
				*tmp = *ptr;
				*ptr = *temp;
				free(temp);
				ptr->next = (struct List*)malloc(sizeof(struct List));
				*ptr->next = *tmp;
				ptr->next->next = trash;
			}

			ptr = ptr->next;
		}
	}

	free(tmp);
}

void addfile(List* head, List* tail) {

	system("cls");
	List* temp;
	temp = head;
	int i = 1;

	FILE* f;
	fopen_s(&f, "Spis1.txt", "w");
	if (!f) {
		puts("error opening");
		exit(0);
	}
	while (temp != NULL)
	{
		fprintf_s(f, "%-10s %-8s  %-3.2f  %4d\n", temp->name, temp->type, temp->tem, temp->sp);
		temp = temp->next;
		i++;
	}

}

struct List* CreateFromFile() {
	struct List* head = (struct List*)malloc(sizeof(struct List));
	struct List* tail = head, * temp = head;
	
	int size = 0, i = 0;


	FILE* file = NULL;
	fopen_s(&file, "Spis1.txt", "r");
	if (file == NULL) {

		exit(0);
	}

	char text;
	while (true) {
		text = fgetc(file);
		if (text == '\n')size++;
		else if (text == EOF) break;
	}

	fseek(file, 0, SEEK_SET);
	while (i != size) {
		fscanf_s(file, "%s", temp->name, 10);
		fscanf_s(file, "%s", temp->type, 7);
		fscanf_s(file, "%fl", &temp->tem);
		fscanf_s(file, "%d", &temp->sp);

		i++;
		tail->next = temp;
		tail = temp;
		temp = (List*)malloc(sizeof(List));
	}
	tail->next = NULL;

	fclose(file);
	return head;
}