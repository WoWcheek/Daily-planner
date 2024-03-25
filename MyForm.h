#pragma once
#include <fstream>
#include <filesystem>
#include "MyAdd.h"
#include "Service.h"
#include "EditProfile.h"
#include "Day.cpp"
#using <mscorlib.dll>

namespace CLR {
	using namespace std;
	using namespace System;
	using namespace System::IO;
	using namespace System::Data;
	using namespace System::Windows;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;

	public ref class MyForm : public Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel8->Visible = false;
			toolTip1->SetToolTip(pictureBox4, "Edit profile");
			toolTip1->SetToolTip(button6, "Save current data");
			toolTip1->SetToolTip(button5, "Back to sign in menu");
			InitializeDates();
			InitializeDays();
			InitializeUncheckedTBoxes();
			InitializeLBoxes();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		Void InitializeDates() {
			dates->Add(date1);
			dates->Add(date2);
			dates->Add(date3);
			dates->Add(date4);
			dates->Add(date5);
			dates->Add(date6);
			dates->Add(date7);
		}
		Void InitializeDays() {
			days->Add(day1);
			days->Add(day2);
			days->Add(day3);
			days->Add(day4);
			days->Add(day5);
			days->Add(day6);
			days->Add(day7);
		}
		Void InitializeUncheckedTBoxes() {
			uncheckedArr->Add(unchecked1);
			uncheckedArr->Add(unchecked2);
			uncheckedArr->Add(unchecked3);
			uncheckedArr->Add(unchecked4);
			uncheckedArr->Add(unchecked5);
			uncheckedArr->Add(unchecked6);
			uncheckedArr->Add(unchecked7);
		}
		Void InitializeLBoxes() {
			listboxes->Add(checkedListBox1);
			listboxes->Add(checkedListBox2);
			listboxes->Add(checkedListBox3);
			listboxes->Add(checkedListBox4);
			listboxes->Add(checkedListBox5);
			listboxes->Add(checkedListBox6);
			listboxes->Add(checkedListBox7);
		}

#pragma region Fields
		ToolTip^ toolTip1;
		
		ProgressBar^ progressBar2;
		ProgressBar^ progressBar3;
		ProgressBar^ progressBar4;
		ProgressBar^ progressBar5;

		PictureBox^ pictureBox1;
		PictureBox^ pictureBox2;
		PictureBox^ pictureBox4;
		PictureBox^ pictureBox3;

		Panel^ panel1;
		Panel^ panel2;
		Panel^ panel3;
		Panel^ panel4;
		Panel^ panel5;
		Panel^ panel6;
		Panel^ panel7;
		Panel^ panel8;
		Panel^ panel9;
		Panel^ panel10;
		Panel^ panel11;
		Panel^ panel12;
		Panel^ panel13;
		Panel^ panel14;
		Panel^ panel15;
		Panel^ panel16;
		Panel^ panel17;

		Forms::Label^ label1;
		Forms::Label^ label2;
		Forms::Label^ label3;
		Forms::Label^ label4;
		Forms::Label^ label5;
		Forms::Label^ label6;
		Forms::Label^ label7;
		Forms::Label^ label8;
		Forms::Label^ label9;
		Forms::Label^ label10;
		Forms::Label^ label11;
		Forms::Label^ label12;
		Forms::Label^ label13;
		Forms::Label^ label14;
		Forms::Label^ label15;
		Forms::Label^ label16;
		Forms::Label^ label17;
		Forms::Label^ label18;
		Forms::Label^ label19;
		Forms::Label^ label20;
		Forms::Label^ label21;
		Forms::Label^ label22;
		Forms::Label^ label23;
		Forms::Label^ label24;
		Forms::Label^ label25;
		Forms::Label^ label26;
		Forms::Label^ day1;
		Forms::Label^ day2;
		Forms::Label^ day3;
		Forms::Label^ day4;
		Forms::Label^ day5;
		Forms::Label^ day6;
		Forms::Label^ day7;
		Forms::Label^ date1;
		Forms::Label^ date2;
		Forms::Label^ date3;
		Forms::Label^ date4;
		Forms::Label^ date5;
		Forms::Label^ date6;
		Forms::Label^ date7;

		Button^ button1;
		Button^ button2;
		Button^ button3;
		Button^ button4;
		Button^ button5;
		Button^ button6;
		Button^ rem1;
		Button^ new1;
		Button^ rem2;
		Button^ new2;
		Button^ rem3;
		Button^ new3;
		Button^ rem4;
		Button^ new4;
		Button^ rem5;
		Button^ new5;
		Button^ rem6;
		Button^ new6;
		Button^ rem7;
		Button^ new7;

		TextBox^ textBox1;
		TextBox^ textBox2;
		TextBox^ textBox3;
		TextBox^ textBox4;
		TextBox^ unchecked1;
		TextBox^ unchecked2;
		TextBox^ unchecked3;
		TextBox^ unchecked4;
		TextBox^ unchecked5;
		TextBox^ unchecked6;
		TextBox^ unchecked7;
		TextBox^ textBoxOther;
		TextBox^ textBoxStudy;
		TextBox^ textBoxBusiness;
		TextBox^ textBoxHouseHold;

		CheckedListBox^ checkedListBox1;
		CheckedListBox^ checkedListBox2;
		CheckedListBox^ checkedListBox3;
		CheckedListBox^ checkedListBox4;
		CheckedListBox^ checkedListBox5;
		CheckedListBox^ checkedListBox6;
		CheckedListBox^ checkedListBox7;

		List<Day_^>^ list = gcnew List<Day_^>();
		List<Label^>^ days = gcnew List<Label^>();
		List<Label^>^ dates = gcnew List<Label^>();
		List<TextBox^>^ uncheckedArr = gcnew List<TextBox^>();
		List<CheckedListBox^>^ listboxes = gcnew List<CheckedListBox^>();

