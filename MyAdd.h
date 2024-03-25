#pragma once
#include "Day.cpp"

namespace CLR {
	using namespace System;
	using namespace System::Data;
	using namespace System::Windows;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;

	public ref class MyAdd : public Form
	{
	public:
		List<Day_^>^ list;
		int index;
		MyAdd(void)
		{
			InitializeComponent();
		}
	protected:
		~MyAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		PictureBox^ pictureBox1;
		ComboBox^ comboBox1;
		Button^ button2;
		TextBox^ textBox2;
		Forms::Label^ label1;
		Forms::Label^ label2;
		Forms::Label^ label4;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyAdd::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(33, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 17;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"business", L"household", L"studying", L"other" });
			this->comboBox1->Location = System::Drawing::Point(24, 118);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(235, 28);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyAdd::SetCategoryIcon);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(19, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 26);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Type";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.8F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(24, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 40);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Add task";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyAdd::Creating);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(24, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(235, 29);
			this->textBox2->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(19, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 26);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Title";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(325, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(102, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// MyAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(484, 261);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyAdd";
			this->Opacity = 0.98;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add task";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

		Void Creating(Object^ sender, EventArgs^ e) 
		{
			if (textBox2->Text != "" && comboBox1->SelectedIndex != -1) 
			{
				Task_^ t = gcnew Task_();
				t->IsChecked = false;
				t->Text = textBox2->Text;
				t->Type = comboBox1->SelectedItem->ToString();
				list[index]->listForBox->Add(t->Text);
				list[index]->list->Add(t);
				this->Close();
			}
			else label4->Text = "Fill all the fields";
		}
		Void SetCategoryIcon(Object^ sender, EventArgs^ e) 
		{

			if (comboBox1->SelectedItem->ToString()[0] == Char('s'))
				pictureBox1->Image = Image::FromFile("Data\\study.png");
			if (comboBox1->SelectedItem->ToString()[0] == Char('o'))
				pictureBox1->Image = Image::FromFile("Data\\hh.png");
			if (comboBox1->SelectedItem->ToString()[0] == Char('h'))
				pictureBox1->Image = Image::FromFile("Data\\home.png");
			if (comboBox1->SelectedItem->ToString()[0] == Char('b'))
				pictureBox1->Image = Image::FromFile("Data\\business.png");
		}
	};
}