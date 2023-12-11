#pragma once

#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <sstream>

namespace test1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	#include "Function.h";

	bool check = true;

	vector <Ocean> ocean(10);
	vector <Sea> sea(100);
	vector <Lake> lake(100);
	vector <River> river(100);
	
	Containers con;

	Ocean tihiy = Ocean("Тихий океан", 178684000, 710360000, 11022, 3984, true, 53);
	Ocean indian = Ocean("Индийский океан", 76174000, 282650000, 7729, 3711, true, 20);
	Sea black = Sea("Черное море", 422000, 555000, 2210, 1240, true, "Атлантический океан",
		"Россия, Украина, Румыния, Болгария, Турция, Грузия, Абхазия",
		"Дунай, Днепр, Днестр", 3400);
	Sea red = Sea("Красное море", 438000, 233000, 2211, 490, true, "Индийский океан",
		"Египет, Судан, Джибути, Эритрей, Йемен, Израиль, Иордания",
		"None", 4600);
	Lake baikal = Lake("Озеро Байкал", 31722, 23615, 1642, 744, false, "Тектоническое",
		"Россия", 456);
	Lake vika = Lake("Озеро Виктория", 68000, 2760, 80, 40, false, "Тектоническое",
		"Танзания, Кения, Уганда", 1134);
	River nil = River("Река Нил", 3349000, NULL, 11, 7, false, "Дождевое питание", "Озеро Виктория",
		"Средиземное море", 1134, 6854);
	River amazon = River("Река Амазонка", 7180000, 7280, 100, 50, false, "Дождевое питание",
		"Реки Укаяли и Мараньон", "Атлантический океан", 110, 6500);

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
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
	private: System::Windows::Forms::RadioButton^ radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private:
		System::ComponentModel::Container ^cont;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox18;


	private:
		

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(899, 38);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 29);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Океан";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(899, 73);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 29);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Море";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(899, 108);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(92, 29);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Озеро";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(899, 143);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(76, 29);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Река";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(855, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Выберите тип водоема";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 360);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 40);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Перечень водоемов (в порядке убывания)\nпо их площади поверхности:";
			// 
			// listBox1
			// 
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(11, 409);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(366, 275);
			this->listBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(511, 360);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(218, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Разбиение водоемов на:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(461, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Соленые";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(693, 386);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Пресные";
			// 
			// listBox2
			// 
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 25;
			this->listBox2->Location = System::Drawing::Point(395, 409);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(217, 275);
			this->listBox2->TabIndex = 10;
			// 
			// listBox3
			// 
			this->listBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 25;
			this->listBox3->Location = System::Drawing::Point(628, 409);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(217, 275);
			this->listBox3->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(854, 381);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(248, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Самый глубокий водоем:";
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 25;
			this->listBox4->Location = System::Drawing::Point(859, 409);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(243, 29);
			this->listBox4->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(859, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 57);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(986, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 57);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Результат";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 27);
			this->textBox1->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Название:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 20);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Площадь:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 27);
			this->textBox2->TabIndex = 19;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Объем:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 27);
			this->textBox3->TabIndex = 21;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(206, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(159, 20);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Средняя глубина:";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(206, 93);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(174, 27);
			this->textBox5->TabIndex = 25;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(206, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(131, 20);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Макс. глубина:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(206, 29);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(174, 27);
			this->textBox6->TabIndex = 23;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(206, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 27;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(206, 143);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 47);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(114, 21);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(104, 24);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Пресный";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(4, 21);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(104, 24);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Солёный";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(442, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(199, 40);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Процент объема воды\nот мирового океана:";
			this->label13->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(446, 52);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 27);
			this->textBox4->TabIndex = 29;
			this->textBox4->Visible = false;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(442, 73);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(155, 40);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Пренадлежность\nк океану:";
			this->label14->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(446, 116);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(174, 27);
			this->textBox7->TabIndex = 31;
			this->textBox7->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(12, 214);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(237, 20);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Страны, которые омывает:";
			this->label15->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(16, 237);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(407, 27);
			this->textBox8->TabIndex = 33;
			this->textBox8->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(12, 278);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(159, 20);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Впадающие реки:";
			this->label16->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(16, 301);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(407, 27);
			this->textBox9->TabIndex = 35;
			this->textBox9->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(442, 9);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(215, 20);
			this->label17->TabIndex = 38;
			this->label17->Text = L"Длина береговой линии:";
			this->label17->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(442, 29);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(174, 27);
			this->textBox10->TabIndex = 37;
			this->textBox10->Visible = false;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(442, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(148, 20);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Происхождение:";
			this->label18->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(446, 32);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(163, 27);
			this->textBox11->TabIndex = 39;
			this->textBox11->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(442, 72);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 20);
			this->label19->TabIndex = 42;
			this->label19->Text = L"Страна:";
			this->label19->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(446, 93);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(163, 27);
			this->textBox12->TabIndex = 41;
			this->textBox12->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(442, 140);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(131, 40);
			this->label20->TabIndex = 44;
			this->label20->Text = L"Высота над\nуровнем моря:";
			this->label20->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(446, 183);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(163, 27);
			this->textBox13->TabIndex = 43;
			this->textBox13->Visible = false;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox13_KeyPress);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(12, 214);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(63, 20);
			this->label21->TabIndex = 46;
			this->label21->Text = L"Исток:";
			this->label21->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(16, 237);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(170, 27);
			this->textBox14->TabIndex = 45;
			this->textBox14->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(12, 278);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(64, 20);
			this->label22->TabIndex = 48;
			this->label22->Text = L"Устье:";
			this->label22->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(16, 301);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(170, 27);
			this->textBox15->TabIndex = 47;
			this->textBox15->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(206, 214);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(140, 20);
			this->label23->TabIndex = 50;
			this->label23->Text = L"Высота истока:";
			this->label23->Visible = false;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(210, 237);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(170, 27);
			this->textBox16->TabIndex = 49;
			this->textBox16->Visible = false;
			this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox16_KeyPress);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(206, 278);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(111, 20);
			this->label24->TabIndex = 52;
			this->label24->Text = L"Длина реки:";
			this->label24->Visible = false;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(210, 301);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(170, 27);
			this->textBox17->TabIndex = 51;
			this->textBox17->Visible = false;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox17_KeyPress);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(442, 9);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(87, 20);
			this->label25->TabIndex = 54;
			this->label25->Text = L"Питание:";
			this->label25->Visible = false;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(442, 29);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(174, 27);
			this->textBox18->TabIndex = 53;
			this->textBox18->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 709);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox4);
			this->Name = L"MyForm";
			this->Text = L"Пз_5 в14/3";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Очиста заполненных строк при смене типа водоема
	private: void deleteAll() {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
		textBox10->Clear();
		textBox11->Clear();
		textBox12->Clear();
		textBox13->Clear();
		textBox14->Clear();
		textBox15->Clear();
		textBox16->Clear();
		textBox17->Clear();
		textBox18->Clear();
		radioButton5->Checked = false;
		radioButton6->Checked = false;
	}

	// Функции radioButton
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			deleteAll();
			label13->Visible = true;
			textBox4->Visible = true;
		}
		else {
			label13->Visible = false;
			textBox4->Visible = false;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked) {
			deleteAll();
			label17->Visible = true;
			label14->Visible = true;
			label15->Visible = true;
			label16->Visible = true;
			textBox10->Visible = true;
			textBox7->Visible = true;
			textBox8->Visible = true;
			textBox9->Visible = true;
		}
		else {
			label17->Visible = false;
			label14->Visible = false;
			label15->Visible = false;
			label16->Visible = false;
			textBox10->Visible = false;
			textBox7->Visible = false;
			textBox8->Visible = false;
			textBox9->Visible = false;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton3->Checked) {
			deleteAll();
			label18->Visible = true;
			label19->Visible = true;
			label20->Visible = true;
			textBox11->Visible = true;
			textBox12->Visible = true;
			textBox13->Visible = true;
		}
		else {
			label18->Visible = false;
			label19->Visible = false;
			label20->Visible = false;
			textBox11->Visible = false;
			textBox12->Visible = false;
			textBox13->Visible = false;
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton4->Checked) {
			deleteAll();
			label21->Visible = true;
			label22->Visible = true;
			label23->Visible = true;
			label24->Visible = true;
			label25->Visible = true;
			textBox14->Visible = true;
			textBox15->Visible = true;
			textBox16->Visible = true;
			textBox17->Visible = true;
			textBox18->Visible = true;
		}
		else {
			label21->Visible = false;
			label22->Visible = false;
			label23->Visible = false;
			label24->Visible = false;
			label25->Visible = false;
			textBox14->Visible = false;
			textBox15->Visible = false;
			textBox16->Visible = false;
			textBox17->Visible = false;
			textBox18->Visible = false;
		}
	}
	
	// Функция для создания объекта океана
	private: void oceanData(vector <Ocean> &ocean) {
		bool sal;
		if (radioButton5->Checked) {
			sal = true;
		}
		if (radioButton6->Checked) {
			sal = false;
		}
		msclr::interop::marshal_context context;
		string name = context.marshal_as<string>(textBox1->Text);
		int square = Int32::Parse(textBox2->Text);
		int volume = Int32::Parse(textBox3->Text);
		int maxDepth = Int32::Parse(textBox6->Text);
		int midDepth = Int32::Parse(textBox5->Text);

		double worldVolume = static_cast<IConvertible^>(textBox4->Text)->ToDouble(System::Globalization::CultureInfo::CurrentCulture);

		ocean.push_back(Ocean(name, square, volume, maxDepth, midDepth, sal, worldVolume));
		con.addWater(&ocean[ocean.size() - 1]);
		deleteAll();
	}

	// Функция для создания объекта моря
	private: void seaData(vector <Sea>& sea) {
		bool sal;
		if (radioButton5->Checked) {
			sal = true;
		}
		if (radioButton6->Checked) {
			sal = false;
		}
		msclr::interop::marshal_context context;
		string name = context.marshal_as<string>(textBox1->Text);
		int square = Int32::Parse(textBox2->Text);
		int volume = Int32::Parse(textBox3->Text);
		int maxDepth = Int32::Parse(textBox6->Text);
		int midDepth = Int32::Parse(textBox5->Text);

		string oceanClass = context.marshal_as<string>(textBox7->Text);
		string borderCountry = context.marshal_as<string>(textBox8->Text);
		string flowingRivers = context.marshal_as<string>(textBox9->Text);
		int  coastline = Int32::Parse(textBox10->Text);

		sea.push_back(Sea(name, square, volume, maxDepth, midDepth, sal, oceanClass, borderCountry, flowingRivers, coastline));
		con.addWater(&sea[sea.size() - 1]);
		deleteAll();
	}

	// Функция для создания объекта озеро
	private: void lakeData(vector <Lake>& lake) {
		bool sal;
		if (radioButton5->Checked) {
			sal = true;
		}
		if (radioButton6->Checked) {
			sal = false;
		}
		msclr::interop::marshal_context context;
		string name = context.marshal_as<string>(textBox1->Text);
		int square = Int32::Parse(textBox2->Text);
		int volume = Int32::Parse(textBox3->Text);
		int maxDepth = Int32::Parse(textBox6->Text);
		int midDepth = Int32::Parse(textBox5->Text);

		string origin = context.marshal_as<string>(textBox11->Text);
		string country = context.marshal_as<string>(textBox12->Text);
		int heightSea = Int32::Parse(textBox13->Text);

		lake.push_back(Lake(name, square, volume, maxDepth, midDepth, sal, origin, country, heightSea));
		con.addWater(&lake[lake.size() - 1]);
		deleteAll();
	}

	// Функция для создания объекта река
	private: void riverData(vector <River>& river) {
		bool sal;
		if (radioButton5->Checked) {
			sal = true;
		}
		if (radioButton6->Checked) {
			sal = false;
		}
		msclr::interop::marshal_context context;
		string name = context.marshal_as<string>(textBox1->Text);
		int square = Int32::Parse(textBox2->Text);
		int volume = Int32::Parse(textBox3->Text);
		int maxDepth = Int32::Parse(textBox6->Text);
		int midDepth = Int32::Parse(textBox5->Text);

		string supply = context.marshal_as<string>(textBox18->Text);
		string source = context.marshal_as<string>(textBox14->Text);
		string mouth = context.marshal_as<string>(textBox15->Text);
		int heightSource = Int32::Parse(textBox16->Text);
		int lenght = Int32::Parse(textBox17->Text);

		river.push_back(River(name, square, volume, maxDepth, midDepth, sal, supply, source, mouth, heightSource, lenght));
		con.addWater(&river[river.size() - 1]);
		deleteAll();
	}

	// Функции Button (Кнопок)
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (radioButton1->Checked) {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" ||
				textBox5->Text == "" || textBox6->Text == "" || (radioButton5->Checked == false && radioButton6->Checked == false)) {
				MessageBox::Show("Пожалуйста, заполните все поля!",
					"ERROR", 
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			else { 
				oceanData(ocean);
				MessageBox::Show("Водоем добавлен успешно!",
					"TRUE",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}

		if (radioButton2->Checked) {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox7->Text == "" ||
				textBox5->Text == "" || textBox6->Text == "" || textBox8->Text == "" || textBox9->Text == "" || 
				textBox10->Text == "" || (radioButton5->Checked == false && radioButton6->Checked == false)) {
				MessageBox::Show("Пожалуйста, заполните все поля!",
					"ERROR",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			else {
				seaData(sea);
				MessageBox::Show("Водоем добавлен успешно!",
					"TRUE",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}

		if (radioButton3->Checked) {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox11->Text == "" ||
				textBox12->Text == "" || textBox13->Text == "" || textBox5->Text == "" || textBox6->Text == "" ||
				(radioButton5->Checked == false && radioButton6->Checked == false)) {
				MessageBox::Show("Пожалуйста, заполните все поля!",
					"ERROR",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			else { 
				lakeData(lake);
				MessageBox::Show("Водоем добавлен успешно!",
					"TRUE",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}

		if (radioButton4->Checked) {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox14->Text == "" ||
				textBox15->Text == "" || textBox16->Text == "" || textBox17->Text == "" || textBox18->Text == "" ||
				textBox5->Text == "" || textBox6->Text == "" || (radioButton5->Checked == false && radioButton6->Checked == false)) {
				MessageBox::Show("Пожалуйста, заполните все поля!",
					"ERROR",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			else {
				riverData(river);
				MessageBox::Show("Водоем добавлен успешно!",
					"TRUE",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		listBox4->Items->Clear();

		// Тест водоемы
		if(check == true) {
			con.addWater(&tihiy);
			con.addWater(&indian);
			con.addWater(&black);
			con.addWater(&red);
			con.addWater(&baikal);
			con.addWater(&vika);
			con.addWater(&nil);
			con.addWater(&amazon);
		}
		check = false;

		vector <string> allsa;
		vector <string> allfr;
		string maxDep;

		con.sortWaterSquare();
		con.sortSalinity(allsa, allfr);
		con.maxDepthWater(maxDep);
		listBox4->Items->Add(gcnew String(maxDep.c_str()));

		for (int i = 0; i < con.waterCounter; i++) {
			listBox1->Items->Add(gcnew String((con.arrayWater[i]->name + ": " + to_string(con.arrayWater[i]->square) + " km^2").c_str()));
		}

		for (int k = 0; k < allsa.size(); k++) {
			listBox2->Items->Add(gcnew String(allsa[k].c_str()));
		}

		for (int k = 0; k < allfr.size(); k++) {
			listBox3->Items->Add(gcnew String(allfr[k].c_str()));
		}
	}

	private: System::Void textBox2_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox16_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox17_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') e->Handled = true;
	}
};
}
