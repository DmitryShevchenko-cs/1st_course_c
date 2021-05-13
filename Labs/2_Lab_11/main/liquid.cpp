#include "liquid.h"

liquid::liquid() {

}
liquid::liquid(string name1, char type1, short tem1, unsigned sp1) {
	this->name = name1;
	this->type = type1;
	this->tem = tem1;
	this->sp = sp1;
}
liquid::liquid(const liquid& a) {
	this->name = a.name;
	this->type = a.type;
	this->tem = a.tem;
	this->sp =  a.sp;
}

void liquid::setter(string name, char type, short tem, unsigned sp) {

	this->name = name;
	this->type = type;
	this->tem = tem;
	this->sp = sp;
}

int liquid::random_number() {
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
			*(arr + i) = newrand;
			i++;
		}
	}
	int k = 0;
	return *(arr + k++);
}
void liquid::random() {

	string NAME[7]{ "Анилин", "Рутуть", "Кедровое", "Бензол", "Вода", "Спирт", "Глицерин" };
	char TYPE[7]{ 'Ч', 'Ч', 'М', 'Ч', 'Ч', 'Ч', 'Ч' };
	float TEMP[7]{ 20, 21, 29, 23, 30, 25, 28 };
	int SP[7]{ 1656, 1451, 1406, 1324, 1481, 1180, 1923 };
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
			*(arr + i) = newrand;
			i++;
		}
	}
	int k = 0;
	int randnum = *(arr + k++);

	name = *(NAME + randnum);
	type = *(TYPE + randnum);
	tem = *(TEMP + randnum);
	sp = *(SP + randnum);
}

void sort(liquid* A) {


	/*for (int i = 0; i < S; i++) {
		for (int j = 0; j < S - 1; j++) {
			if (A[j] > *(A + j + 1)) 
				swap(*(A + j), *(A + j + 1));
		}
	}*/
}

void liquid::show() {

	cout << "| " << setw(9) << name << " | " << setw(5) << type << " | " <<
		setw(9) << tem << " | " << setw(11) << sp << " | \n";
}

liquid:: ~liquid() {

}