		IContainer^ components;
#pragma endregion

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBoxOther = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBusiness = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHouseHold = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStudy = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->unchecked7 = (gcnew System::Windows::Forms::TextBox());
			this->rem7 = (gcnew System::Windows::Forms::Button());
			this->new7 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox7 = (gcnew System::Windows::Forms::CheckedListBox());
			this->day7 = (gcnew System::Windows::Forms::Label());
			this->date7 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->unchecked6 = (gcnew System::Windows::Forms::TextBox());
			this->rem6 = (gcnew System::Windows::Forms::Button());
			this->new6 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox6 = (gcnew System::Windows::Forms::CheckedListBox());
			this->day6 = (gcnew System::Windows::Forms::Label());
			this->date6 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->unchecked5 = (gcnew System::Windows::Forms::TextBox());
			this->rem5 = (gcnew System::Windows::Forms::Button());
			this->new5 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->day5 = (gcnew System::Windows::Forms::Label());
			this->date5 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->unchecked4 = (gcnew System::Windows::Forms::TextBox());
			this->rem4 = (gcnew System::Windows::Forms::Button());
			this->new4 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->day4 = (gcnew System::Windows::Forms::Label());
			this->date4 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->unchecked3 = (gcnew System::Windows::Forms::TextBox());
			this->rem3 = (gcnew System::Windows::Forms::Button());
			this->new3 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->day3 = (gcnew System::Windows::Forms::Label());
			this->date3 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->unchecked2 = (gcnew System::Windows::Forms::TextBox());
			this->rem2 = (gcnew System::Windows::Forms::Button());
			this->new2 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->day2 = (gcnew System::Windows::Forms::Label());
			this->date2 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->unchecked1 = (gcnew System::Windows::Forms::TextBox());
			this->rem1 = (gcnew System::Windows::Forms::Button());
			this->new1 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->day1 = (gcnew System::Windows::Forms::Label());
			this->date1 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(22, 188);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(227, 34);
			this->progressBar2->TabIndex = 19;
			this->progressBar2->Value = 50;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(22, 264);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(227, 34);
			this->progressBar3->TabIndex = 20;
			this->progressBar3->Value = 50;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(22, 344);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(227, 36);
			this->progressBar4->TabIndex = 21;
			this->progressBar4->Value = 50;
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(24, 415);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(225, 36);
			this->progressBar5->TabIndex = 22;
			this->progressBar5->Value = 50;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(61, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(266, 247);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(61, 235);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(266, 194);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(22, 465);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(68, 64);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 33;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(162, 7);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(66, 64);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::UserEdit);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkCyan;
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(406, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(519, 549);
			this->panel1->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Location = System::Drawing::Point(58, 285);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(240, 39);
			this->panel6->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(5, 7);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(235, 29);
			this->textBox2->TabIndex = 0;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Location = System::Drawing::Point(58, 210);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(240, 39);
			this->panel4->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(5, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 29);
			this->textBox1->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->label10->Location = System::Drawing::Point(104, 400);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 21);
			this->label10->TabIndex = 11;
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(58, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 30);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(58, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 30);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Username";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(58, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Login);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(59, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(301, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sign in to your account to open your own \r\nDairy planner and get started";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 33.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(50, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 74);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(-2, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(409, 552);
			this->panel2->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->panel9);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->ForeColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(12, 48);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(388, 372);
			this->panel5->TabIndex = 6;
			this->panel5->Visible = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel9->Controls->Add(this->textBox4);
			this->panel9->Location = System::Drawing::Point(90, 122);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(194, 39);
			this->panel9->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(3, 7);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 29);
			this->textBox4->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->Controls->Add(this->textBox3);
			this->panel7->Location = System::Drawing::Point(90, 199);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(193, 39);
			this->panel7->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(3, 7);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 29);
			this->textBox3->TabIndex = 0;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 25, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(60, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(282, 57);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Registration";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(86, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.8F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(90, 249);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 40);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Create account";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Register);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(85, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 30);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(85, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 30);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Username";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(102, 426);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 42);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::cancelRegister);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(102, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 42);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::toRegister);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Location = System::Drawing::Point(15, 24);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(237, 79);
			this->panel3->TabIndex = 23;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(7, 24);
			this->label26->MaximumSize = System::Drawing::Size(148, 35);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(133, 35);
			this->label26->TabIndex = 18;
			this->label26->Text = L"Username";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::CadetBlue;
			this->panel8->Controls->Add(this->pictureBox3);
			this->panel8->Controls->Add(this->textBoxOther);
			this->panel8->Controls->Add(this->textBoxBusiness);
			this->panel8->Controls->Add(this->textBoxHouseHold);
			this->panel8->Controls->Add(this->textBoxStudy);
			this->panel8->Controls->Add(this->button6);
			this->panel8->Controls->Add(this->button5);
			this->panel8->Controls->Add(this->label12);
			this->panel8->Controls->Add(this->label3);
			this->panel8->Controls->Add(this->panel10);
			this->panel8->Controls->Add(this->panel3);
			this->panel8->Controls->Add(this->progressBar5);
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->progressBar4);
			this->panel8->Controls->Add(this->label18);
			this->panel8->Controls->Add(this->progressBar3);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Controls->Add(this->progressBar2);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Location = System::Drawing::Point(-2, 0);
			this->panel8->Margin = System::Windows::Forms::Padding(10);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(927, 542);
			this->panel8->TabIndex = 2;
			// 
			// textBoxOther
			// 
			this->textBoxOther->BackColor = System::Drawing::Color::CadetBlue;
			this->textBoxOther->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxOther->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOther->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxOther->Location = System::Drawing::Point(149, 387);
			this->textBoxOther->Name = L"textBoxOther";
			this->textBoxOther->ReadOnly = true;
			this->textBoxOther->Size = System::Drawing::Size(100, 23);
			this->textBoxOther->TabIndex = 32;
			this->textBoxOther->Text = L"0%";
			this->textBoxOther->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxBusiness
			// 
			this->textBoxBusiness->BackColor = System::Drawing::Color::CadetBlue;
			this->textBoxBusiness->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxBusiness->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxBusiness->ForeColor = System::Drawing::Color::LightGray;
			this->textBoxBusiness->Location = System::Drawing::Point(149, 318);
			this->textBoxBusiness->Name = L"textBoxBusiness";
			this->textBoxBusiness->ReadOnly = true;
			this->textBoxBusiness->Size = System::Drawing::Size(100, 23);
			this->textBoxBusiness->TabIndex = 31;
			this->textBoxBusiness->Text = L"0%";
			this->textBoxBusiness->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxHouseHold
			// 
			this->textBoxHouseHold->BackColor = System::Drawing::Color::CadetBlue;
			this->textBoxHouseHold->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxHouseHold->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxHouseHold->ForeColor = System::Drawing::Color::Pink;
			this->textBoxHouseHold->Location = System::Drawing::Point(149, 238);
			this->textBoxHouseHold->Name = L"textBoxHouseHold";
			this->textBoxHouseHold->ReadOnly = true;
			this->textBoxHouseHold->Size = System::Drawing::Size(100, 23);
			this->textBoxHouseHold->TabIndex = 30;
			this->textBoxHouseHold->Text = L"0%";
			this->textBoxHouseHold->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxStudy
			// 
			this->textBoxStudy->BackColor = System::Drawing::Color::CadetBlue;
			this->textBoxStudy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxStudy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStudy->ForeColor = System::Drawing::Color::PowderBlue;
			this->textBoxStudy->Location = System::Drawing::Point(146, 159);
			this->textBoxStudy->Name = L"textBoxStudy";
			this->textBoxStudy->ReadOnly = true;
			this->textBoxStudy->Size = System::Drawing::Size(100, 23);
			this->textBoxStudy->TabIndex = 29;
			this->textBoxStudy->Text = L"0%";
			this->textBoxStudy->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Brown;
			this->button6->Location = System::Drawing::Point(137, 109);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 33);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Archive";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Archieve);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Brown;
			this->button5->Location = System::Drawing::Point(15, 109);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 33);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Log out";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Logout);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(107, 483);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 40);
			this->label12->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(759, 483);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 40);
			this->label3->TabIndex = 24;
			this->label3->Text = L"label3";
			// 
			// panel10
			// 
			this->panel10->AutoScroll = true;
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Controls->Add(this->label11);
			this->panel10->Controls->Add(this->panel17);
			this->panel10->Controls->Add(this->panel16);
			this->panel10->Controls->Add(this->panel15);
			this->panel10->Controls->Add(this->panel14);
			this->panel10->Controls->Add(this->panel13);
			this->panel10->Controls->Add(this->panel12);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Location = System::Drawing::Point(274, 24);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(640, 427);
			this->panel10->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(2200, 157);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 19);
			this->label11->TabIndex = 11;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Teal;
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel17->Controls->Add(this->unchecked7);
			this->panel17->Controls->Add(this->rem7);
			this->panel17->Controls->Add(this->new7);
			this->panel17->Controls->Add(this->checkedListBox7);
			this->panel17->Controls->Add(this->day7);
			this->panel17->Controls->Add(this->date7);
			this->panel17->Location = System::Drawing::Point(1900, 19);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(281, 364);
			this->panel17->TabIndex = 10;
			// 
			// unchecked7
			// 
			this->unchecked7->BackColor = System::Drawing::Color::Teal;
			this->unchecked7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->unchecked7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unchecked7->ForeColor = System::Drawing::Color::Red;
			this->unchecked7->Location = System::Drawing::Point(117, 21);
			this->unchecked7->Name = L"unchecked7";
			this->unchecked7->Size = System::Drawing::Size(134, 25);
			this->unchecked7->TabIndex = 7;
			this->unchecked7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rem7
			// 
			this->rem7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rem7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rem7->ForeColor = System::Drawing::Color::Black;
			this->rem7->Location = System::Drawing::Point(148, 301);
			this->rem7->Name = L"rem7";
			this->rem7->Size = System::Drawing::Size(103, 33);
			this->rem7->TabIndex = 4;
			this->rem7->Text = L"Remove";
			this->rem7->UseVisualStyleBackColor = true;
			this->rem7->Click += gcnew System::EventHandler(this, &MyForm::Remove7);
			// 
			// new7
			// 
			this->new7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->new7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new7->ForeColor = System::Drawing::Color::Black;
			this->new7->Location = System::Drawing::Point(21, 301);
			this->new7->Name = L"new7";
			this->new7->Size = System::Drawing::Size(103, 33);
			this->new7->TabIndex = 3;
			this->new7->Text = L"New";
			this->new7->UseVisualStyleBackColor = true;
			this->new7->Click += gcnew System::EventHandler(this, &MyForm::Create7);
			// 
			// checkedListBox7
			// 
			this->checkedListBox7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkedListBox7->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox7->FormattingEnabled = true;
			this->checkedListBox7->Location = System::Drawing::Point(21, 115);
			this->checkedListBox7->Name = L"checkedListBox7";
			this->checkedListBox7->Size = System::Drawing::Size(230, 164);
			this->checkedListBox7->TabIndex = 2;
			this->checkedListBox7->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::ItemCheck7);
			this->checkedListBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetTaskTypeInfo7);
			// 
			// day7
			// 
			this->day7->AutoSize = true;
			this->day7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day7->Location = System::Drawing::Point(15, 46);
			this->day7->Name = L"day7";
			this->day7->Size = System::Drawing::Size(109, 32);
			this->day7->TabIndex = 1;
			this->day7->Text = L"Monday";
			// 
			// date7
			// 
			this->date7->AutoSize = true;
			this->date7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date7->Location = System::Drawing::Point(16, 21);
			this->date7->Name = L"date7";
			this->date7->Size = System::Drawing::Size(56, 25);
			this->date7->TabIndex = 0;
			this->date7->Text = L"27.05";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Teal;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel16->Controls->Add(this->unchecked6);
			this->panel16->Controls->Add(this->rem6);
			this->panel16->Controls->Add(this->new6);
			this->panel16->Controls->Add(this->checkedListBox6);
			this->panel16->Controls->Add(this->day6);
			this->panel16->Controls->Add(this->date6);
			this->panel16->Location = System::Drawing::Point(1587, 19);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(281, 364);
			this->panel16->TabIndex = 9;
			// 
			// unchecked6
			// 
			this->unchecked6->BackColor = System::Drawing::Color::Teal;
			this->unchecked6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->unchecked6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unchecked6->ForeColor = System::Drawing::Color::Red;
			this->unchecked6->Location = System::Drawing::Point(117, 21);
			this->unchecked6->Name = L"unchecked6";
			this->unchecked6->Size = System::Drawing::Size(134, 25);
			this->unchecked6->TabIndex = 7;
			this->unchecked6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rem6
			// 
			this->rem6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rem6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rem6->ForeColor = System::Drawing::Color::Black;
			this->rem6->Location = System::Drawing::Point(148, 301);
			this->rem6->Name = L"rem6";
			this->rem6->Size = System::Drawing::Size(103, 33);
			this->rem6->TabIndex = 4;
			this->rem6->Text = L"Remove";
			this->rem6->UseVisualStyleBackColor = true;
			this->rem6->Click += gcnew System::EventHandler(this, &MyForm::Remove6);
			// 
			// new6
			// 
			this->new6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->new6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new6->ForeColor = System::Drawing::Color::Black;
			this->new6->Location = System::Drawing::Point(21, 301);
			this->new6->Name = L"new6";
			this->new6->Size = System::Drawing::Size(103, 33);
			this->new6->TabIndex = 3;
			this->new6->Text = L"New";
			this->new6->UseVisualStyleBackColor = true;
			this->new6->Click += gcnew System::EventHandler(this, &MyForm::Create6);
			// 
			// checkedListBox6
			// 
			this->checkedListBox6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkedListBox6->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox6->FormattingEnabled = true;
			this->checkedListBox6->Location = System::Drawing::Point(21, 115);
			this->checkedListBox6->Name = L"checkedListBox6";
			this->checkedListBox6->Size = System::Drawing::Size(230, 164);
			this->checkedListBox6->TabIndex = 2;
			this->checkedListBox6->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::ItemCheck6);
			this->checkedListBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetTaskTypeInfo6);
			// 
			// day6
			// 
			this->day6->AutoSize = true;
			this->day6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day6->Location = System::Drawing::Point(15, 46);
			this->day6->Name = L"day6";
			this->day6->Size = System::Drawing::Size(109, 32);
			this->day6->TabIndex = 1;
			this->day6->Text = L"Monday";
			// 
			// date6
			// 
			this->date6->AutoSize = true;
			this->date6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date6->Location = System::Drawing::Point(16, 21);
			this->date6->Name = L"date6";
			this->date6->Size = System::Drawing::Size(56, 25);
			this->date6->TabIndex = 0;
			this->date6->Text = L"27.05";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Teal;
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel15->Controls->Add(this->unchecked5);
			this->panel15->Controls->Add(this->rem5);
			this->panel15->Controls->Add(this->new5);
			this->panel15->Controls->Add(this->checkedListBox5);
			this->panel15->Controls->Add(this->day5);
			this->panel15->Controls->Add(this->date5);
			this->panel15->Location = System::Drawing::Point(1276, 19);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(281, 364);
			this->panel15->TabIndex = 8;
			// 
			// unchecked5
			// 
			this->unchecked5->BackColor = System::Drawing::Color::Teal;
			this->unchecked5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->unchecked5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unchecked5->ForeColor = System::Drawing::Color::Red;
			this->unchecked5->Location = System::Drawing::Point(117, 21);
			this->unchecked5->Name = L"unchecked5";
			this->unchecked5->Size = System::Drawing::Size(134, 25);
			this->unchecked5->TabIndex = 7;
			this->unchecked5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rem5
			// 
			this->rem5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rem5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rem5->ForeColor = System::Drawing::Color::Black;
			this->rem5->Location = System::Drawing::Point(148, 301);
			this->rem5->Name = L"rem5";
			this->rem5->Size = System::Drawing::Size(103, 33);
			this->rem5->TabIndex = 4;
			this->rem5->Text = L"Remove";
			this->rem5->UseVisualStyleBackColor = true;
			this->rem5->Click += gcnew System::EventHandler(this, &MyForm::Remove5);
			// 
			// new5
			// 
			this->new5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->new5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new5->ForeColor = System::Drawing::Color::Black;
			this->new5->Location = System::Drawing::Point(21, 301);
			this->new5->Name = L"new5";
			this->new5->Size = System::Drawing::Size(103, 33);
			this->new5->TabIndex = 3;
			this->new5->Text = L"New";
			this->new5->UseVisualStyleBackColor = true;
			this->new5->Click += gcnew System::EventHandler(this, &MyForm::Create5);
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkedListBox5->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Location = System::Drawing::Point(21, 115);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(230, 164);
			this->checkedListBox5->TabIndex = 2;
			this->checkedListBox5->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::ItemCheck5);
			this->checkedListBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetTaskTypeInfo5);
			// 
			// day5
			// 
			this->day5->AutoSize = true;
			this->day5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day5->Location = System::Drawing::Point(15, 46);
			this->day5->Name = L"day5";
			this->day5->Size = System::Drawing::Size(109, 32);
			this->day5->TabIndex = 1;
			this->day5->Text = L"Monday";
			// 
			// date5
			// 
			this->date5->AutoSize = true;
			this->date5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date5->Location = System::Drawing::Point(16, 21);
			this->date5->Name = L"date5";
			this->date5->Size = System::Drawing::Size(56, 25);
			this->date5->TabIndex = 0;
			this->date5->Text = L"27.05";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Teal;
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel14->Controls->Add(this->unchecked4);
			this->panel14->Controls->Add(this->rem4);
			this->panel14->Controls->Add(this->new4);
			this->panel14->Controls->Add(this->checkedListBox4);
			this->panel14->Controls->Add(this->day4);
			this->panel14->Controls->Add(this->date4);
			this->panel14->Location = System::Drawing::Point(969, 19);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(281, 364);
			this->panel14->TabIndex = 7;
			// 
			// unchecked4
			// 
			this->unchecked4->BackColor = System::Drawing::Color::Teal;
			this->unchecked4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->unchecked4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unchecked4->ForeColor = System::Drawing::Color::Red;
			this->unchecked4->Location = System::Drawing::Point(117, 21);
			this->unchecked4->Name = L"unchecked4";
			this->unchecked4->Size = System::Drawing::Size(134, 25);
			this->unchecked4->TabIndex = 7;
			this->unchecked4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rem4
			// 
			this->rem4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rem4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rem4->ForeColor = System::Drawing::Color::Black;
			this->rem4->Location = System::Drawing::Point(148, 301);
			this->rem4->Name = L"rem4";
			this->rem4->Size = System::Drawing::Size(103, 33);
			this->rem4->TabIndex = 4;
			this->rem4->Text = L"Remove";
			this->rem4->UseVisualStyleBackColor = true;
			this->rem4->Click += gcnew System::EventHandler(this, &MyForm::Remove4);
			// 
			// new4
			// 
			this->new4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->new4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new4->ForeColor = System::Drawing::Color::Black;
			this->new4->Location = System::Drawing::Point(21, 301);
			this->new4->Name = L"new4";
			this->new4->Size = System::Drawing::Size(103, 33);
			this->new4->TabIndex = 3;
			this->new4->Text = L"New";
			this->new4->UseVisualStyleBackColor = true;
			this->new4->Click += gcnew System::EventHandler(this, &MyForm::Create4);
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkedListBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Location = System::Drawing::Point(21, 115);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(230, 164);
			this->checkedListBox4->TabIndex = 2;
			this->checkedListBox4->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::ItemCheck4);
			this->checkedListBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetTaskTypeInfo4);
			// 
			// day4
			// 
			this->day4->AutoSize = true;
			this->day4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day4->Location = System::Drawing::Point(15, 46);
			this->day4->Name = L"day4";
			this->day4->Size = System::Drawing::Size(109, 32);
			this->day4->TabIndex = 1;
			this->day4->Text = L"Monday";
			// 
			// date4
			// 
			this->date4->AutoSize = true;
			this->date4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date4->Location = System::Drawing::Point(16, 21);
			this->date4->Name = L"date4";
			this->date4->Size = System::Drawing::Size(56, 25);
			this->date4->TabIndex = 0;
			this->date4->Text = L"27.05";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Teal;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->Controls->Add(this->unchecked3);
			this->panel13->Controls->Add(this->rem3);
			this->panel13->Controls->Add(this->new3);
			this->panel13->Controls->Add(this->checkedListBox3);
			this->panel13->Controls->Add(this->day3);
			this->panel13->Controls->Add(this->date3);
			this->panel13->Location = System::Drawing::Point(656, 19);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(281, 364);
			this->panel13->TabIndex = 6;
			// 
			// unchecked3
			// 
			this->unchecked3->BackColor = System::Drawing::Color::Teal;
			this->unchecked3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->unchecked3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unchecked3->ForeColor = System::Drawing::Color::Red;
			this->unchecked3->Location = System::Drawing::Point(117, 21);
			this->unchecked3->Name = L"unchecked3";
			this->unchecked3->Size = System::Drawing::Size(134, 25);
			this->unchecked3->TabIndex = 7;
			this->unchecked3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rem3
			// 
			this->rem3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rem3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rem3->ForeColor = System::Drawing::Color::Black;
			this->rem3->Location = System::Drawing::Point(148, 301);
			this->rem3->Name = L"rem3";
			this->rem3->Size = System::Drawing::Size(103, 33);
			this->rem3->TabIndex = 4;
			this->rem3->Text = L"Remove";
			this->rem3->UseVisualStyleBackColor = true;
			this->rem3->Click += gcnew System::EventHandler(this, &MyForm::Remove3);
			// 
			// new3
			// 
			this->new3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->new3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new3->ForeColor = System::Drawing::Color::Black;
			this->new3->Location = System::Drawing::Point(21, 301);
			this->new3->Name = L"new3";
			this->new3->Size = System::Drawing::Size(103, 33);
			this->new3->TabIndex = 3;
			this->new3->Text = L"New";
			this->new3->UseVisualStyleBackColor = true;
			this->new3->Click += gcnew System::EventHandler(this, &MyForm::Create3);
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkedListBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(21, 115);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(230, 164);
			this->checkedListBox3->TabIndex = 2;
			this->checkedListBox3->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::ItemCheck3);
			this->checkedListBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetTaskTypeInfo3);
			// 
			// day3
			// 
			this->day3->AutoSize = true;
			this->day3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day3->Location = System::Drawing::Point(15, 46);
			this->day3->Name = L"day3";
			this->day3->Size = System::Drawing::Size(109, 32);
			this->day3->TabIndex = 1;
			this->day3->Text = L"Monday";
			// 
			// date3
			// 
			this->date3->AutoSize = true;
			this->date3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date3->Location = System::Drawing::Point(16, 21);
			this->date3->Name = L"date3";
			this->date3->Size = System::Drawing::Size(56, 25);
			this->date3->TabIndex = 0;
			this->date3->Text = L"27.05";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Teal;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Controls->Add(this->unchecked2);
			this->panel12->Controls->Add(this->rem2);
			this->panel12->Controls->Add(this->new2);
			this->panel12->Controls->Add(this->checkedListBox2);
			this->panel12->Controls->Add(this->day2);
			this->panel12->Controls->Add(this->date2);
			this->panel12->Location = System::Drawing::Point(342, 19);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(281, 364);
			this->panel12->TabIndex = 5;
			// 
			// unchecked2
			// 
			this->unchecked2->BackColor = System::Drawing::Color::Teal;
			this->unchecked2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->unchecked2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unchecked2->ForeColor = System::Drawing::Color::Red;
			this->unchecked2->Location = System::Drawing::Point(117, 21);
			this->unchecked2->Name = L"unchecked2";
			this->unchecked2->Size = System::Drawing::Size(134, 25);
			this->unchecked2->TabIndex = 7;
			this->unchecked2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rem2
			// 
			this->rem2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rem2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rem2->ForeColor = System::Drawing::Color::Black;
			this->rem2->Location = System::Drawing::Point(148, 301);
			this->rem2->Name = L"rem2";
			this->rem2->Size = System::Drawing::Size(103, 33);
			this->rem2->TabIndex = 4;
			this->rem2->Text = L"Remove";
			this->rem2->UseVisualStyleBackColor = true;
			this->rem2->Click += gcnew System::EventHandler(this, &MyForm::Remove2);
			// 
			// new2
			// 
			this->new2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->new2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new2->ForeColor = System::Drawing::Color::Black;
			this->new2->Location = System::Drawing::Point(21, 301);
			this->new2->Name = L"new2";
			this->new2->Size = System::Drawing::Size(103, 33);
			this->new2->TabIndex = 3;
			this->new2->Text = L"New";
			this->new2->UseVisualStyleBackColor = true;
			this->new2->Click += gcnew System::EventHandler(this, &MyForm::Create2);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkedListBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(21, 115);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(230, 164);
			this->checkedListBox2->TabIndex = 2;
			this->checkedListBox2->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::ItemCheck2);
			this->checkedListBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetTaskTypeInfo2);
			// 
			// day2
			// 
			this->day2->AutoSize = true;
			this->day2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day2->Location = System::Drawing::Point(15, 46);
			this->day2->Name = L"day2";
			this->day2->Size = System::Drawing::Size(109, 32);
			this->day2->TabIndex = 1;
			this->day2->Text = L"Monday";
			// 
			// date2
			// 
			this->date2->AutoSize = true;
			this->date2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date2->Location = System::Drawing::Point(16, 21);
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(56, 25);
			this->date2->TabIndex = 0;
			this->date2->Text = L"27.05";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Teal;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->unchecked1);
			this->panel11->Controls->Add(this->rem1);
			this->panel11->Controls->Add(this->new1);
			this->panel11->Controls->Add(this->checkedListBox1);
			this->panel11->Controls->Add(this->day1);
			this->panel11->Controls->Add(this->date1);
			this->panel11->Location = System::Drawing::Point(32, 19);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(281, 364);
			this->panel11->TabIndex = 0;
			// 
			// unchecked1
			// 
			this->unchecked1->BackColor = System::Drawing::Color::Teal;
			this->unchecked1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->unchecked1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unchecked1->ForeColor = System::Drawing::Color::Red;
			this->unchecked1->Location = System::Drawing::Point(117, 21);
			this->unchecked1->Name = L"unchecked1";
			this->unchecked1->Size = System::Drawing::Size(134, 25);
			this->unchecked1->TabIndex = 6;
			this->unchecked1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rem1
			// 
			this->rem1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rem1->ForeColor = System::Drawing::Color::Black;
			this->rem1->Location = System::Drawing::Point(148, 301);
			this->rem1->Name = L"rem1";
			this->rem1->Size = System::Drawing::Size(103, 33);
			this->rem1->TabIndex = 4;
			this->rem1->Text = L"Remove";
			this->rem1->UseVisualStyleBackColor = true;
			this->rem1->Click += gcnew System::EventHandler(this, &MyForm::Remove1);
			// 
			// new1
			// 
			this->new1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->new1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new1->ForeColor = System::Drawing::Color::Black;
			this->new1->Location = System::Drawing::Point(21, 301);
			this->new1->Name = L"new1";
			this->new1->Size = System::Drawing::Size(103, 33);
			this->new1->TabIndex = 3;
			this->new1->Text = L"New";
			this->new1->UseVisualStyleBackColor = true;
			this->new1->Click += gcnew System::EventHandler(this, &MyForm::Create1);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->checkedListBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(21, 115);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(230, 164);
			this->checkedListBox1->TabIndex = 2;
			this->checkedListBox1->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &MyForm::ItemCheck1);
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetTaskTypeInfo1);
			// 
			// day1
			// 
			this->day1->AutoSize = true;
			this->day1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->day1->Location = System::Drawing::Point(15, 46);
			this->day1->Name = L"day1";
			this->day1->Size = System::Drawing::Size(109, 32);
			this->day1->TabIndex = 1;
			this->day1->Text = L"Monday";
			// 
			// date1
			// 
			this->date1->AutoSize = true;
			this->date1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date1->Location = System::Drawing::Point(16, 21);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(56, 25);
			this->date1->TabIndex = 0;
			this->date1->Text = L"27.05";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::LightGray;
			this->label16->Location = System::Drawing::Point(20, 316);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 25);
			this->label16->TabIndex = 6;
			this->label16->Text = L"business";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::PowderBlue;
			this->label18->Location = System::Drawing::Point(17, 158);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(90, 25);
			this->label18->TabIndex = 8;
			this->label18->Text = L"studying";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Pink;
			this->label20->Location = System::Drawing::Point(17, 236);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(105, 25);
			this->label20->TabIndex = 10;
			this->label20->Text = L"household";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label22->Location = System::Drawing::Point(20, 387);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(60, 25);
			this->label22->TabIndex = 12;
			this->label22->Text = L"other";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(924, 541);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Daily planner";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ GetMonth(int a) 
		{
			switch (a)
			{
			case 1:
				return "Jan";
			case 2:
				return "Feb";
			case 3:
				return "Mar";
			case 4:
				return "Apr";
			case 5:
				return "May";
			case 6:
				return "Jun";
			case 7:
				return "Jul";
			case 8:
				return "Aug";
			case 9:
				return "Sep";
			case 10:
				return "Oct";
			case 11:
				return "Nov";
			case 12:
				return "Dec";
			}
		}
		Void RefillFile() 
		{
			System::String^ path = "Data\\";
			path += Service::user->login;
			path += ".txt";
			ofstream f;
			f.open(Service::toCharPtr(path));
			for (int i = 0; i < 7; i++) {
				f.write(Service::toCharPtr((list[i]->date->Day + "." + list[i]->date->Month + "." + list[i]->date->Year + "\n")),
					strlen(Service::toCharPtr((list[i]->date->Day + "." + list[i]->date->Month + "." + list[i]->date->Year + "\n"))));
				for (int j = 0; j < list[i]->list->Count; j++)
					f.write(Service::toCharPtr((list[i]->list[j]->Type + ":" + list[i]->list[j]->IsChecked + ":" + list[i]->list[j]->Text + "\n")),
						strlen(Service::toCharPtr((list[i]->list[j]->Type + ":" + list[i]->list[j]->IsChecked + ":" + list[i]->list[j]->Text + "\n"))));
				if (i != 6)
					f.write(Service::toCharPtr(("!\n")),
						strlen(Service::toCharPtr(("!\n"))));
				else
					f.write(Service::toCharPtr(("!")),
						strlen(Service::toCharPtr(("!"))));
			}
			f.close();
		}
		Void CheckListToNowDays() 
		{
			DateTime^ today = gcnew DateTime(DateTime::Now.Year, DateTime::Now.Month, DateTime::Now.Day);
			if (list[0]->date->CompareTo(today) == 0)
				return;
			int item = 0;
			for (; item < 7; item++) //counting days to change
				if (list[item]->date->CompareTo(today) >= 0)
					break;
			list->RemoveRange(0, item);
			for (int i = 0; i < item; i++)
			{
				Day_^ d = gcnew Day_();
				if (i == 0 && list->Count == 0)
					d->date = today;
				else
					d->date = list[list->Count - 1]->date->AddDays(1);

				d->day = d->date->DayOfWeek.ToString();
				list->Add(d);
			}
			RefillFile();
		}
		Void SetStatistics() 
		{
			int count_b = 0;
			int count_h = 0;
			int count_s = 0;
			int count_o = 0;
			int count_bch = 0;
			int count_hch = 0;
			int count_sch = 0;
			int count_och = 0;
			for (int i = 0; i < 7; i++) 
			{
				int checkedToday = 0;
				int haveToday = 0;
				for (int h = 0; h < list[i]->list->Count; h++)
				{
					if (list[i]->list[h]->Type[0] == (Char)'b') 
					{
						count_b++;
						if (list[i]->list[h]->IsChecked)
							count_bch++;
					}
					else if (list[i]->list[h]->Type[0] == (Char)'o') 
					{
						count_o++;
						if (list[i]->list[h]->IsChecked)
							count_och++;
					}
					else if (list[i]->list[h]->Type[0] == (Char)'h') 
					{
						count_h++;
						if (list[i]->list[h]->IsChecked)
							count_hch++;
					}
					else if (list[i]->list[h]->Type[0] == (Char)'s') 
					{
						count_s++;
						if (list[i]->list[h]->IsChecked)
							count_sch++;
					}
					if (list[i]->list[h]->IsChecked) 
						checkedToday++;
					haveToday++;
				}
				if ((haveToday - checkedToday) != 0) 
				{
					uncheckedArr[i]->Text = (haveToday - checkedToday) + " tasks to do";
					uncheckedArr[i]->ForeColor = Color::Red;
				}
				else 
				{
					uncheckedArr[i]->Text = "All tasks are done!";
					uncheckedArr[i]->ForeColor = Color::Lime;
				}
			}
			label3->Text = "Total: " + (count_bch + count_och + count_hch + count_sch) + "/" + (count_b + count_o + count_h + count_s);
			if (count_b == 0) 
			{
				progressBar4->Visible = false;
				textBoxBusiness->Visible = false;
			}
			else 
			{
				progressBar4->Visible = true;
				progressBar4->Maximum = count_b;
				progressBar4->Value = count_bch;
				textBoxBusiness->Text = (count_bch * 100 / count_b).ToString() + "%";
				textBoxBusiness->Visible = true;
			}
			if (count_h == 0) 
			{
				progressBar3->Visible = false;
				textBoxHouseHold->Visible = false;
			}
			else 
			{
				progressBar3->Visible = true;
				progressBar3->Maximum = count_h;
				progressBar3->Value = count_hch;
				textBoxHouseHold->Text = (count_hch * 100 / count_h).ToString() + "%";
				textBoxHouseHold->Visible = true;
			}
			if (count_s == 0)
			{
				progressBar2->Visible = false;
				textBoxStudy->Visible = false;
			}
			else
			{
				progressBar2->Visible = true;
				textBoxStudy->Visible = true;
				progressBar2->Maximum = count_s;
				progressBar2->Value = count_sch;
				textBoxStudy->Text = (count_sch * 100 / count_s) + "%";
			}
			if (count_o == 0) 
			{
				progressBar5->Visible = false;
				textBoxOther->Visible = false;
			}
			else 
			{
				progressBar5->Visible = true;
				progressBar5->Maximum = count_o;
				progressBar5->Value = count_och;
				textBoxOther->Text = (count_och * 100 / count_o).ToString() + "%";
				textBoxOther->Visible = true;
			}
		}
		Void UpdateDataAfterLogin() 
		{
			if (Service::user->login->Length < 15)
				label26->Text = Service::user->login;
			else
				label26->Text = Service::user->login->Remove(12) + "...";
			pictureBox4->Image = Image::FromFile("Data\\Avatars\\" + Service::user->img + ".png");
			String^ path = "Data\\";
			path += Service::user->login;
			path += ".txt";
			ifstream f;
			f.open(Service::toCharPtr(path));
			if (f.is_open() == false)
			{
				DateTime today = DateTime::Now;
				ofstream f2;
				f2.open(Service::toCharPtr(path));
				f2.write(Service::toCharPtr((today.Day + "." + today.Month + "." + today.Year + "\n")),
					strlen(Service::toCharPtr((today.Day + "." + today.Month + "." + today.Year + "\n"))));
				f2.write(Service::toCharPtr(("!\n")), strlen(Service::toCharPtr(("!\n"))));
				for (int i = 1; i < 7; i++) 
				{
					f2.write(Service::toCharPtr((today.AddDays(i).Day + "." + today.AddDays(i).Month + "." + today.AddDays(i).Year + "\n")),
						strlen(Service::toCharPtr((today.AddDays(i).Day + "." + today.AddDays(i).Month + "." + today.AddDays(i).Year + "\n"))));
					if (i != 6)
						f2.write(Service::toCharPtr(("!\n")), strlen(Service::toCharPtr(("!\n"))));
					else
						f2.write(Service::toCharPtr(("!")), strlen(Service::toCharPtr(("!"))));
				}
				f.close();
				f2.close();
				f.open(Service::toCharPtr(path));
			}
			char buf[40];
			while (!f.eof())
			{
				Day_^ d = gcnew Day_();
				f.getline(buf, 30);
				char day[3];
				strcpy(day, strtok(buf, "."));
				char mon[3];
				strcpy(mon, strtok(NULL, "."));
				char yr[6];
				strcpy(yr, strtok(NULL, "."));
				d->date = gcnew DateTime(_atoi64(yr), _atoi64(mon), _atoi64(day));
				d->day = d->date->DayOfWeek.ToString();
				while (1)
				{
					f.getline(buf, 40);
					if (buf[0] == '!')
						break;
					else
					{
						Task_^ t = gcnew Task_();
						t->SetType(strtok(buf, ":"));
						t->SetIsChecked(strtok(NULL, ":"));
						t->SetText(strtok(NULL, ":"));
						d->list->Add(t);
					}
				}
				for each (Task_ ^ t in d->list)
					d->listForBox->Add(t->Text);
				list->Add(d);
			}
			f.close();
			CheckListToNowDays();
			for (int i = 0; i < 7; i++) 
			{
				dates[i]->Text = list[i]->date->ToString()->Remove(10);
				days[i]->Text = list[i]->day;
				listboxes[i]->Items->AddRange(list[i]->listForBox->ToArray());
				for (int h = 0; h < listboxes[i]->Items->Count; h++) 
				{
					if (list[i]->list[h]->IsChecked)
						listboxes[i]->SetItemCheckState(h, CheckState::Checked);
					else
						listboxes[i]->SetItemCheckState(h, CheckState::Unchecked);
				}
			}
			SetStatistics();
		}

		Void toRegister(Object^ sender, EventArgs^ e)
		{
			pictureBox1->Visible = false;
			pictureBox2->Visible = false;
			button2->Visible = false;
			panel5->Visible = true;
			button3->Visible = true;
		}
		Void cancelRegister(Object^ sender, EventArgs^ e)
		{
			pictureBox1->Visible = true;
			pictureBox2->Visible = true;
			button2->Visible = true;
			panel5->Visible = false;
			button3->Visible = false;
		}
		Void Login(Object^ sender, EventArgs^ e) 
		{
			String^ login = textBox1->Text;
			String^ password = textBox2->Text;
			if (login == "" || password == "")
			{
				label10->ForeColor = Color::Red;
				label10->Text = "One of the fields is empty !";
				return;
			}
			String^ path = "Data\\Users.txt";
			ifstream f;
			f.open(Service::toCharPtr(path));
			if (!f.is_open())
			{
				label10->ForeColor = Color::Red;
				label10->Text = "Create account first !";
				return;
			}
			char buf[30];
			char* loginCh = Service::toCharPtr(login);
			char* pswCh = Service::toCharPtr(password->GetHashCode().ToString());
			while (!f.eof())
			{
				f.getline(buf, 30);
				if (strlen(buf) < 4)
				{
					label10->ForeColor = Color::Red;
					label10->Text = "Username or password is\ninvalid !";
					return;
				}
				if (!(strcmp(strtok(buf, ":"), loginCh)))
				{
					char* tte = new char[strlen(buf)];
					strcpy(tte, buf);
					char* tt = strtok(NULL, ":");
					if (!(strcmp(tt, pswCh))) {
						Service::user->login = "";
						Service::user->img = "";
						for (int i = 0; i < strlen(tte); i++)
							Service::user->login += (Char)tte[i];
						char* tet = strtok(NULL, ":");
						for (int i = 0; i < strlen(tet); i++)
							Service::user->img += (Char)tet[i];
						textBox1->Text = "";
						textBox2->Text = "";
						textBox3->Text = "";
						textBox4->Text = "";
						label6->Text = "";
						label10->Text = "";
						button3->Visible = false;
						pictureBox1->Visible = true;
						pictureBox2->Visible = true;
						button2->Visible = true;
						panel5->Visible = false;
						UpdateDataAfterLogin();
						panel1->Visible = false;
						panel2->Visible = false;
						panel8->Visible = true;
						pictureBox3->Image = nullptr;
						return;
					}
					else 
					{
						label10->ForeColor = Color::Red;
						label10->Text = "Username or password is\ninvalid !";
						f.close();
						return;
					}
				}
			}
			label10->ForeColor = Color::Red;
			label10->Text = "Username or password is\ninvalid !";
			f.close();
			return;
		}
		Void Register(Object^ sender, EventArgs^ e) 
		{
			String^ login = textBox4->Text;
			String^ password = textBox3->Text;
			if (login == "" || password == "")
			{
				label6->ForeColor = Color::Red;
				label6->Text = "One of the fields is empty !";
				return;
			}
			String^ path = "Data\\Users.txt";
			ifstream f;
			f.open(Service::toCharPtr(path));
			if (!f.is_open())
			{
				f.close();
				ofstream f2(Service::toCharPtr(path));
				f2.close();
				f.open(Service::toCharPtr(path));
			}
			char buf[40];
			char* loginCh = Service::toCharPtr(login);
			if (strchr(loginCh, ':'))
			{
				label6->ForeColor = Color::Red;
				label6->Text = "You can not use ':' symbol !";
				return;
			}
			while (!f.eof())
			{
				f.getline(buf, 40);
				if (strlen(buf) > 4) {
					if (!(strcmp(strtok(buf, ":"), loginCh)))
					{
						label6->ForeColor = Color::Red;
						label6->Text = "This login is already used !";
						f.close();
						return;
					}
				}
			}
			if (password->Length < 6)
			{
				label6->ForeColor = Color::Red;
				label6->Text = "Entered password is smaller than 6 symbols !";
				f.close();
				return;
			}
			f.close();
			ofstream f3(Service::toCharPtr(path), ios_base::app);
			f3.write(loginCh, strlen(loginCh));
			f3.put(':');
			label6->Text = password;
			f3.write(Service::toCharPtr(password->GetHashCode().ToString()), strlen(Service::toCharPtr(password->GetHashCode().ToString())));
			f3.write(":0\n", 3);
			f3.close();
			label6->ForeColor = Color::Orange;
			label6->Text = "New account has been added !";
			textBox4->Text = "";
			textBox3->Text = "";
		}
		Void SetTaskTypeInfo1(Object^ sender, EventArgs^ e) 
		{
			if (checkedListBox1->SelectedItem != nullptr) 
			{
				label12->Text = list[0]->list[checkedListBox1->SelectedIndex]->Type + " task";
				if (list[0]->list[checkedListBox1->SelectedIndex]->Type == "studying") 
				{
					label12->ForeColor = Color::PowderBlue;
					pictureBox3->Image = Image::FromFile("Data\\study.png");
				}
				if (list[0]->list[checkedListBox1->SelectedIndex]->Type == "business") 
				{
					label12->ForeColor = Color::LightGray;
					pictureBox3->Image = Image::FromFile("Data\\business.png");
				}
				if (list[0]->list[checkedListBox1->SelectedIndex]->Type == "household") 
				{
					pictureBox3->Image = Image::FromFile("Data\\home.png");
					label12->ForeColor = Color::Pink;
				}
				if (list[0]->list[checkedListBox1->SelectedIndex]->Type == "other") 
				{
					pictureBox3->Image = Image::FromFile("Data\\hh.png");
					label12->ForeColor = Color::FromArgb(255, 192, 255);
				}
			}
		}
		Void SetTaskTypeInfo2(Object^ sender, EventArgs^ e) 
		{
			if (checkedListBox2->SelectedItem != nullptr) 
			{
				label12->Text = list[1]->list[checkedListBox2->SelectedIndex]->Type + " task";
				if (list[1]->list[checkedListBox2->SelectedIndex]->Type == "studying") 
				{
					label12->ForeColor = Color::PowderBlue;
					pictureBox3->Image = Image::FromFile("Data\\study.png");
				}
				if (list[1]->list[checkedListBox2->SelectedIndex]->Type == "business") 
				{
					label12->ForeColor = Color::LightGray;
					pictureBox3->Image = Image::FromFile("Data\\business.png");
				}
				if (list[1]->list[checkedListBox2->SelectedIndex]->Type == "household") 
				{
					pictureBox3->Image = Image::FromFile("Data\\home.png");
					label12->ForeColor = Color::Pink;
				}
				if (list[1]->list[checkedListBox2->SelectedIndex]->Type == "other") 
				{
					pictureBox3->Image = Image::FromFile("Data\\hh.png");
					label12->ForeColor = Color::FromArgb(255, 192, 255);
				}
			}
		}
		Void SetTaskTypeInfo3(Object^ sender, EventArgs^ e) 
		{
			if (checkedListBox3->SelectedItem != nullptr) 
			{
				label12->Text = list[2]->list[checkedListBox3->SelectedIndex]->Type + " task";
				if (list[2]->list[checkedListBox3->SelectedIndex]->Type == "studying") 
				{
					label12->ForeColor = Color::PowderBlue;
					pictureBox3->Image = Image::FromFile("Data\\study.png");
				}
				if (list[2]->list[checkedListBox3->SelectedIndex]->Type == "business") 
				{
					label12->ForeColor = Color::LightGray;
					pictureBox3->Image = Image::FromFile("Data\\business.png");
				}
				if (list[2]->list[checkedListBox3->SelectedIndex]->Type == "household") 
				{
					pictureBox3->Image = Image::FromFile("Data\\home.png");
					label12->ForeColor = Color::Pink;
				}
				if (list[2]->list[checkedListBox3->SelectedIndex]->Type == "other") 
				{
					pictureBox3->Image = Image::FromFile("Data\\hh.png");
					label12->ForeColor = Color::FromArgb(255, 192, 255);
				}
			}
		}
		Void SetTaskTypeInfo4(Object^ sender, EventArgs^ e) 
		{
			if (checkedListBox4->SelectedItem != nullptr) 
			{
				label12->Text = list[3]->list[checkedListBox4->SelectedIndex]->Type + " task";
				if (list[3]->list[checkedListBox4->SelectedIndex]->Type == "studying") 
				{
					label12->ForeColor = Color::PowderBlue;
					pictureBox3->Image = Image::FromFile("Data\\study.png");
				}
				if (list[3]->list[checkedListBox4->SelectedIndex]->Type == "business") 
				{
					label12->ForeColor = Color::LightGray;
					pictureBox3->Image = Image::FromFile("Data\\business.png");
				}
				if (list[3]->list[checkedListBox4->SelectedIndex]->Type == "household")
				{
					pictureBox3->Image = Image::FromFile("Data\\home.png");
					label12->ForeColor = Color::Pink;
				}
				if (list[3]->list[checkedListBox4->SelectedIndex]->Type == "other") 
				{
					pictureBox3->Image = Image::FromFile("Data\\hh.png");
					label12->ForeColor = Color::FromArgb(255, 192, 255);
				}
			}
		}
		Void SetTaskTypeInfo5(Object^ sender, EventArgs^ e) 
		{
			if (checkedListBox5->SelectedItem != nullptr) 
			{
				label12->Text = list[4]->list[checkedListBox5->SelectedIndex]->Type + " task";
				if (list[4]->list[checkedListBox5->SelectedIndex]->Type == "studying") 
				{
					label12->ForeColor = Color::PowderBlue;
					pictureBox3->Image = Image::FromFile("Data\\study.png");
				}
				if (list[4]->list[checkedListBox5->SelectedIndex]->Type == "business") 
				{
					label12->ForeColor = Color::LightGray;
					pictureBox3->Image = Image::FromFile("Data\\business.png");
				}
				if (list[4]->list[checkedListBox5->SelectedIndex]->Type == "household") 
				{
					pictureBox3->Image = Image::FromFile("Data\\home.png");
					label12->ForeColor = Color::Pink;
				}
				if (list[4]->list[checkedListBox5->SelectedIndex]->Type == "other") 
				{
					pictureBox3->Image = Image::FromFile("Data\\hh.png");
					label12->ForeColor = Color::FromArgb(255, 192, 255);
				}
			}
		}
		Void SetTaskTypeInfo6(Object^ sender, EventArgs^ e) 
		{
			if (checkedListBox6->SelectedItem != nullptr) 
			{
				label12->Text = list[5]->list[checkedListBox6->SelectedIndex]->Type + " task";
				if (list[5]->list[checkedListBox6->SelectedIndex]->Type == "studying") 
				{
					label12->ForeColor = Color::PowderBlue;
					pictureBox3->Image = Image::FromFile("Data\\study.png");
				}
				if (list[5]->list[checkedListBox6->SelectedIndex]->Type == "business") 
				{
					label12->ForeColor = Color::LightGray;
					pictureBox3->Image = Image::FromFile("Data\\business.png");
				}
				if (list[5]->list[checkedListBox6->SelectedIndex]->Type == "household") 
				{
					pictureBox3->Image = Image::FromFile("Data\\home.png");
					label12->ForeColor = Color::Pink;
				}
				if (list[5]->list[checkedListBox6->SelectedIndex]->Type == "other") 
				{
					pictureBox3->Image = Image::FromFile("Data\\hh.png");
					label12->ForeColor = Color::FromArgb(255, 192, 255);
				}
			}
		}
		Void SetTaskTypeInfo7(Object^ sender, EventArgs^ e) 
		{
			if (checkedListBox7->SelectedItem != nullptr) 
			{
				label12->Text = list[6]->list[checkedListBox7->SelectedIndex]->Type + " task";
				if (list[6]->list[checkedListBox7->SelectedIndex]->Type == "studying")
				{
					label12->ForeColor = Color::PowderBlue;
					pictureBox3->Image = Image::FromFile("Data\\study.png");
				}
				if (list[6]->list[checkedListBox7->SelectedIndex]->Type == "business")
				{
					label12->ForeColor = Color::LightGray;
					pictureBox3->Image = Image::FromFile("Data\\business.png");
				}
				if (list[6]->list[checkedListBox7->SelectedIndex]->Type == "household") 
				{
					pictureBox3->Image = Image::FromFile("Data\\home.png");
					label12->ForeColor = Color::Pink;
				}
				if (list[6]->list[checkedListBox7->SelectedIndex]->Type == "other") 
				{
					pictureBox3->Image = Image::FromFile("Data\\hh.png");
					label12->ForeColor = Color::FromArgb(255, 192, 255);
				}
			}
		}
		Void ItemCheck1(Object^ sender, ItemCheckEventArgs^ e) {
			if (checkedListBox1->SelectedItem != nullptr) {
				if (e->NewValue == CheckState::Checked)
					list[0]->list[e->Index]->IsChecked = true;
				else
					list[0]->list[e->Index]->IsChecked = false;
				SetStatistics();
				RefillFile();
			}
		}
		Void ItemCheck2(Object^ sender, ItemCheckEventArgs^ e) {
			if (checkedListBox2->SelectedItem != nullptr) {
				if (e->NewValue == CheckState::Checked)
					list[1]->list[e->Index]->IsChecked = true;
				else
					list[1]->list[e->Index]->IsChecked = false;
				SetStatistics();
				RefillFile();
			}
		}
		Void ItemCheck3(Object^ sender, ItemCheckEventArgs^ e) {
			if (checkedListBox3->SelectedItem != nullptr) {
				if (e->NewValue == CheckState::Checked)
					list[2]->list[e->Index]->IsChecked = true;
				else
					list[2]->list[e->Index]->IsChecked = false;
				SetStatistics();
				RefillFile();
			}
		}
		Void ItemCheck4(Object^ sender, ItemCheckEventArgs^ e) {
			if (checkedListBox4->SelectedItem != nullptr) {
				if (e->NewValue == CheckState::Checked)
					list[3]->list[e->Index]->IsChecked = true;
				else
					list[3]->list[e->Index]->IsChecked = false;
				SetStatistics();
				RefillFile();
			}
		}
		Void ItemCheck5(Object^ sender, ItemCheckEventArgs^ e) {
			if (checkedListBox5->SelectedItem != nullptr) {
				if (e->NewValue == CheckState::Checked)
					list[4]->list[e->Index]->IsChecked = true;
				else
					list[4]->list[e->Index]->IsChecked = false; SetStatistics();
				RefillFile();
			}
		}
		Void ItemCheck6(Object^ sender, ItemCheckEventArgs^ e) {
			if (checkedListBox6->SelectedItem != nullptr) {
				if (e->NewValue == CheckState::Checked)
					list[5]->list[e->Index]->IsChecked = true;
				else
					list[5]->list[e->Index]->IsChecked = false;
				SetStatistics();
				RefillFile();
			}
		}
		Void ItemCheck7(Object^ sender, ItemCheckEventArgs^ e) {
			if (checkedListBox7->SelectedItem != nullptr) {
				if (e->NewValue == CheckState::Checked)
					list[6]->list[e->Index]->IsChecked = true;
				else
					list[6]->list[e->Index]->IsChecked = false;
				SetStatistics();
				RefillFile();
			}
		}
		Void Remove1(Object^ sender, EventArgs^ e) {
			if (checkedListBox1->Items->Count > 0 && checkedListBox1->SelectedItem != nullptr) {
				list[0]->list->RemoveAt(checkedListBox1->SelectedIndex);
				list[0]->listForBox->RemoveAt(checkedListBox1->SelectedIndex);
				AddClosed(this, nullptr);
				label12->Text = "";
				pictureBox3->Image = nullptr;
				SetStatistics();
			}
		}
		Void Remove2(Object^ sender, EventArgs^ e) {
			if (checkedListBox2->Items->Count > 0 && checkedListBox2->SelectedItem != nullptr) {
				list[1]->list->RemoveAt(checkedListBox2->SelectedIndex);
				list[1]->listForBox->RemoveAt(checkedListBox2->SelectedIndex);
				AddClosed(this, nullptr);
				pictureBox3->Image = nullptr;
				label12->Text = "";
				SetStatistics();
			}
		}
		Void Remove3(Object^ sender, EventArgs^ e) {
			if (checkedListBox3->Items->Count > 0 && checkedListBox3->SelectedItem != nullptr) {
				list[2]->list->RemoveAt(checkedListBox3->SelectedIndex);
				list[2]->listForBox->RemoveAt(checkedListBox3->SelectedIndex);
				AddClosed(this, nullptr);
				pictureBox3->Image = nullptr;
				label12->Text = "";
				SetStatistics();
			}
		}
		Void Remove4(Object^ sender, EventArgs^ e) {
			if (checkedListBox4->Items->Count > 0 && checkedListBox4->SelectedItem != nullptr) {
				list[3]->list->RemoveAt(checkedListBox4->SelectedIndex);
				list[3]->listForBox->RemoveAt(checkedListBox4->SelectedIndex);
				AddClosed(this, nullptr);
				pictureBox3->Image = nullptr;
				label12->Text = "";
				SetStatistics();
			}
		}
		Void Remove5(Object^ sender, EventArgs^ e) {
			if (checkedListBox5->Items->Count > 0 && checkedListBox5->SelectedItem != nullptr) {
				list[4]->list->RemoveAt(checkedListBox5->SelectedIndex);
				list[4]->listForBox->RemoveAt(checkedListBox5->SelectedIndex);
				AddClosed(this, nullptr);
				pictureBox3->Image = nullptr;
				label12->Text = "";
				SetStatistics();
			}
		}
		Void Remove6(Object^ sender, EventArgs^ e) {
			if (checkedListBox6->Items->Count > 0 && checkedListBox6->SelectedItem != nullptr) {
				list[5]->list->RemoveAt(checkedListBox6->SelectedIndex);
				list[5]->listForBox->RemoveAt(checkedListBox6->SelectedIndex);
				AddClosed(this, nullptr);
				pictureBox3->Image = nullptr;
				label12->Text = "";
				SetStatistics();
			}
		}
		Void Remove7(Object^ sender, EventArgs^ e) {
			if (checkedListBox7->Items->Count > 0 && checkedListBox7->SelectedItem != nullptr) {
				list[6]->list->RemoveAt(checkedListBox7->SelectedIndex);
				list[6]->listForBox->RemoveAt(checkedListBox7->SelectedIndex);
				AddClosed(this, nullptr);
				pictureBox3->Image = nullptr;
				label12->Text = "";
				SetStatistics();
			}
		}
		Void AddClosed(Object^ sender, EventArgs^ e) 
		{
			RefillFile();
			for (int i = 0; i < 7; i++) 
			{
				listboxes[i]->Items->Clear();
				listboxes[i]->Items->AddRange(list[i]->listForBox->ToArray());
				for (int h = 0; h < listboxes[i]->Items->Count; h++) 
				{
					if (list[i]->list[h]->IsChecked)
						listboxes[i]->SetItemCheckState(h, CheckState::Checked);
					else
						listboxes[i]->SetItemCheckState(h, CheckState::Unchecked);
				}
			}
			SetStatistics();
		}
		Void Create1(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			MyAdd^ m = gcnew MyAdd();
			m->list = list;
			m->index = 0;
			m->Closed += gcnew EventHandler(this, &MyForm::AddClosed);
			m->ShowDialog();
		}
		Void Create2(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			MyAdd^ m = gcnew MyAdd();
			m->list = list;
			m->index = 1;
			m->Closed += gcnew EventHandler(this, &MyForm::AddClosed);
			m->ShowDialog();
		}
		Void Create3(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			MyAdd^ m = gcnew MyAdd();
			m->list = list;
			m->index = 2;
			m->Closed += gcnew EventHandler(this, &MyForm::AddClosed);
			m->ShowDialog();
		}
		Void Create4(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			MyAdd^ m = gcnew MyAdd();
			m->list = list;
			m->index = 3;
			m->Closed += gcnew EventHandler(this, &MyForm::AddClosed);
			m->ShowDialog();
		}
		Void Create5(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			MyAdd^ m = gcnew MyAdd();
			m->list = list;
			m->index = 4;
			m->Closed += gcnew EventHandler(this, &MyForm::AddClosed);
			m->ShowDialog();
		}
		Void Create6(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			MyAdd^ m = gcnew MyAdd();
			m->list = list;
			m->index = 5;
			m->Closed += gcnew EventHandler(this, &MyForm::AddClosed);
			m->ShowDialog();
		}
		Void Create7(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			MyAdd^ m = gcnew MyAdd();
			m->list = list;
			m->index = 6;
			m->Closed += gcnew EventHandler(this, &MyForm::AddClosed);
			m->ShowDialog();
		}
		Void Logout(Object^ sender, EventArgs^ e) {
			pictureBox3->Image = nullptr;
			label12->Text = "";
			panel10->HorizontalScroll->Value = panel10->HorizontalScroll->Minimum;
			panel10->HorizontalScroll->Value = panel10->HorizontalScroll->Minimum;
			panel1->Visible = true;
			panel2->Visible = true;
			panel8->Visible = false;
			list->Clear();
			for (int i = 0; i < 7; i++)
				listboxes[i]->Items->Clear();
		}
		Void Archieve(Object^ sender, EventArgs^ e) {
			SaveFileDialog^ sfd = gcnew SaveFileDialog();
			sfd->Filter = "Text Files|*.txt";
			if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				ofstream f;
				f.open(Service::toCharPtr(sfd->FileName));
				for (int i = 0; i < 7; i++) {
					f.write(Service::toCharPtr((list[i]->date->Day + " " + GetMonth(list[i]->date->Month) + " " + list[i]->date->Year + "\n")),
						strlen(Service::toCharPtr((list[i]->date->Day + " " + GetMonth(list[i]->date->Month) + " " + list[i]->date->Year + "\n"))));
					for (int j = 0; j < list[i]->list->Count; j++) {
						char* buf;
						if (list[i]->list[j]->IsChecked)
							buf = Service::toCharPtr(("(" + list[i]->list[j]->Type + ") " + list[i]->list[j]->Text + " | Completed!\n"));
						else
							buf = Service::toCharPtr(("(" + list[i]->list[j]->Type + ") " + list[i]->list[j]->Text + " | Uncompleted(\n"));
						f.write(buf, strlen(buf));
					}
					if (list[i]->list->Count == 0)
						f.write(Service::toCharPtr(("No tasks there.\n")), 16);
					if (i != 6)
						f.write(Service::toCharPtr(("----------------------------------------------\n")), 47);
				}
				f.close();
				MessageBox::Show(sfd->FileName, "Path to your file is:");
			}
		}
		Void UserEdit(Object^ sender, EventArgs^ e) 
		{
			EditProfile^ m = gcnew EditProfile();
			m->ShowDialog();
			pictureBox4->Image = Image::FromFile("Data\\Avatars\\" + Service::user->img + ".png");
		}
};
}