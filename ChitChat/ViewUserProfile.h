#pragma once

namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for ViewUserProfile
	/// </summary>
	public ref class ViewUserProfile : public System::Windows::Forms::Form
	{
	public:
		ViewUserProfile(void)
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
		~ViewUserProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::Label^ FullNameLabel;
	private: System::Windows::Forms::PictureBox^ UserPhoto;


	private: System::Windows::Forms::Label^ PhoneNumberLabel;
	private: System::Windows::Forms::Label^ BioLabel;


	private: System::Windows::Forms::Label^ FNameLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ LastSeenLabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewUserProfile::typeid));
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->FullNameLabel = (gcnew System::Windows::Forms::Label());
			this->UserPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->PhoneNumberLabel = (gcnew System::Windows::Forms::Label());
			this->BioLabel = (gcnew System::Windows::Forms::Label());
			this->FNameLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LastSeenLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// GoBackButton
			// 
			this->GoBackButton->BackColor = System::Drawing::Color::Transparent;
			this->GoBackButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->GoBackButton->FlatAppearance->BorderSize = 0;
			this->GoBackButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->GoBackButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->GoBackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GoBackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GoBackButton.Image")));
			this->GoBackButton->Location = System::Drawing::Point(12, 12);
			this->GoBackButton->Name = L"GoBackButton";
			this->GoBackButton->Size = System::Drawing::Size(38, 33);
			this->GoBackButton->TabIndex = 46;
			this->GoBackButton->UseVisualStyleBackColor = false;
			this->GoBackButton->Click += gcnew System::EventHandler(this, &ViewUserProfile::GoBackButton_Click);
			// 
			// FullNameLabel
			// 
			this->FullNameLabel->AutoSize = true;
			this->FullNameLabel->BackColor = System::Drawing::Color::Transparent;
			this->FullNameLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FullNameLabel->ForeColor = System::Drawing::Color::White;
			this->FullNameLabel->Location = System::Drawing::Point(129, 12);
			this->FullNameLabel->Name = L"FullNameLabel";
			this->FullNameLabel->Size = System::Drawing::Size(129, 28);
			this->FullNameLabel->TabIndex = 47;
			this->FullNameLabel->Text = L"User Name";
			// 
			// UserPhoto
			// 
			this->UserPhoto->BackColor = System::Drawing::Color::Transparent;
			this->UserPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->UserPhoto->Location = System::Drawing::Point(39, 92);
			this->UserPhoto->Margin = System::Windows::Forms::Padding(2);
			this->UserPhoto->Name = L"UserPhoto";
			this->UserPhoto->Size = System::Drawing::Size(312, 194);
			this->UserPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->UserPhoto->TabIndex = 48;
			this->UserPhoto->TabStop = false;
			// 
			// PhoneNumberLabel
			// 
			this->PhoneNumberLabel->AutoSize = true;
			this->PhoneNumberLabel->BackColor = System::Drawing::Color::Transparent;
			this->PhoneNumberLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhoneNumberLabel->ForeColor = System::Drawing::Color::White;
			this->PhoneNumberLabel->Location = System::Drawing::Point(97, 336);
			this->PhoneNumberLabel->Name = L"PhoneNumberLabel";
			this->PhoneNumberLabel->Size = System::Drawing::Size(173, 28);
			this->PhoneNumberLabel->TabIndex = 49;
			this->PhoneNumberLabel->Text = L"01068638992";
			// 
			// BioLabel
			// 
			this->BioLabel->AutoSize = true;
			this->BioLabel->BackColor = System::Drawing::Color::Transparent;
			this->BioLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BioLabel->ForeColor = System::Drawing::Color::White;
			this->BioLabel->Location = System::Drawing::Point(97, 407);
			this->BioLabel->Name = L"BioLabel";
			this->BioLabel->Size = System::Drawing::Size(243, 25);
			this->BioLabel->TabIndex = 50;
			this->BioLabel->Text = L"Hey,Iam using ChitChat";
			// 
			// FNameLabel
			// 
			this->FNameLabel->BackColor = System::Drawing::Color::Transparent;
			this->FNameLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FNameLabel->ForeColor = System::Drawing::Color::Transparent;
			this->FNameLabel->Location = System::Drawing::Point(20, 302);
			this->FNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->FNameLabel->Name = L"FNameLabel";
			this->FNameLabel->Size = System::Drawing::Size(103, 24);
			this->FNameLabel->TabIndex = 51;
			this->FNameLabel->Text = L"PhoneNumber";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(20, 383);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 24);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Bio";
			// 
			// LastSeenLabel
			// 
			this->LastSeenLabel->AutoSize = true;
			this->LastSeenLabel->BackColor = System::Drawing::Color::Transparent;
			this->LastSeenLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastSeenLabel->ForeColor = System::Drawing::Color::White;
			this->LastSeenLabel->Location = System::Drawing::Point(184, 62);
			this->LastSeenLabel->Name = L"LastSeenLabel";
			this->LastSeenLabel->Size = System::Drawing::Size(115, 17);
			this->LastSeenLabel->TabIndex = 53;
			this->LastSeenLabel->Text = L"Last Seen Date";
			// 
			// ViewUserProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(405, 487);
			this->Controls->Add(this->LastSeenLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->FNameLabel);
			this->Controls->Add(this->BioLabel);
			this->Controls->Add(this->PhoneNumberLabel);
			this->Controls->Add(this->UserPhoto);
			this->Controls->Add(this->FullNameLabel);
			this->Controls->Add(this->GoBackButton);
			this->Name = L"ViewUserProfile";
			this->Text = L"ViewUserProfile";
			this->Load += gcnew System::EventHandler(this, &ViewUserProfile::ViewUserProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewUserProfile_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT Fname , Lname , Pnumber , LastSeen FROM Contacts WHERE CID = '7';";
			SqlCommand command(sqlQuery, % sqlConn);
			//command.Parameters->AddWithValue("@CID", );

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read())
			{
				if (!reader->IsDBNull(0))
				{
					this->FullNameLabel->Text = reader->GetString(0);
					this->FullNameLabel->Text += " ";
				}
				if (!reader->IsDBNull(1))
				{
					this->FullNameLabel->Text += reader->GetString(1);
				}
				this->PhoneNumberLabel->Text = reader->GetString(2);
				if(!reader->IsDBNull(3))
				this->LastSeenLabel->Text = reader->GetString(3);
			}
			reader->Close();

			String^ sqlQuery1 = "SELECT Bio , Image FROM UserProfile WHERE CID = '7';";
			SqlCommand command1(sqlQuery1, % sqlConn);
			//command1.Parameters->AddWithValue("@CID", );

			SqlDataReader^ reader1 = command1.ExecuteReader();

			if (reader1->Read())
			{
				this->BioLabel->Text = reader1->GetString(0);
				if (!reader1->IsDBNull(1))
				{
					MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[1]);
					this->UserPhoto->Image = Image::FromStream(m);
				}
			}
		}
		catch (Exception^ e)
		{

			MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);

		}
	}
	private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
