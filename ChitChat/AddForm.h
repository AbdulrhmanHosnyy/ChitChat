#pragma once
#include "LoginForm.h";

namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
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
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tbFnumber;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddForm::typeid));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbFnumber = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sitka Small", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(31, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(405, 85);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Add Friend";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(84, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(274, 57);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Friend Number";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SlateGray;
			this->panel3->Controls->Add(this->tbFnumber);
			this->panel3->Location = System::Drawing::Point(44, 218);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(413, 57);
			this->panel3->TabIndex = 30;
			// 
			// tbFnumber
			// 
			this->tbFnumber->BackColor = System::Drawing::Color::SlateGray;
			this->tbFnumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbFnumber->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFnumber->ForeColor = System::Drawing::Color::White;
			this->tbFnumber->Location = System::Drawing::Point(9, 14);
			this->tbFnumber->Name = L"tbFnumber";
			this->tbFnumber->Size = System::Drawing::Size(371, 27);
			this->tbFnumber->TabIndex = 6;
			this->tbFnumber->Text = L"Friend Number";
			// 
			// btnAdd
			// 
			this->btnAdd->AutoSize = true;
			this->btnAdd->BackColor = System::Drawing::Color::Orange;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Arial", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(53, 299);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(376, 45);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddForm::btnAdd_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->AutoSize = true;
			this->btnCancel->BackColor = System::Drawing::Color::Orange;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(53, 350);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(376, 45);
			this->btnCancel->TabIndex = 31;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddForm::btnCancel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 467);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 117);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(472, 615);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Name = L"AddForm";
			this->Text = L"Add Contacts";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ Pnumber = tbFnumber->Text;
		if (Pnumber->Length == 0) {
			MessageBox::Show("Please enter phone number");
		}
		try {
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery1 = "SELECT CID FROM Contacts WHERE Pnumber=@Pnumber;";

			int id;
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@Pnumber", Pnumber);
			SqlDataReader^ reader = command1.ExecuteReader();
			if (reader->Read())
			{
				id = reader->GetInt32(0);
			}

			sqlConn.Close();
			sqlConn.Open();

			String^ sqlQuery2 = "INSERT INTO HasContacts (CID , FID) VALUES (@CID , @FID);";

			SqlCommand command2(sqlQuery2, % sqlConn);
			command2.Parameters->AddWithValue("@CID ", LoginForm::cont->Id);
			command2.Parameters->AddWithValue("@FID ", id);

			command2.ExecuteNonQuery();

			sqlConn.Close();
			MessageBox::Show("Adding Successfully");
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to Add this Freind");
		}
	}
	};
}