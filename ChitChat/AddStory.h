#pragma once
#include <ctime>
#include "LoginForm.h"
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
	/// Summary for AddStory
	/// </summary>
	public ref class AddStory : public System::Windows::Forms::Form
	{
	public:
		AddStory(void)
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
		~AddStory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GoBackButton;
	protected:
	private: System::Windows::Forms::PictureBox^ PictureBox;
	private: System::Windows::Forms::Label^ UploadImageLabel;

	private: System::Windows::Forms::TextBox^ TextBox;
	private: System::Windows::Forms::Label^ StoryTextLabel;

	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStory::typeid));
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->UploadImageLabel = (gcnew System::Windows::Forms::Label());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->StoryTextLabel = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// GoBackButton
			// 
			this->GoBackButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->GoBackButton->FlatAppearance->BorderSize = 0;
			this->GoBackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GoBackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GoBackButton.Image")));
			this->GoBackButton->Location = System::Drawing::Point(12, 12);
			this->GoBackButton->Name = L"GoBackButton";
			this->GoBackButton->Size = System::Drawing::Size(43, 33);
			this->GoBackButton->TabIndex = 1;
			this->GoBackButton->UseVisualStyleBackColor = true;
			// 
			// PictureBox
			// 
			this->PictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox.Image")));
			this->PictureBox->Location = System::Drawing::Point(12, 57);
			this->PictureBox->Name = L"PictureBox";
			this->PictureBox->Size = System::Drawing::Size(309, 239);
			this->PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox->TabIndex = 2;
			this->PictureBox->TabStop = false;
			// 
			// UploadImageLabel
			// 
			this->UploadImageLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UploadImageLabel->ForeColor = System::Drawing::Color::Black;
			this->UploadImageLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UploadImageLabel.Image")));
			this->UploadImageLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->UploadImageLabel->Location = System::Drawing::Point(160, 26);
			this->UploadImageLabel->Name = L"UploadImageLabel";
			this->UploadImageLabel->Size = System::Drawing::Size(161, 28);
			this->UploadImageLabel->TabIndex = 3;
			this->UploadImageLabel->Text = L"Upload Image";
			this->UploadImageLabel->Click += gcnew System::EventHandler(this, &AddStory::Label1_Click);
			// 
			// TextBox
			// 
			this->TextBox->BackColor = System::Drawing::Color::White;
			this->TextBox->Location = System::Drawing::Point(12, 327);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(309, 43);
			this->TextBox->TabIndex = 4;
			// 
			// StoryTextLabel
			// 
			this->StoryTextLabel->BackColor = System::Drawing::Color::Transparent;
			this->StoryTextLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StoryTextLabel->ForeColor = System::Drawing::Color::Black;
			this->StoryTextLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StoryTextLabel.Image")));
			this->StoryTextLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->StoryTextLabel->Location = System::Drawing::Point(12, 361);
			this->StoryTextLabel->Name = L"StoryTextLabel";
			this->StoryTextLabel->Size = System::Drawing::Size(136, 23);
			this->StoryTextLabel->TabIndex = 5;
			this->StoryTextLabel->Text = L"Story Text";
			// 
			// AddButton
			// 
			this->AddButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->AddButton->FlatAppearance->BorderSize = 0;
			this->AddButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddButton.Image")));
			this->AddButton->Location = System::Drawing::Point(255, 385);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(66, 54);
			this->AddButton->TabIndex = 6;
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &AddStory::AddButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// AddStory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(333, 451);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->StoryTextLabel);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->UploadImageLabel);
			this->Controls->Add(this->PictureBox);
			this->Controls->Add(this->GoBackButton);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Name = L"AddStory";
			this->Text = L"AddStory";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Image variables
	Image^ Img;
	MemoryStream^ m = gcnew MemoryStream();
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStory::typeid));
		//taking image from file
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			PictureBox->Image = Image::FromFile(openFileDialog1->FileName);
			Img = PictureBox->Image;
			Img->Save(m, Imaging::ImageFormat::Jpeg);
		}
		else
		{
			Img = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox.Image")));
			Img->Save(m, Imaging::ImageFormat::Jpeg);
		}
	
	}


private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String ^ Text = this->TextBox->Text;
	//getting time and convert it to string and int
	time_t TimeDate = time(0);
	char* c = ctime(&TimeDate);
	String ^ STimeDate = gcnew String(c);
	int sid = (int) TimeDate;


	if (Text->Length == 0 && Img->ToString()->Length == 0)
	{
		MessageBox::Show("Please enter Image path or Text",
			"Image path and Text are empty !!", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "INSERT INTO Stories (SID ,Text, Image,TimeDate, CID) VALUES (@SID, @Text, @Image, @TimeDate, @CID);";
		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@SID", sid);
		command.Parameters->AddWithValue("@Text", Text);
		command.Parameters->AddWithValue("@Image", m->ToArray());
		command.Parameters->AddWithValue("@TimeDate", STimeDate);
		command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
		command.ExecuteNonQuery();

		sqlConn.Close();
		this->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message,
			"Database Connection Error", MessageBoxButtons::OK);
	}
}
};
}
