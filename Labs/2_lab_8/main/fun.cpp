#include "fun.h"

struct List* create(void)
{
	system("cls");
	List* temp, * tail; char c;
	struct List* head = tail = temp = (List*)malloc(sizeof(List));

	printf("\n  name: ");
	scanf_s("%s", temp->name, 10);
	setbuf(stdin, NULL);
	printf("\n  type: ");
	scanf_s("%s", temp->type, 10);
	setbuf(stdin, NULL);
	printf("\n  temperature: ");
	scanf_s("%fl", &temp->tem);
	printf("\n  speed: ");
	scanf_s("%d", &temp->sp);
	do {
		temp = (List*)malloc(sizeof(List));

		printf("\n  name: "); 
		scanf_s("%s", temp->name, 10);
		setbuf(stdin, NULL);
		printf("\n  type: ");
		scanf_s("%s", temp->type, 10);
		setbuf(stdin, NULL);
		printf("\n  temperature: ");
		scanf_s("%fl", &temp->tem);
		printf("\n  sp: ");
		scanf_s("%d", &temp->sp);


		tail->next = temp;

		tail = temp;
		printf(" Закінчити? y/n  ");
		c = _getch();

	} while (c != 'y');
	temp->next = NULL;
	system("cls");
	return head;
}

void print(List* head)
{
	system("cls");
	List* temp;
	temp = head;
	int i = 1;
	while (temp != NULL) 
	{
		printf( "\n  %d- %-10s %-8s  %-4.2f  %4d\n", i, temp->name, temp->type, temp->tem, temp->sp);
		temp = temp->next;
		i++;
	}
	printf("\n\n");
	//_getch();
}

void search(){}

void ADD(int el, List tt, List* head) { 
	List* temp = (List*)malloc(sizeof(List));  

	if (el == 0) {		
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

void del(int el, List* head) {	 
	List* temp_pos = head;   

	if (el == 0) {	        
		head = head->next;  
		free (temp_pos);        
	}
	else {			 
		for (int i = 0; i < el - 2; i++)  
			temp_pos = temp_pos->next;    

		List* temp = temp_pos->next; 

		if (temp->next == NULL) temp_pos->next = NULL; 
		else temp_pos->next = temp->next; 

		free(temp);   
	}//else
}

struct List* sort(List* head) {
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
	return(head);
}


void addfile(List* head){

	system("cls");
	List* temp;
	temp = head;
	int i = 1;

	FILE* f;
	fopen_s(&f, "Spis.txt", "w");
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

struct List* CreateFromFile(){
	

	struct List* head = (struct List*)malloc(sizeof(struct List));
	struct List* tail = head, *temp = head;
	int size = 0, i = 0;


	FILE* file = NULL;
	fopen_s(&file, "Spis.txt", "r");
	if (file == NULL) {

		exit(0);
	}
	
	char xxx;
	while (true) {
		xxx = fgetc(file);
		if (xxx == '\n')size++;
		else if (xxx == EOF) break;
	}
	cout << size << endl;
	fseek(file, 0, SEEK_SET);
	//	fseek(file, 1, SEEK_CUR);
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