#pragma once
#include <fstream>
#include <filesystem>
#include "Service.h"
#using <mscorlib.dll>

namespace CLR {
	using namespace std;
	using namespace System;
	using namespace System::Data;
	using namespace System::Windows;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;

	public ref class EditProfile : public Form
	{
	public:
		EditProfile(void)
		{
			InitializeComponent();
			SetImg();
		}
	protected:
		~EditProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		Void SetImg() 
		{
			pictureBox1->Image = Image::FromFile("Data\\Avatars\\0.png");
			pictureBox2->Image = Image::FromFile("Data\\Avatars\\1.png");
			pictureBox3->Image = Image::FromFile("Data\\Avatars\\2.png");
			pictureBox4->Image = Image::FromFile("Data\\Avatars\\3.png");
			pictureBox5->Image = Image::FromFile("Data\\Avatars\\4.png");
			pictureBox6->Image = Image::FromFile("Data\\Avatars\\5.png");
			pictureBox7->Image = Image::FromFile("Data\\Avatars\\6.png");
			pictureBox8->Image = Image::FromFile("Data\\Avatars\\7.png");
			pictureBox9->Image = Image::FromFile("Data\\Avatars\\8.png");
			pictureBox10->Image = Image::FromFile("Data\\Avatars\\9.png");
			pictureBox11->Image = Image::FromFile("Data\\Avatars\\10.png");
			pictureBox12->Image = Image::FromFile("Data\\Avatars\\11.png");
			pictureBox13->Image = Image::FromFile("Data\\Avatars\\12.png");
			pictureBox14->Image = Image::FromFile("Data\\Avatars\\13.png");
			pictureBox15->Image = Image::FromFile("Data\\Avatars\\14.png");
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\" + Service::user->img + ".png");
		}
		Panel^ panel10;
		Button^ button1;
		TextBox^ textBox2;
		Forms::Label^ label1;
		Forms::Label^ label2;
		PictureBox^ pictureBox1;
		PictureBox^ pictureBox2;
		PictureBox^ pictureBox3;
		PictureBox^ pictureBox4;
		PictureBox^ pictureBox5;
		PictureBox^ pictureBox6;
		PictureBox^ pictureBox7;
		PictureBox^ pictureBox8;
		PictureBox^ pictureBox9;
		PictureBox^ pictureBox10;
		PictureBox^ pictureBox11;
		PictureBox^ pictureBox12;
		PictureBox^ pictureBox13;
		PictureBox^ pictureBox14;
		PictureBox^ pictureBox15;
		PictureBox^ pictureBox16;
		PictureBox^ pictureBox17;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditProfile::typeid));
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->SuspendLayout();
			// 
			// panel10
			// 
			this->panel10->AutoScroll = true;
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->Controls->Add(this->pictureBox16);
			this->panel10->Controls->Add(this->pictureBox13);
			this->panel10->Controls->Add(this->pictureBox14);
			this->panel10->Controls->Add(this->pictureBox15);
			this->panel10->Controls->Add(this->pictureBox10);
			this->panel10->Controls->Add(this->pictureBox11);
			this->panel10->Controls->Add(this->pictureBox12);
			this->panel10->Controls->Add(this->pictureBox7);
			this->panel10->Controls->Add(this->pictureBox8);
			this->panel10->Controls->Add(this->pictureBox9);
			this->panel10->Controls->Add(this->pictureBox4);
			this->panel10->Controls->Add(this->pictureBox5);
			this->panel10->Controls->Add(this->pictureBox6);
			this->panel10->Controls->Add(this->pictureBox3);
			this->panel10->Controls->Add(this->pictureBox2);
			this->panel10->Controls->Add(this->pictureBox1);
			this->panel10->Location = System::Drawing::Point(213, 15);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(413, 332);
			this->panel10->TabIndex = 15;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(602, 117);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(26, 71);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 23;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(514, 213);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(82, 71);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 22;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &EditProfile::Pick13);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(514, 117);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(82, 71);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 21;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &EditProfile::Pick14);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(514, 19);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(82, 71);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 20;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &EditProfile::Pick15);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(399, 213);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(82, 71);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 19;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &EditProfile::Pick10);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(399, 117);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(82, 71);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 18;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &EditProfile::Pick11);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(399, 19);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(82, 71);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 17;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &EditProfile::Pick12);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(278, 213);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(82, 71);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 16;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &EditProfile::Pick7);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(278, 117);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(82, 71);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &EditProfile::Pick8);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(278, 19);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(82, 71);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 14;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &EditProfile::Pick9);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(154, 213);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(82, 71);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &EditProfile::Pick4);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(154, 117);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(82, 71);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &EditProfile::Pick5);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(154, 19);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(82, 71);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &EditProfile::Pick6);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(30, 213);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(82, 71);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &EditProfile::Pick3);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(30, 117);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(82, 71);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &EditProfile::Pick2);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(30, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(82, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &EditProfile::Pick1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(17, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 40);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Change password";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditProfile::ChangePassword);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(17, 263);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 29);
			this->textBox2->TabIndex = 11;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 225);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 26);
			this->label1->TabIndex = 14;
			this->label1->Text = L"New password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(13, 358);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 25;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(17, 34);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(162, 153);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 24;
			this->pictureBox17->TabStop = false;
			// 
			// EditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(655, 394);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"EditProfile";
			this->Opacity = 0.98;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit profile";
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Void ChangeImage(int a) 
		{
			String^ path = "Data\\Users.txt";
			ifstream f;
			f.open(Service::toCharPtr(path));
			if (!f.is_open())
				return;
			char buf[30];
			char* loginCh = Service::toCharPtr(Service::user->login);
			List<User^>^ list = gcnew List<User^>();
			while (!f.eof())
			{
				f.getline(buf, 30);
				if (strlen(buf) < 4)
					break;
				if (!(strcmp(strtok(buf, ":"), loginCh)))
				{
					User^ u = gcnew User();
					u->login = gcnew String(loginCh);
					u->psw = gcnew String(strtok(NULL, ":"));
					u->img = a + "";
					strtok(NULL, ":");
					list->Add(u);
				}
				else 
				{
					User^ u = gcnew User();
					u->login = gcnew String(buf);
					u->psw = gcnew String(strtok(NULL, ":"));
					u->img = gcnew String(strtok(NULL, ":"));
					list->Add(u);
				}
			}
			f.close();
			ofstream f3(Service::toCharPtr(path));
			for (int i = 0; i < list->Count; i++) 
			{
				f3.write(Service::toCharPtr(list[i]->login), list[i]->login->Length);
				f3.put(':');
				f3.write(Service::toCharPtr(list[i]->psw), list[i]->psw->Length);
				f3.put(':');
				f3.write(Service::toCharPtr(list[i]->img), list[i]->img->Length);
				f3.write("\n", 1);
			}
			f3.close();
			Service::user->img = a.ToString();
		}
		Void SetPassword(String^ s)
		{
			String^ path = "Data\\Users.txt";
			ifstream f;
			f.open(Service::toCharPtr(path));
			if (!f.is_open())
				return;
			char buf[30];
			char* loginCh = Service::toCharPtr(Service::user->login);
			List<User^>^ list = gcnew List<User^>();
			while (!f.eof())
			{
				f.getline(buf, 30);
				if (strlen(buf) < 4)
					break;
				if (!(strcmp(strtok(buf, ":"), loginCh)))
				{
					User^ u = gcnew User();
					u->login = gcnew String(loginCh);
					strtok(NULL, ":");
					u->psw = s->GetHashCode().ToString();;
					u->img = gcnew String(strtok(NULL, ":"));
					list->Add(u);
				}
				else 
				{
					User^ u = gcnew User();
					u->login = gcnew String(buf);
					u->psw = gcnew String(strtok(NULL, ":"));
					u->img = gcnew String(strtok(NULL, ":"));
					list->Add(u);
				}
			}
			f.close();
			ofstream f3(Service::toCharPtr(path));
			for (int i = 0; i < list->Count; i++) 
			{
				f3.write(Service::toCharPtr(list[i]->login), list[i]->login->Length);
				f3.put(':');
				f3.write(Service::toCharPtr(list[i]->psw), list[i]->psw->Length);
				f3.put(':');
				f3.write(Service::toCharPtr(list[i]->img), list[i]->img->Length);
				f3.write("\n", 1);
			}
			f3.close();
			label2->ForeColor = Color::Yellow;
			textBox2->Text = "";
			label2->Text = "Changed!";
		}
		Void Pick1(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\0.png");
			ChangeImage(0);
		}
		Void Pick2(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\1.png");
			ChangeImage(1);
		}
		Void Pick3(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\2.png");
			ChangeImage(2);
		}
		Void Pick6(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\5.png");
			ChangeImage(5);
		}
		Void Pick5(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\4.png");
			ChangeImage(4);
		}
		Void Pick4(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\3.png");
			ChangeImage(3);
		}
		Void Pick9(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\8.png");
			ChangeImage(8);
		}
		Void Pick8(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\7.png");
			ChangeImage(7);
		}
		Void Pick7(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\6.png");
			ChangeImage(6);
		}
		Void Pick12(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\11.png");
			ChangeImage(11);
		}
		Void Pick11(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\10.png");
			ChangeImage(10);
		}
		Void Pick10(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\9.png");
			ChangeImage(9);
		}
		Void Pick15(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\14.png");
			ChangeImage(14);
		}
		Void Pick14(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\13.png");
			ChangeImage(13);
		}
		Void Pick13(Object^ sender, EventArgs^ e) {
			pictureBox17->Image = Image::FromFile("Data\\Avatars\\12.png");
			ChangeImage(12);
		}
		Void ChangePassword(Object^ sender, EventArgs^ e) 
		{
			String^ password = textBox2->Text;
			if (password == "")
				return;
			if (password->Length < 6)
			{
				label2->ForeColor = Color::Red;
				label2->Text = "Entered password is smaller than 6 symbols !";
				return;
			}
			SetPassword(password);
		}
	};
}