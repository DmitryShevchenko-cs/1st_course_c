#include "MyForm.h"
#include "fun.h"
#include "MyForm.cpp"

void x() {
	if (Project::MyForm::b >= 0)
		textBox3->Text = a + "x+" + b;
	else
		textBox3->Text = a + "x+" + b;
}

void xx() {
	if (b >= 0 && c >= 0)
		textBox3->Text = a + "(x^2)+" + b + "x+" + c;
	if (b < 0 && c >= 0)
		textBox3->Text = a + "(x^2)" + b + "x+" + c;
	if (b < 0 && c < 0)
		textBox3->Text = a + "(x^2)" + b + "x" + c;
	if (b >= 0 && c < 0)
		textBox3->Text = a + "(x^2)+" + b + "x" + c;
}

void Sin() {
	if (c >= 0 && d >= 0)
		textBox3->Text = a + "sin(" + b + "x+" + c + ")+" + d;
	if (c < 0 && d >= 0)
		textBox3->Text = a + "sin(" + b + "x" + c + ")+" + d;
	if (c >= 0 && d < 0)
		textBox3->Text = a + "sin(" + b + "x+" + c + ")" + d;
	if (c < 0 && d < 0)
		textBox3->Text = a + "sin(" + b + "x" + c + ")" + d;
}
void Sqrt() {
	if (b >= 0 && c >= 0)
		textBox3->Text = "sqrt(" + a + "x+" + b + ")+" + c;
	if (b < 0 && c >= 0)
		textBox3->Text = "sqrt(" + a + "x" + b + ")+" + c;
	if (b < 0 && c < 0)
		textBox3->Text = "sqrt(" + a + "x" + b + ")" + c;
	if (b >= 0 && c < 0)
		textBox3->Text = "sqrt(" + a + "x+" + b + ")" + c;
}

