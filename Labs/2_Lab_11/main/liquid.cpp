#include "liquid.h"

liquid::liquid() {

}
liquid::liquid(string name1, char type1, short tem1, unsigned sp1) {
	this->name = name1;
	this->type = type1;
	this->tem = tem1;
	this->sp = sp1;
}
liquid::liquid(const liquid& liq) {
	this->name = liq.name;
	this->type = liq.type;
	this->tem = liq.tem;
	this->sp =  liq.sp;
}

void liquid::setter(string name1, char type1, short tem1, unsigned sp1) {

	this->name = name1;
	this->type = type1;
	this->tem = tem1;
	this->sp = sp1;

}


void liquid::random() {

	string NAME[7]{ "Анилин", "Рутуть", "Кедровое", "Бензол", "Вода", "Спирт", "Глицерин" };
	char TYPE[7]{ 'Ч', 'Ч', 'М', 'Ч', 'Ч', 'Ч', 'Ч' };
	float TEMP[7]{ 20, 21, 29, 23, 30, 25, 28 };
	int SP[7]{ 1656, 1451, 1406, 1324, 1481, 1180, 1923 };

	srand(time(NULL));
	int randnum = rand() % 7;

	name = *(NAME + randnum);
	type = *(TYPE + randnum);
	tem = *(TEMP + randnum);
	sp = *(SP + randnum);
}

void liquid::show() {
	
		printf("| %9s | %5c | %9hd | %11u |\n",
			name, type, tem, sp);
}

liquid:: ~liquid() {

}