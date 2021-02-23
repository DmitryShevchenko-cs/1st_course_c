#include "Header.h"


void input(Tabl t[]) {

	for (int i = 0; i < S; i++) {
		cout << i + 1 << "." << " ������� ��������, ���, ����������� ,��������: ";
		cin >> t[i].name >> t[i].type >> t[i].tem >> t[i].sp;
	}
}


void r(Tabl t[]) {
	srand(time(NULL));

	int arr[S]{};
	bool already;

	for (int i = 0; i < S; ) {

		already = false;
		int newrand = rand() % S;

		for (int j = 0; j < i; j++) {
			if (arr[j] == newrand) {
				already = true;
			}
		}

		if (already == false) {
			arr[i] = newrand;
			i++;
		}
	}

	t[arr[0]] = { "������" , '�' , 20 , 1656 };
	t[arr[1]] = { "�����" , '�' , 20 , 1451 };
	t[arr[2]] = { "��������" , '�' , 29 , 1406 };
	t[arr[3]] = { "������" , '�' , 20 , 1324 };
	t[arr[4]] = { "����" , '�' , 20 , 1481 };
	t[arr[5]] = { "�����" , '�' , 20 , 1180 };
	t[arr[6]] = { "��������" , '�' , 20 , 1923 };

}

void f3(Tabl t[]) {
	for (int i = 0; i < S; i++) {
		for (int j = 0; j < S - 1; j++) {
			if (t[j].name > t[j + 1].name) swap(t[j], t[j + 1]);
		}
	}
}

void print(Tabl t[]) {
	printf("-----------------------------------------------\n");
	printf("|          �������� ����� � ���������         |\n");
	printf("|---------------------------------------------|\n");
	printf("| ��������  |  ���  |�����������|  ��������   |\n");
	printf("|           |       |  (����.�) |   (�/���)   |\n");
	printf("|-----------|-------|-----------|-------------|\n");
	for (int i = 0; i < S; i++)
		printf("| %9s | %5c | %9hd | %11u |\n",
			t[i].name.c_str(), t[i].type, t[i].tem, t[i].sp);
	printf("|---------------------------------------------|\n");
	printf("| ����������:  � - ������ ��������, � - ����� |\n");
	printf("-----------------------------------------------\n");

}