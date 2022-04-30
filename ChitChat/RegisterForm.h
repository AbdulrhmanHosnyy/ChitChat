#pragma once
#include "Contacts.h"

namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ tbFname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbLname;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbPnumber;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbConfirmpassword;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnSubmit;

	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label10;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->tbFname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbLname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbPnumber = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmpassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tbFname
			// 
			this->tbFname->BackColor = System::Drawing::Color::SlateGray;
			this->tbFname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbFname->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFname->ForeColor = System::Drawing::Color::White;
			this->tbFname->Location = System::Drawing::Point(24, 15);
			this->tbFname->Name = L"tbFname";
			this->tbFname->Size = System::Drawing::Size(312, 27);
			this->tbFname->TabIndex = 6;
			this->tbFname->Text = L"First name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(14, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 39);
			this->label3->TabIndex = 5;
			this->label3->Text = L"First name";
			// 
			// tbLname
			// 
			this->tbLname->BackColor = System::Drawing::Color::SlateGray;
			this->tbLname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbLname->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLname->ForeColor = System::Drawing::Color::White;
			this->tbLname->Location = System::Drawing::Point(22, 13);
			this->tbLname->Name = L"tbLname";
			this->tbLname->Size = System::Drawing::Size(312, 27);
			this->tbLname->TabIndex = 8;
			this->tbLname->Text = L"Last name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(14, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 39);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last name";
			// 
			// tbPnumber
			// 
			this->tbPnumber->BackColor = System::Drawing::Color::SlateGray;
			this->tbPnumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPnumber->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPnumber->ForeColor = System::Drawing::Color::White;
			this->tbPnumber->Location = System::Drawing::Point(22, 15);
			this->tbPnumber->Name = L"tbPnumber";
			this->tbPnumber->Size = System::Drawing::Size(312, 27);
			this->tbPnumber->TabIndex = 10;
			this->tbPnumber->Text = L"Phone number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(0, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 39);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Phone number";
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::SlateGray;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::Color::White;
			this->tbPassword->Location = System::Drawing::Point(22, 15);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(312, 27);
			this->tbPassword->TabIndex = 12;
			this->tbPassword->Text = L"Password";
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(14, 383);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 39);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Password";
			// 
			// tbConfirmpassword
			// 
			this->tbConfirmpassword->BackColor = System::Drawing::Color::SlateGray;
			this->tbConfirmpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbConfirmpassword->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmpassword->ForeColor = System::Drawing::Color::White;
			this->tbConfirmpassword->Location = System::Drawing::Point(22, 19);
			this->tbConfirmpassword->Name = L"tbConfirmpassword";
			this->tbConfirmpassword->PasswordChar = '*';
			this->tbConfirmpassword->Size = System::Drawing::Size(312, 27);
			this->tbConfirmpassword->TabIndex = 14;
			this->tbConfirmpassword->Text = L"Password";
			this->tbConfirmpassword->UseSystemPasswordChar = true;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(14, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 38);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Confirm ";
			// 
			// btnSubmit
			// 
			this->btnSubmit->AutoSize = true;
			this->btnSubmit->BackColor = System::Drawing::Color::Orange;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Arial", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->Location = System::Drawing::Point(81, 518);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(376, 45);
			this->btnSubmit->TabIndex = 15;
			this->btnSubmit->Text = L"Confirm";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &RegisterForm::btnSubmit_Click);
			// 
			// llLogin
			// 
			this->llLogin->BackColor = System::Drawing::Color::Orange;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->llLogin->LinkColor = System::Drawing::Color::Black;
			this->llLogin->Location = System::Drawing::Point(107, 505);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(88, 36);
			this->llLogin->TabIndex = 17;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btnSubmit);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(332, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 603);
			this->panel1->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(13, 477);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 38);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Password";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::SlateGray;
			this->panel7->Controls->Add(this->tbConfirmpassword);
			this->panel7->Location = System::Drawing::Point(171, 448);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(376, 57);
			this->panel7->TabIndex = 30;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::SlateGray;
			this->panel6->Controls->Add(this->tbPnumber);
			this->panel6->Location = System::Drawing::Point(171, 307);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(376, 57);
			this->panel6->TabIndex = 30;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::SlateGray;
			this->panel5->Controls->Add(this->tbPassword);
			this->panel5->Location = System::Drawing::Point(171, 376);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(376, 57);
			this->panel5->TabIndex = 29;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SlateGray;
			this->panel4->Controls->Add(this->tbLname);
			this->panel4->Location = System::Drawing::Point(171, 233);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(376, 57);
			this->panel4->TabIndex = 29;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SlateGray;
			this->panel3->Controls->Add(this->tbFname);
			this->panel3->Location = System::Drawing::Point(171, 158);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(376, 57);
			this->panel3->TabIndex = 28;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sitka Small", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(120, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(322, 101);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Sign up";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->llLogin);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(326, 603);
			this->panel2->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(25, 441);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 64);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Already have an Account\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(12, 296);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(296, 96);
			this->label7->TabIndex = 25;
			this->label7->Text = L"It’s about Thinking not Typing.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Small", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(25, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 52);
			this->label8->TabIndex = 24;
			this->label8->Text = L"CHITCHAT";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(45, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 178);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(27, 262);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(882, 603);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria Math", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(10, 49, 10, 49);
			this->Name = L"RegisterForm";
			this->Text = L"Sign up";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

	public:Contacts^ cont = nullptr;
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Fname = tbFname->Text;
		String^ Lname = tbLname->Text;
		String^ Pnumber = tbPnumber->Text;
		String^ Password = tbPassword->Text;
		String^ ConfirmPassword = tbConfirmpassword->Text;

		if (Fname->Length == 0 || Lname->Length == 0 ||
			Pnumber->Length == 0 || Password->Length == 0) {
			MessageBox::Show("Please enter all fields");
			return;
		}

		if (String::Compare(Password, ConfirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match");
			return;
		}

		try {
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO Contacts (Fname , Lname , Pnumber , Password) VALUES (@Fname , @Lname , @Pnumber , @Password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Fname", Fname);
			command.Parameters->AddWithValue("@Lname", Lname);
			command.Parameters->AddWithValue("@Pnumber", Pnumber);
			command.Parameters->AddWithValue("@Password", Password);

			command.ExecuteNonQuery();
			cont = gcnew Contacts;
			cont->Fname = Fname;
			cont->Lname = Lname;
			cont->Pnumber = Pnumber;
			cont->Password = Password;

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user");
		}
	}
	};
}
