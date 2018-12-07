#pragma once
#include "Header.h"
#include "match.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace naformah8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for fanat
	/// </summary>
	public ref class fanat : public System::Windows::Forms::Form
	{
	public:
		fanat(void)
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
		~fanat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(fanat::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(287, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Переглянути інформацію про турнір";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &fanat::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(287, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Купити білет";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &fanat::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 165);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(287, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Подивитись гру";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &fanat::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(351, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(351, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(352, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(351, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(413, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 30);
			this->textBox1->TabIndex = 7;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &fanat::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(423, 144);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 37);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Купити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &fanat::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(556, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 23);
			this->label5->TabIndex = 9;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &fanat::label5_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(575, 269);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 33);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Вихід";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &fanat::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(351, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 23);
			this->label6->TabIndex = 11;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-5, -5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(755, 346);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// fanat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 340);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
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
			this->Name = L"fanat";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"fanat";
			this->Load += gcnew System::EventHandler(this, &fanat::fanat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Tournament *tournament = new Tournament;
		Fan *fan = new Fan;
		FCteam *fcteam = new FCteam;
		bool ticket = false;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Visible = false;
		label5->Visible = false;
		button4->Visible = false;
		if (label1->Visible == false)
		{
			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			label6->Visible = true;
			tournament = tournament->getDataOfTournament(tournament);
			System::String^ str = gcnew System::String(tournament->nameOfTournament.c_str());
			label1->Text = "Назва турніру: " + str;
			System::String^ strtmp = gcnew System::String(tournament->day.c_str());
			System::String^ strtmp1 = gcnew System::String(tournament->month.c_str());
			System::String^ strtmp2 = gcnew System::String(tournament->year.c_str());
			label2->Text = "Дата: " + strtmp + " " + strtmp1 + " " + strtmp2;
			strtmp = gcnew System::String(tournament->place.c_str());
			label3->Text = "Місце: " + strtmp;
			fcteam = fcteam->showRegisteredTeams();
			strtmp = gcnew System::String(fcteam[0].nameOfTeam.c_str());
			strtmp1 = gcnew System::String(fcteam[1].nameOfTeam.c_str());
			label4->Text = "Зареєстровані команди: ";
			label6->Text = strtmp + " vs " + strtmp1;
		}
		else
		{
			label1->Visible = false;
			label2->Visible = false;
			label3->Visible = false;
			label5->Visible = false;
			label4->Visible = false;
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label6->Visible = false;
	label5->Visible = false;
	if (ticket == false)
	{
		label2->Visible = true;
		label5->Visible = true;
		button4->Visible = true;
		textBox1->Visible = true;
		label2->Text = "Введіть кількість білетів:";
	}
	else
	{
		MessageBox::Show("У вас вже є білет!");
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label6->Visible = false;
	label5->Visible = false;
	label4->Visible = false;
	label5->Visible = false;
	textBox1->Visible = false;
	button4->Visible = false;
	if (ticket == true)
	{
		ticket = false;
		match ^ form = gcnew match();
		form->Text = "Гра";
		form->ShowDialog();
	}
	else
	{
		MessageBox::Show("Спочатку купіть білет!");
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	if (textBox1->Text != "")
	{
		tournament->numOfFans = Convert::ToInt32(textBox1->Text);
		MessageBox::Show("Вітаю! Ви купили Білет!");
		ticket = true;
		label2->Visible = false;
		button4->Visible = false;
		textBox1->Visible = false;
		label5->Visible = false;
		textBox1->Text = "";
	}
	else
	{
		MessageBox::Show("Введіть кількість білетів!");
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "")
	{
		label5->Text = "Ціна: " + Convert::ToInt32(textBox1->Text) * 7 + "$";
	}
	else
	{
		label5->Text = "Ціна: 0$";
	}
}
private: System::Void fanat_Load(System::Object^  sender, System::EventArgs^  e) {
	label5->Text = "";
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
