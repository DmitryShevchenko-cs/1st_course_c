#include "fun.h"

void input(Tabl t) {
	system("cls");
	FILE* file = NULL;
	fopen_s(&file ,"Tab.txt", "w");
	if (file == NULL) {
		puts("������ �������� �����");
		exit(0);
	}

	printf("������� ��������, ���, �����������, ��������:\n");
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%c", &t.type, 1);
	setbuf(stdin, NULL);
	scanf_s("%f", &t.tem);
	scanf_s("%d", &t.sp);

	fprintf_s(file, "%-10s %-c %-4.2f %-4d\n", t.name, t.type, t.tem, t.sp);
	fclose(file);


}

void random(Tabl t) {
	
	srand(time(NULL));
	int arr[7]{};
	bool already;

	for (int i = 0; i < 7; ) {

		already = false;
		int newrand = rand() % 7;

		for (int j = 0; j < i; j++) {
			if (*(arr + i) == newrand) {
				already = true;
			}
		}

		if (already == false) {
			*(arr+i) = newrand;
			i++;
		}
	}

	/*t[arr[0]] = { {'�', '�', '�', '�', '�', '�', '\0'}, '�' , 20 , 1656 };
	t[arr[1]] = { {'�', '�', '�', '�', '�', '\0'} , '�' , 20 , 1451 };
	t[arr[2]] = { {'�', '�', '�', '�', '�', '�', '�', '�', '\0'} , '�' , 29 , 1406 };
	t[arr[3]] = { {'�', '�', '�', '�', '�', '�', '\0'} , '�' , 20 , 1324 };
	t[arr[4]] = { {'�', '�', '�', '�', '\0'} , '�' , 20 , 1481 };
	t[arr[5]] = { {'�', '�', '�', '�', '�', '\0'} , '�' , 20 , 1180 };
	t[arr[6]] = { {'�', '�', '�', '�', '�', '�', '�', '�', '\0'} , '�' , 20 , 1923 };*/

	cout << "��������� ����������" << endl;
	cout << endl;

	cout << endl;
}

void add(Tabl t) {

	system("cls");
	FILE* file = NULL;
	fopen_s(&file, "Tab.txt", "a");
	if (file == NULL) {
		puts("������ �������� �����");
		exit(0);
	}

	printf("������� ��������, ���, �����������, ��������:\n");
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%c", &t.type, 1);
	setbuf(stdin, NULL);
	scanf_s("%f", &t.tem);
	scanf_s("%d", &t.sp);

	fprintf_s(file, "%-10s %-c %-3.2f %-4d\n", t.name, t.type, t.tem, t.sp);
	fclose(file);
}

void print(Tabl t) {
	
	system("cls");
	FILE* file = NULL;
	fopen_s(&file, "Tab.txt", "r");
	if (!file) {
		puts("������ �������� �����");
		exit(0);
	}
	char ch = fgetc(file);
	while (!feof(file)) {
		putchar(ch);
		ch = fgetc(file);
	}
	fclose(file);
	printf("\n\n\n");

}