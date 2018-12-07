#pragma once
#include "Header.h"
#include <msclr\marshal_cppstd.h>

namespace naformah8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for match
	/// </summary>
	public ref class match : public System::Windows::Forms::Form
	{
	public:
		match(void)
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
		~match()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(match::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(174, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(165, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Бали учасників:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &match::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(35, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(35, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(35, 242);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(35, 314);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(199, 95);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 23);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Гравці:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(182, 271);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 23);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Медсестри:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(193, 202);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 23);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Тренери:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(112, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(279, 55);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Вийти з Стадіону";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &match::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-6, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(533, 452);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// match
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 447);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"match";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"match";
			this->Load += gcnew System::EventHandler(this, &match::match_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Tournament *tournament = new Tournament;
		Fan *fan = new Fan;
		FCteam *fcteam = new FCteam;

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void match_Load(System::Object^  sender, System::EventArgs^  e) {
	fcteam = fcteam->showRegisteredTeams();
	fcteam[0].coach = new Coach;
	fcteam[1].coach = new Coach;
	fcteam[0].coach->hireCoach(fcteam[0].coach, 0);
	fcteam[1].coach->hireCoach(fcteam[1].coach, 1);
	fcteam[0].fcnurse = new FCnurse;
	fcteam[1].fcnurse = new FCnurse;
	fcteam[0].fcnurse = fcteam[0].fcnurse->hireNurse(fcteam[0].fcnurse, 1);
	fcteam[1].fcnurse = fcteam[1].fcnurse->hireNurse(fcteam[1].fcnurse, 2);

	tournament->playGame(fcteam);
	System::String^ str1 = gcnew System::String(fcteam[0].nameOfTeam.c_str());
	System::String^ str2 = gcnew System::String(fcteam[1].nameOfTeam.c_str());
	label1->Text = "Гра:    " + str1 + "                      vs                      " + str2;
	if (fcteam[0].getWin() == true)
	{
		label2->Text = str1 + " Виграла!";
	}
	else
	{
		label2->Text = str2 + " Виграла!";
	}
	str1 = gcnew System::String((fcteam[0].player[0].name + " " + fcteam[0].player[0].surname).c_str());
	str2 = gcnew System::String((fcteam[1].player[0].name + " " + fcteam[1].player[0].surname).c_str());
	label4->Text = str1 + ": " + fcteam[0].player[0].showPoints() + "                       " + str2 + ": " + fcteam[1].player[0].showPoints();
	str1 = gcnew System::String((fcteam[0].player[1].name + " " + fcteam[0].player[1].surname).c_str());
	str2 = gcnew System::String((fcteam[1].player[1].name + " " + fcteam[1].player[1].surname).c_str());
	label5->Text = str1 + ": " + fcteam[0].player[1].showPoints() + "                       " + str2 + ": " + fcteam[1].player[1].showPoints();
	str1 = gcnew System::String((fcteam[0].player[2].name + " " + fcteam[0].player[2].surname).c_str());
	str2 = gcnew System::String((fcteam[1].player[2].name + " " + fcteam[1].player[2].surname).c_str());
	label6->Text = str1 + ": " + fcteam[0].player[2].showPoints() + "                       " + str2 + ": " + fcteam[1].player[2].showPoints();
	str1 = gcnew System::String((fcteam[0].coach->name + " " + fcteam[0].coach->surname).c_str());
	str2 = gcnew System::String((fcteam[1].coach->name + " " + fcteam[1].coach->surname).c_str());
	label7->Text = str1 + ": " + fcteam[0].coach->showPoints() + "                       " + str2 + ": " + fcteam[1].coach->showPoints();
	str1 = gcnew System::String((fcteam[0].fcnurse->name + " " + fcteam[0].fcnurse->surname).c_str());
	str2 = gcnew System::String((fcteam[1].fcnurse->name + " " + fcteam[1].fcnurse->surname).c_str());
	label8->Text = str1 + ": " + fcteam[0].fcnurse->showPoints() + "              " + str2 + ": " + fcteam[1].fcnurse->showPoints();

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
