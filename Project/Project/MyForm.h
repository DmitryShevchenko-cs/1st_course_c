#pragma once
#include <cmath>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //для работы с файлами

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

	private: System::Windows::Forms::Button^ buttonLEFT;

	private: System::Windows::Forms::Button^ buttonRIGHT;

	private: System::Windows::Forms::Button^ buttonD;


	private: System::Windows::Forms::Button^ buttonUP;
	private: System::Windows::Forms::TextBox^ textBoxC;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::Button^ buttonL;
	private: System::Windows::Forms::Button^ buttonR;
	private: System::Windows::Forms::Button^ buttonShort;

	private: System::Windows::Forms::Button^ buttonTall;


	private: System::Windows::Forms::TextBox^ textBoxD;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ buttonOpen;






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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxD = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonShort = (gcnew System::Windows::Forms::Button());
			this->buttonTall = (gcnew System::Windows::Forms::Button());
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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->buttonOpen = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->buttonOpen);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBoxD);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->buttonShort);
			this->groupBox1->Controls->Add(this->buttonTall);
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
			this->groupBox1->Text = L"Данные";
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->Location = System::Drawing::Point(215, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 27);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Записать в файл";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(31, 223);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 27);
			this->textBox3->TabIndex = 31;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(176, 508);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 59);
			this->button3->TabIndex = 30;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(177, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 59);
			this->button2->TabIndex = 29;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBoxD
			// 
			this->textBoxD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxD->Location = System::Drawing::Point(297, 155);
			this->textBoxD->Name = L"textBoxD";
			this->textBoxD->Size = System::Drawing::Size(42, 27);
			this->textBoxD->TabIndex = 28;
			this->textBoxD->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(273, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 20);
			this->label6->TabIndex = 27;
			this->label6->Text = L"d";
			// 
			// buttonShort
			// 
			this->buttonShort->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonShort.Image")));
			this->buttonShort->Location = System::Drawing::Point(47, 508);
			this->buttonShort->Name = L"buttonShort";
			this->buttonShort->Size = System::Drawing::Size(59, 59);
			this->buttonShort->TabIndex = 26;
			this->buttonShort->UseVisualStyleBackColor = true;
			this->buttonShort->Click += gcnew System::EventHandler(this, &MyForm::buttonShort_Click);
			// 
			// buttonTall
			// 
			this->buttonTall->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonTall.Image")));
			this->buttonTall->Location = System::Drawing::Point(47, 443);
			this->buttonTall->Name = L"buttonTall";
			this->buttonTall->Size = System::Drawing::Size(59, 59);
			this->buttonTall->TabIndex = 25;
			this->buttonTall->UseVisualStyleBackColor = true;
			this->buttonTall->Click += gcnew System::EventHandler(this, &MyForm::buttonTall_Click);
			// 
			// buttonL
			// 
			this->buttonL->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonL.Image")));
			this->buttonL->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->buttonL->Location = System::Drawing::Point(47, 313);
			this->buttonL->Name = L"buttonL";
			this->buttonL->Size = System::Drawing::Size(59, 59);
			this->buttonL->TabIndex = 24;
			this->buttonL->Text = L"L";
			this->buttonL->UseVisualStyleBackColor = true;
			this->buttonL->Click += gcnew System::EventHandler(this, &MyForm::buttonL_Click);
			// 
			// buttonR
			// 
			this->buttonR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonR.Image")));
			this->buttonR->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->buttonR->Location = System::Drawing::Point(176, 313);
			this->buttonR->Name = L"buttonR";
			this->buttonR->Size = System::Drawing::Size(59, 59);
			this->buttonR->TabIndex = 23;
			this->buttonR->Text = L"R";
			this->buttonR->UseVisualStyleBackColor = true;
			this->buttonR->Click += gcnew System::EventHandler(this, &MyForm::buttonR_Click);
			// 
			// textBoxB
			// 
			this->textBoxB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxB->Location = System::Drawing::Point(215, 155);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(42, 27);
			this->textBoxB->TabIndex = 22;
			this->textBoxB->Text = L"0";
			// 
			// textBoxA
			// 
			this->textBoxA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxA->Location = System::Drawing::Point(215, 124);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(42, 27);
			this->textBoxA->TabIndex = 21;
			this->textBoxA->Text = L"1";
			// 
			// textBoxC
			// 
			this->textBoxC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxC->Location = System::Drawing::Point(297, 123);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->Size = System::Drawing::Size(42, 27);
			this->textBoxC->TabIndex = 20;
			this->textBoxC->Text = L"0";
			// 
			// buttonLEFT
			// 
			this->buttonLEFT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonLEFT.Image")));
			this->buttonLEFT->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonLEFT->Location = System::Drawing::Point(47, 378);
			this->buttonLEFT->Name = L"buttonLEFT";
			this->buttonLEFT->Size = System::Drawing::Size(59, 59);
			this->buttonLEFT->TabIndex = 19;
			this->buttonLEFT->UseVisualStyleBackColor = true;
			this->buttonLEFT->Click += gcnew System::EventHandler(this, &MyForm::buttonLEFT_Click);
			// 
			// buttonRIGHT
			// 
			this->buttonRIGHT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRIGHT.Image")));
			this->buttonRIGHT->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonRIGHT->Location = System::Drawing::Point(176, 378);
			this->buttonRIGHT->Name = L"buttonRIGHT";
			this->buttonRIGHT->Size = System::Drawing::Size(59, 59);
			this->buttonRIGHT->TabIndex = 18;
			this->buttonRIGHT->UseVisualStyleBackColor = true;
			this->buttonRIGHT->Click += gcnew System::EventHandler(this, &MyForm::buttonRIGHT_Click);
			// 
			// buttonD
			// 
			this->buttonD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonD.Image")));
			this->buttonD->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonD->Location = System::Drawing::Point(112, 443);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(59, 59);
			this->buttonD->TabIndex = 17;
			this->buttonD->UseVisualStyleBackColor = true;
			this->buttonD->Click += gcnew System::EventHandler(this, &MyForm::buttonD_Click);
			// 
			// buttonUP
			// 
			this->buttonUP->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonUP.Image")));
			this->buttonUP->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonUP->Location = System::Drawing::Point(111, 313);
			this->buttonUP->Name = L"buttonUP";
			this->buttonUP->Size = System::Drawing::Size(59, 59);
			this->buttonUP->TabIndex = 16;
			this->buttonUP->UseVisualStyleBackColor = true;
			this->buttonUP->Click += gcnew System::EventHandler(this, &MyForm::buttonUP_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(64, 155);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 27);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"10";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(64, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 27);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"-10";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(111, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 59);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Рисо-вать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(273, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"c";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(191, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(191, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(28, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"До:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(28, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"От:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"y=ax+b", L"y=ax²+bx+c", L"y=asin(bx+c)+d", L"y=(√ax + b)+c" });
			this->comboBox1->Location = System::Drawing::Point(31, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(139, 28);
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
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// buttonOpen
			// 
			this->buttonOpen->Location = System::Drawing::Point(297, 333);
			this->buttonOpen->Name = L"buttonOpen";
			this->buttonOpen->Size = System::Drawing::Size(75, 23);
			this->buttonOpen->TabIndex = 33;
			this->buttonOpen->Text = L"открыть";
			this->buttonOpen->UseVisualStyleBackColor = true;
			this->buttonOpen->Click += gcnew System::EventHandler(this, &MyForm::buttonOpen_Click);
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
		float a, b, c, d;
		//String^ FileName = "";

		//
		//mainbuton
		//
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(comboBox1->SelectedIndex != -1 && textBox1->Text != "" && textBox2->Text != ""
			&& textBoxA->Text != "" && textBoxB->Text != "" && textBoxC->Text != "" && textBoxD->Text != "") {
			chart1->Series["Series1"]->Points->Clear();

			from = Convert::ToDouble(textBox1->Text);
			to = Convert::ToDouble(textBox2->Text);

			a = Convert::ToDouble(textBoxA->Text);
			b = Convert::ToDouble(textBoxB->Text);
			c = Convert::ToDouble(textBoxC->Text);
			d = Convert::ToDouble(textBoxC->Text);

			switch (comboBox1->SelectedIndex) {
			case 0:
				if (b >= 0)
					textBox3->Text = a + "x+" + b;
				else
					textBox3->Text = a + "x+" + b;

				for (float i = from; i < to; i += 0.1)
					chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
				break;
			case 1:
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
				if (c >= 0 && d >= 0)
					textBox3->Text = a + "sin(" + b + "x+" + c + ")+" + d;

				if(c < 0 && d >= 0 )
					textBox3->Text = a + "sin(" + b + "x" + c + ")+" + d;

				if(c >= 0 && d < 0)
					textBox3->Text = a + "sin(" + b + "x+" + c + ")" + d;
					
				if (c < 0 && d < 0)
					textBox3->Text = a + "sin(" + b + "x" + c + ")" + d;


				for (float i = from; i < to; i += 0.1)
					chart1->Series["Series1"]->Points->AddXY(i, (a * sin((b * i) + c) + d));
				break;
			case 3:
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
		else
			MessageBox::Show(this, "Возможно не все поля заполнены.\nПроверте данные и повторите попытку.", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
		//
		//upbutton
		//
private: System::Void buttonUP_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series1"]->Points->Clear();

		switch (comboBox1->SelectedIndex) {
		case 0:
			b++;
			if (b >= 0)
				textBox3->Text = a + "x+" + b;
			else
				textBox3->Text = a + "x+" + b;
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
			break;
		case 1:
			c++;
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
		//
		// downbotton
		// 
private: System::Void buttonD_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series1"]->Points->Clear();

		switch (comboBox1->SelectedIndex) {
		case 0:
			b--;
			if (b >= 0)
				textBox3->Text = a + "x+" + b;
			else
				textBox3->Text = a + "x+" + b;
			for (float i = from; i < to; i += 0.1)
				chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
			break;
		case 1:
			c--;
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
			d--;
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
			c--;
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
		//
		//leftbutton (turn)
		//
private: System::Void buttonL_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		a++;
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
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
		//
		//rightbutton (turn)
		//
private: System::Void buttonR_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		a--;
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
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
		//
		//rightbutton
		//
private: System::Void buttonRIGHT_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		if (a > 0)
			b--;
		else
			b++;

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
		c--;
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
		b--;
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
		//
		//leftbutton
		//
private: System::Void buttonLEFT_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		if (a > 0)
			b++;
		else
			b--;
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
		c++;
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
		b++;
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
		//
		//buttonSlim
		//
private: System::Void buttonShort_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		a++;
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
		b++;
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
		//
		//buttonFat
		//
private: System::Void buttonTall_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
		a--;
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
		b--;
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
	   //
	   //buttonTall
	   //
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
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
		a++;
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
		a++;
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
	   //
	   //buttonShort
	   //
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();

	switch (comboBox1->SelectedIndex) {
	case 0:
		if (b >= 0)
			textBox3->Text = a + "x+" + b;
		else
			textBox3->Text = a + "x+" + b;
		for (float i = from; i < to; i += 0.1)
			chart1->Series["Series1"]->Points->AddXY(i, ((a * i) + b));
		break;
	case 1:
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
		a--;
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
		a--;
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


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	StreamWriter^ f = gcnew StreamWriter("Result.txt", false);
	f->Write(textBox3->Text);
	f->Write("\n");
	f->Close();
	MessageBox::Show(this, "Запись в файл выполнена", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
}

private: System::Void buttonOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("Result.txt");
}
};
}
