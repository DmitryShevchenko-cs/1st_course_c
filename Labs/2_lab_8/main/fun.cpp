#include "fun.h"

void create(Tabl* t) {
	Tlist* temp = new Tlist;

	temp->info.sp = 1234;
	temp->next = NULL;

	scanf("%s", temp->info.name, 10);
	setbuf(stdin, NULL);
	scanf("%s", temp->info.type, 7);
	setbuf(stdin, NULL);
	scanf("%d", &temp->info.tem);
	scanf("%d", &temp->info.sp);
}