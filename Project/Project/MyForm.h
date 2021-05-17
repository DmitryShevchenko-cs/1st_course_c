#pragma once
#include <cmath>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;





	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ buttonLEFT;

	private: System::Windows::Forms::Button^ buttonRIGHT;

	private: System::Windows::Forms::Button^ buttonD;


	private: System::Windows::Forms::Button^ buttonUP;
	private: System::Windows::Forms::TextBox^ textBoxC;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::Button^ buttonL;
	private: System::Windows::Forms::Button^ buttonR;
	private: System::Windows::Forms::Button^ buttonConstriction;

	private: System::Windows::Forms::Button^ buttonExpansion;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonConstriction = (gcnew System::Windows::Forms::Button());
			this->buttonExpansion = (gcnew System::Windows::Forms::Button());
			this->buttonL = (gcnew System::Windows::Forms::Button());
			this->buttonR = (gcnew System::Windows::Forms::Button());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC = (gcnew System::Windows::Forms::TextBox());
			this->buttonLEFT = (gcnew System::Windows::Forms::Button());
			this->buttonRIGHT = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonUP = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->buttonConstriction);
			this->groupBox1->Controls->Add(this->buttonExpansion);
			this->groupBox1->Controls->Add(this->buttonL);
			this->groupBox1->Controls->Add(this->buttonR);
			this->groupBox1->Controls->Add(this->textBoxB);
			this->groupBox1->Controls->Add(this->textBoxA);
			this->groupBox1->Controls->Add(this->textBoxC);
			this->groupBox1->Controls->Add(this->buttonLEFT);
			this->groupBox1->Controls->Add(this->buttonRIGHT);
			this->groupBox1->Controls->Add(this->buttonD);
			this->groupBox1->Controls->Add(this->buttonUP);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(668, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(371, 648);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// buttonConstriction
			// 
			this->buttonConstriction->Location = System::Drawing::Point(88, 552);
			this->buttonConstriction->Name = L"buttonConstriction";
			this->buttonConstriction->Size = System::Drawing::Size(75, 23);
			this->buttonConstriction->TabIndex = 26;
			this->buttonConstriction->Text = L"сужение";
			this->buttonConstriction->UseVisualStyleBackColor = true;
			this->buttonConstriction->Click += gcnew System::EventHandler(this, &MyForm::buttonConstriction_Click);
			// 
			// buttonExpansion
			// 
			this->buttonExpansion->Location = System::Drawing::Point(88, 523);
			this->buttonExpansion->Name = L"buttonExpansion";
			this->buttonExpansion->Size = System::Drawing::Size(75, 23);
			this->buttonExpansion->TabIndex = 25;
			this->buttonExpansion->Text = L"разширение";
			this->buttonExpansion->UseVisualStyleBackColor = true;
			this->buttonExpansion->Click += gcnew System::EventHandler(this, &MyForm::buttonExpansion_Click);
			// 
			// buttonL
			// 
			this->buttonL->Location = System::Drawing::Point(88, 393);
			this->buttonL->Name = L"buttonL";
			this->buttonL->Size = System::Drawing::Size(59, 59);
			this->buttonL->TabIndex = 24;
			this->buttonL->Text = L"L";
			this->buttonL->UseVisualStyleBackColor = true;
			this->buttonL->Click += gcnew System::EventHandler(this, &MyForm::buttonL_Click);
			// 
			// buttonR
			// 
			this->buttonR->Location = System::Drawing::Point(217, 393);
			this->buttonR->Name = L"buttonR";
			this->buttonR->Size = System::Drawing::Size(59, 59);
			this->buttonR->TabIndex = 23;
			this->buttonR->Text = L"R";
			this->buttonR->UseVisualStyleBackColor = true;
			this->buttonR->Click += gcnew System::EventHandler(this, &MyForm::buttonR_Click);
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(52, 293);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(100, 22);
			this->textBoxB->TabIndex = 22;
			this->textBoxB->Text = L"0";
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(52, 262);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(100, 22);
			this->textBoxA->TabIndex = 21;
			this->textBoxA->Text = L"0";
			// 
			// textBoxC
			// 
			this->textBoxC->Location = System::Drawing::Point(52, 324);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->Size = System::Drawing::Size(100, 22);
			this->textBoxC->TabIndex = 20;
			this->textBoxC->Text = L"0";
			// 
			// buttonLEFT
			// 
			this->buttonLEFT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonLEFT.Image")));
			this->buttonLEFT->Location = System::Drawing::Point(88, 458);
			this->buttonLEFT->Name = L"buttonLEFT";
			this->buttonLEFT->Size = System::Drawing::Size(59, 59);
			this->buttonLEFT->TabIndex = 19;
			this->buttonLEFT->UseVisualStyleBackColor = true;
			this->buttonLEFT->Click += gcnew System::EventHandler(this, &MyForm::buttonLEFT_Click);
			// 
			// buttonRIGHT
			// 
			this->buttonRIGHT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRIGHT.Image")));
			this->buttonRIGHT->Location = System::Drawing::Point(217, 458);
			this->buttonRIGHT->Name = L"buttonRIGHT";
			this->buttonRIGHT->Size = System::Drawing::Size(59, 59);
			this->buttonRIGHT->TabIndex = 18;
			this->buttonRIGHT->UseVisualStyleBackColor = true;
			this->buttonRIGHT->Click += gcnew System::EventHandler(this, &MyForm::buttonRIGHT_Click);
			// 
			// buttonD
			// 
			this->buttonD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonD.Image")));
			this->buttonD->Location = System::Drawing::Point(152, 458);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(59, 59);
			this->buttonD->TabIndex = 17;
			this->buttonD->UseVisualStyleBackColor = true;
			this->buttonD->Click += gcnew System::EventHandler(this, &MyForm::buttonD_Click);
			// 
			// buttonUP
			// 
			this->buttonUP->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonUP.Image")));
			this->buttonUP->Location = System::Drawing::Point(152, 393);
			this->buttonUP->Name = L"buttonUP";
			this->buttonUP->Size = System::Drawing::Size(59, 59);
			this->buttonUP->TabIndex = 16;
			this->buttonUP->UseVisualStyleBackColor = true;
			this->buttonUP->Click += gcnew System::EventHandler(this, &MyForm::buttonUP_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 166);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"10";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"-10";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(215, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 27);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 327);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"c";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 296);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"До:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"От:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"y=ax+b", L"y=a(x^2)+bx+c", L"y=asin(bx)+c", L"y=(√ax + b)",
					L"y=(a/x)+b"
			});
			this->comboBox1->Location = System::Drawing::Point(31, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Не выбрано";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(650, 648);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 672);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		float from, to;
		float a, b, c;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(comboBox1->SelectedIndex != -1 && textBox1->Text != "" && textBox2->Text != "") {
			chart1->Series["Series1"]->Points->Clear();

			from = Convert::ToDouble(textBox1->Text);
			to = Convert::ToDouble(textBox2->Text);

			a = Convert::ToDouble(textBoxA->Text);
			b = Convert::ToDouble(textBoxB->Text);
			c = Convert::ToDouble(textBoxC->Text);

			switch (comboBox1->SelectedIndex) {
			case 0:
				for (float i = from; i < to; i += 0.1)
					chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
				break;
			case 1:
				for (float i = from; i < to; i += 0.1)
					chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
				break;
			case 2:
				for (float i = from; i < to; i += 0.1)
					chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
				break;
			case 3:
				for (float i = from; i < to; i += 0.1)
					chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
				break;
			case 4:
				for (float i = from; i < to; i += 0.1)
					chart1->Series["Series1"]->Points->AddXY(i, i);
				break;
			}
		}
		else 
			MessageBox::Show("Возможно не все поля заполнены.\nПроверте данные и повторите попытку.");
	}
