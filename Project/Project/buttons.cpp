#include "buttons.h"
#include "MyForm.h"

void buttUp(float& a, float& b, float& c, float& d) {

	switch (comboBox1->SelectedIndex) {
	case 0:
		b++;
		textBoxB->Text = Convert::ToString(b);
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		c++;
		textBoxC->Text = Convert::ToString(c);
		if (b >= 0 && c >= 0)
			textBox3->Text = a + "(x^2)+" + b + "x+" + c;
		if (b < 0 && c >= 0)
			textBox3->Text = a + "(x^2)" + b + "x+" + c;
		if (b < 0 && c < 0)
			textBox3->Text = a + "(x^2)" + b + "x" + c;
		if (b >= 0 && c < 0)
			textBox3->Text = a + "(x^2)+" + b + "x" + c;

		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
		break;
	case 2:
		d++;
		textBoxD->Text = Convert::ToString(d);
		if (c >= 0 && d >= 0)
			textBox3->Text = a + "sin(" + b + "x+" + c + ")+" + d;

		if (c < 0 && d >= 0)
			textBox3->Text = a + "sin(" + b + "x" + c + ")+" + d;

		if (c >= 0 && d < 0)
			textBox3->Text = a + "sin(" + b + "x+" + c + ")" + d;

		if (c < 0 && d < 0)
			textBox3->Text = a + "sin(" + b + "x" + c + ")" + d;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * sin((b * i) + c) + d));
		break;
	case 3:
		c++;
		textBoxC->Text = Convert::ToString(c);
		if (b >= 0 && c >= 0)
			textBox3->Text = "sqrt(" + a + "x+" + b + ")+" + c;
		if (b < 0 && c >= 0)
			textBox3->Text = "sqrt(" + a + "x" + b + ")+" + c;
		if (b < 0 && c < 0)
			textBox3->Text = "sqrt(" + a + "x" + b + ")" + c;
		if (b >= 0 && c < 0)
			textBox3->Text = "sqrt(" + a + "x+" + b + ")" + c;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b) + c);
		break;

	}

}