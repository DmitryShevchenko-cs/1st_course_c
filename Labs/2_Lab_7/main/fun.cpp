#include "fun.h"

void input(Tabl t) {

	FILE* file = NULL;
	fopen_s(&file ,"Tab.txt", "w");
	if (file == NULL) {
		puts("������ �������� �����");
		exit(0);
	}


	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);
	scanf_s("%c", &t.type, 2);
	scanf_s("%d", &t.tem);
	scanf_s("%d", &t.sp);

	fprintf_s(file, "%s %c %d %d\n", t.name, t.type, t.tem, t.sp);
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



void print(Tabl t) {

	//printf("-----------------------------------------------\n");
	//printf("|          �������� ����� � ���������         |\n");
	//printf("|---------------------------------------------|\n");
	//printf("| ��������  |  ���  |�����������|  ��������   |\n");
	//printf("|           |       |  (����.�) |   (�/���)   |\n");
	//printf("|-----------|-------|-----------|-------------|\n");
	//for (int i = 0; i < S; i++)
	//	printf("| %9s | %5c | %9hd | %11u |\n",
	//		t[i].name, t[i].type, t[i].tem, t[i].sp);
	//printf("|---------------------------------------------|\n");
	//printf("| ����������:  � - ������ ��������, � - ����� |\n");
	//printf("-----------------------------------------------\n");
	//cout << endl;

}