//кнопка вверх
private: System::Void buttonUP_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex != -1 && textBox1->Text != "" && textBox2->Text != "") {
		chart1->Series["Series1"]->Points->Clear();

		switch (comboBox1->SelectedIndex) {
		case 0:
			b++;
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
			break;
		case 1:
			c++;
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
			break;
		case 2:
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
			break;
		case 3:
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
			break;
		case 4:
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, i);
			break;
		}
	}
	else
		MessageBox::Show("Возможно не все поля заполнены.\nПроверте данные и повторите попытку.");

}
//кнопка вверх
////	   
// кнопка вниз
private: System::Void buttonD_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex != -1 && textBox1->Text != "" && textBox2->Text != "") {
		chart1->Series["Series1"]->Points->Clear();

		switch (comboBox1->SelectedIndex) {
		case 0:
			b--;
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
			break;
		case 1:
			c--;
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
			break;
		case 2:
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
			break;
		case 3:
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
			break;
		case 4:
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, i);
			break;
		}
	}
	else
		MessageBox::Show("Возможно не все поля заполнены.\nПроверте данные и повторите попытку.");
}
// кнопка вниз
////
// turn left
private: System::Void buttonL_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		a++;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
		break;
	case 2:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
		break;
	case 3:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
		break;
	case 4:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, i);
		break;
	}
}
// turn left
//////
// turn right
private: System::Void buttonR_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		a--;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
		break;
	case 2:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
		break;
	case 3:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
		break;
	case 4:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, i);
		break;
	}
}
// turn right
////
// push right
private: System::Void buttonRIGHT_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		if (a > 0)
			b--;
		else
			b++;
		
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
		break;
	case 2:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
		break;
	case 3:
		b--;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
		break;
	case 4:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, i);
		break;
	}
}
//push right
////
// push left
private: System::Void buttonLEFT_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		if (a > 0)
			b++;
		else
			b--;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
		break;
	case 2:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
		break;
	case 3:
		b++;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
		break;
	case 4:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, i);
		break;
	}
}
//push left
////
// сужение
private: System::Void buttonConstriction_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		a++;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
		break;
	case 2:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
		break;
	case 3:
		a--;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
		break;
	case 4:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, i);
		break;
	}
}
// сужение
////
// расширение
private: System::Void buttonExpansion_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		a--;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * i * i) + (b * i) + c);
		break;
	case 2:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, (a * sin(b * i) + c));
		break;
	case 3:
		a++;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, sqrt(a * i + b));
		break;
	case 4:
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, i);
		break;
	}
}
};
}
