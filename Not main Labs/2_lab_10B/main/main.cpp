#include "fun.h"

int main() {
	SUM a, b(5,7), c;
	SUM *aa, *bb, *cc;

	aa = &a;
	a.print();
	aa->print();
	cout << endl;
	a.sum();
	aa->sum();
	cout << endl;
	a.print();
	aa->print();

	cout << "-------------------------" << endl;
	cout << endl;
	bb = &b;
	b.print();
	bb->print();
	cout << endl;
	b.sum();
	bb->sum();
	cout << endl;
	b.print();
	bb->print();
	
	cout << "-------------------------" << endl;
	cout << endl;
	cc = &c;
	c.get(4, 99);
	c.print();
	c.sum();
	c.print();
	cout << endl;
	cc->get(3, 88);
	cc->print();
	cc->sum();
	cc->print();

	return 0;
}