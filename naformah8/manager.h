#pragma once
#include <msclr\marshal_cppstd.h>
#include "Header.h"


namespace naformah8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for manager
	/// </summary>
	public ref class manager : public System::Windows::Forms::Form
	{
	public:
		manager(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~manager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(manager::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(29, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Дата турніру";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &manager::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(467, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Реєстрація";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &manager::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(477, 387);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Вихід";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &manager::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(58, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Назва турніру:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(58, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Місяць:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(63, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"День:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(63, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Рік:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(63, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 23);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Місце:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(218, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 30);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &manager::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(218, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(273, 30);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &manager::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(218, 187);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(273, 30);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &manager::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(218, 227);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(273, 30);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &manager::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(218, 270);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(273, 30);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &manager::textBox5_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(292, 328);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 39);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Зберегти";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &manager::button4_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Location = System::Drawing::Point(49, 81);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(595, 300);
			this->panel1->TabIndex = 14;
			this->panel1->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(336, 130);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(141, 31);
			this->comboBox2->TabIndex = 16;
			this->comboBox2->Text = L"Виберіть команду";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &manager::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(78, 130);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(141, 31);
			this->comboBox1->TabIndex = 15;
			this->comboBox1->Text = L"Виберіть команду";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &manager::comboBox1_SelectedIndexChanged);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(190, 199);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Зареєструвати";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &manager::button5_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(271, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 23);
			this->label10->TabIndex = 4;
			this->label10->Text = L"vs";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(79, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(395, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Виберіть команди для наступного матчу:";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(247, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(189, 50);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Команди";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &manager::button6_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox12);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Location = System::Drawing::Point(49, 81);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(604, 313);
			this->panel2->TabIndex = 16;
			this->panel2->Visible = false;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(268, 268);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(137, 35);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Додати!";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &manager::button9_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(248, 212);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 23);
			this->label12->TabIndex = 16;
			this->label12->Text = L"label12";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(248, 169);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 23);
			this->label11->TabIndex = 15;
			this->label11->Text = L"label11";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(248, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 23);
			this->label9->TabIndex = 14;
			this->label9->Text = L"label9";
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(378, 13);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(149, 38);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Переглянути";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &manager::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(68, 13);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(149, 38);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Додати";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &manager::button7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(70, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 23);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Гравці:";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(335, 222);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(135, 30);
			this->textBox12->TabIndex = 8;
			this->textBox12->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(335, 176);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(135, 30);
			this->textBox11->TabIndex = 7;
			this->textBox11->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(180, 176);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(135, 30);
			this->textBox10->TabIndex = 6;
			this->textBox10->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(180, 222);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(135, 30);
			this->textBox9->TabIndex = 5;
			this->textBox9->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(332, 123);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(138, 30);
			this->textBox8->TabIndex = 4;
			this->textBox8->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(180, 123);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(135, 30);
			this->textBox7->TabIndex = 3;
			this->textBox7->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(252, 68);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(162, 30);
			this->textBox6->TabIndex = 2;
			this->textBox6->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(252, 67);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(162, 31);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->Text = L"Виберіть команду...";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &manager::comboBox3_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(70, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 23);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Список команд:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-5, -5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(695, 456);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(616, 327);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(607, 313);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 447);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"manager";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"manager";
			this->Load += gcnew System::EventHandler(this, &manager::manager_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Tournament *tournament = new Tournament;
		Fan *fan = new Fan;
		FCteam *fcteam = new FCteam;
		int vsogo;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = false;
		panel2->Visible = false;
		button2->Enabled = true;
		button6->Enabled = true;
		button1->Enabled = false;
	}
	private: System::Void manager_Load(System::Object^  sender, System::EventArgs^  e) {
		tournament = tournament->getDataOfTournament(tournament);
		System::String^ str = gcnew System::String(tournament->nameOfTournament.c_str());
		textBox1->Text = str;
		str = gcnew System::String(tournament->day.c_str());
		System::String^ str1 = gcnew System::String(tournament->month.c_str());
		System::String^ str2 = gcnew System::String(tournament->year.c_str());
		textBox2->Text = str;
		textBox3->Text = str1;
		textBox4->Text = str2;
		str = gcnew System::String(tournament->place.c_str());
		textBox5->Text = str;
		button4->Enabled = false;
	}
			 //zberegtu
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		button4->Enabled = false;
		tournament->setDataOfTournament(msclr::interop::marshal_as<std::string>(textBox2->Text), msclr::interop::marshal_as<std::string>(textBox3->Text), msclr::interop::marshal_as<std::string>(textBox4->Text), msclr::interop::marshal_as<std::string>(textBox5->Text));
		MessageBox::Show("Інформація збережена успішно!");
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox5->Modified)
		button4->Enabled = true;
	else
		button4->Enabled = false;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Modified)
		button4->Enabled = true;
	else
		button4->Enabled = false;
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox2->Modified)
		button4->Enabled = true;
	else
		button4->Enabled = false;
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox3->Modified)
		button4->Enabled = true;
	else
		button4->Enabled = false;
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox4->Modified)
		button4->Enabled = true;
	else
		button4->Enabled = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
	panel1->Visible = true;
	panel2->Visible = false;
	button2->Enabled = false;
	button6->Enabled = true;
	button1->Enabled = true;
	int i = 0;
	fcteam = fcteam->showAllTeams(fcteam, i);
	vsogo = i;
	for (int j = 0; j < i; j++)
	{
		comboBox1->Items->Add(msclr::interop::marshal_as<System::String^>(fcteam[j].nameOfTeam));
		comboBox2->Items->Add(msclr::interop::marshal_as<System::String^>(fcteam[j].nameOfTeam));
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	fcteam->registerTeam(msclr::interop::marshal_as<std::string>(comboBox1->Text), msclr::interop::marshal_as<std::string>(comboBox2->Text));
	MessageBox::Show("Команди зареєстровані успішно!");
	button5->Enabled = false;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text != "Виберіть команду" && comboBox2->Text != "Виберіть команду")
		button5->Enabled = true;
	else
		button5->Enabled = false;
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->Text != "Виберіть команду" && comboBox1->Text != "Виберіть команду")
		button5->Enabled = true;
	else
		button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel1->Visible = false;
	button6->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
	label9->Text = "";
	label11->Text = "";
	label12->Text = "";
	comboBox3->Items->Clear();
	int i = 0;
	fcteam = fcteam->showAllTeams(fcteam, i);
	vsogo = i;
	for (int j = 0; j < i; j++)
	{
		comboBox3->Items->Add(msclr::interop::marshal_as<System::String^>(fcteam[j].nameOfTeam));
	}
	
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	button8->Enabled = false;
	button7->Enabled = true;
	label7->Visible = true;
	label8->Visible = true;
	button9->Visible = false;
	label9->Visible = true;
	label11->Visible = true;
	label12->Visible = true;
	comboBox3->Visible = true;
	textBox6->Visible = false;
	textBox7->Visible = false;
	textBox8->Visible = false;
	textBox9->Visible = false;
	textBox10->Visible = false;
	textBox11->Visible = false;
	textBox12->Visible = false;
	label7->Text = "Список команд:";

	comboBox3->Items->Clear();
	int i = 0;
	fcteam = fcteam->showAllTeams(fcteam, i);
	vsogo = i;
	for (int j = 0; j < i; j++)
	{
		comboBox3->Items->Add(msclr::interop::marshal_as<System::String^>(fcteam[j].nameOfTeam));
	}
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	label9->Text = msclr::interop::marshal_as<System::String^>(fcteam[comboBox3->SelectedIndex].player[0].name) + " " + msclr::interop::marshal_as<System::String^>(fcteam[comboBox3->SelectedIndex].player[0].surname);
	label11->Text = msclr::interop::marshal_as<System::String^>(fcteam[comboBox3->SelectedIndex].player[1].name) + " " + msclr::interop::marshal_as<System::String^>(fcteam[comboBox3->SelectedIndex].player[1].surname);
	label12->Text = msclr::interop::marshal_as<System::String^>(fcteam[comboBox3->SelectedIndex].player[2].name) + " " + msclr::interop::marshal_as<System::String^>(fcteam[comboBox3->SelectedIndex].player[2].surname);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	button8->Enabled = true;
	button7->Enabled = false;
	label9->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	comboBox3->Visible = false;
	button9->Visible = true;
	textBox6->Visible = true;
	textBox7->Visible = true;
	textBox8->Visible = true;
	textBox9->Visible = true;
	textBox10->Visible = true;
	textBox11->Visible = true;
	textBox12->Visible = true;
	label7->Text = "Назва команди: ";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "")
	{
		FCteam fctm;
		fctm.player = new Player[3];
		fctm.nameOfTeam = msclr::interop::marshal_as<std::string>(textBox6->Text);
		fctm.player[0].name = msclr::interop::marshal_as<std::string>(textBox7->Text);
		fctm.player[0].surname = msclr::interop::marshal_as<std::string>(textBox8->Text);
		fctm.player[1].name = msclr::interop::marshal_as<std::string>(textBox10->Text);
		fctm.player[1].surname = msclr::interop::marshal_as<std::string>(textBox11->Text);
		fctm.player[2].name = msclr::interop::marshal_as<std::string>(textBox9->Text);
		fctm.player[2].surname = msclr::interop::marshal_as<std::string>(textBox12->Text);
		fctm.addTeams();
		MessageBox::Show("Команда додана успішно!");
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		textBox11->Text = "";
		textBox12->Text = "";
	}
	else
	{
		MessageBox::Show("Заповніть усі поля!");
	}
}
};
}
