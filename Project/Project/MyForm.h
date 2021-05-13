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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownA;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownC;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownB;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownC = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownB = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownA = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->numericUpDownC);
			this->groupBox1->Controls->Add(this->numericUpDownB);
			this->groupBox1->Controls->Add(this->numericUpDownA);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
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
			// numericUpDownC
			// 
			this->numericUpDownC->Location = System::Drawing::Point(91, 325);
			this->numericUpDownC->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDownC->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDownC->Name = L"numericUpDownC";
			this->numericUpDownC->Size = System::Drawing::Size(120, 22);
			this->numericUpDownC->TabIndex = 15;
			// 
			// numericUpDownB
			// 
			this->numericUpDownB->Location = System::Drawing::Point(91, 294);
			this->numericUpDownB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDownB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDownB->Name = L"numericUpDownB";
			this->numericUpDownB->Size = System::Drawing::Size(120, 22);
			this->numericUpDownB->TabIndex = 14;
			// 
			// numericUpDownA
			// 
			this->numericUpDownA->Location = System::Drawing::Point(91, 263);
			this->numericUpDownA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDownA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDownA->Name = L"numericUpDownA";
			this->numericUpDownA->Size = System::Drawing::Size(120, 22);
			this->numericUpDownA->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 166);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(108, 447);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->EndInit();
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

			
			a = Convert::ToDouble(numericUpDownA->Text);
			b = Convert::ToDouble(numericUpDownB->Text);
			c = Convert::ToDouble(numericUpDownC->Text);

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

};
}
