#pragma once
#include "LoginForm.h"
#include <cliext/list>
#include "Story.h"
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace	System::Collections::Generic;
	using namespace cliext;

	/// <summary>
	/// Summary for MyStory
	/// </summary>
	public ref class MyStory : public System::Windows::Forms::Form
	{
	public:
		MyStory(void)
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
		~MyStory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::PictureBox^ MyPictureBox;

	private: System::Windows::Forms::Label^ MyStoryLabel1;
	private: System::Windows::Forms::Label^ MyStoryLabel2;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::PictureBox^ StoryImage;
	private: System::Windows::Forms::Label^ StoryText;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyStory::typeid));
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->MyPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->MyStoryLabel1 = (gcnew System::Windows::Forms::Label());
			this->MyStoryLabel2 = (gcnew System::Windows::Forms::Label());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->StoryImage = (gcnew System::Windows::Forms::PictureBox());
			this->StoryText = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoryImage))->BeginInit();
			this->SuspendLayout();
			// 
			// GoBackButton
			// 
			this->GoBackButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->GoBackButton->FlatAppearance->BorderSize = 0;
			this->GoBackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GoBackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GoBackButton.Image")));
			this->GoBackButton->Location = System::Drawing::Point(32, 12);
			this->GoBackButton->Name = L"GoBackButton";
			this->GoBackButton->Size = System::Drawing::Size(43, 33);
			this->GoBackButton->TabIndex = 1;
			this->GoBackButton->UseVisualStyleBackColor = true;
			// 
			// MyPictureBox
			// 
			this->MyPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MyPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyPictureBox.Image")));
			this->MyPictureBox->Location = System::Drawing::Point(32, 51);
			this->MyPictureBox->Name = L"MyPictureBox";
			this->MyPictureBox->Size = System::Drawing::Size(58, 45);
			this->MyPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->MyPictureBox->TabIndex = 5;
			this->MyPictureBox->TabStop = false;
			// 
			// MyStoryLabel1
			// 
			this->MyStoryLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel1->Location = System::Drawing::Point(106, 54);
			this->MyStoryLabel1->Name = L"MyStoryLabel1";
			this->MyStoryLabel1->Size = System::Drawing::Size(88, 22);
			this->MyStoryLabel1->TabIndex = 6;
			this->MyStoryLabel1->Text = L"My Story";
			this->MyStoryLabel1->Click += gcnew System::EventHandler(this, &MyStory::MyStoryLabel1_Click);
			// 
			// MyStoryLabel2
			// 
			this->MyStoryLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel2->Font = (gcnew System::Drawing::Font(L"MV Boli", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel2->Location = System::Drawing::Point(126, 76);
			this->MyStoryLabel2->Name = L"MyStoryLabel2";
			this->MyStoryLabel2->Size = System::Drawing::Size(186, 23);
			this->MyStoryLabel2->TabIndex = 7;
			this->MyStoryLabel2->Text = L"____________";
			// 
			// Delete
			// 
			this->Delete->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Delete->FlatAppearance->BorderSize = 0;
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->Location = System::Drawing::Point(269, 12);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(43, 33);
			this->Delete->TabIndex = 8;
			this->Delete->UseVisualStyleBackColor = true;
			// 
			// StoryImage
			// 
			this->StoryImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->StoryImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StoryImage.Image")));
			this->StoryImage->Location = System::Drawing::Point(32, 112);
			this->StoryImage->Name = L"StoryImage";
			this->StoryImage->Size = System::Drawing::Size(280, 201);
			this->StoryImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->StoryImage->TabIndex = 9;
			this->StoryImage->TabStop = false;
			// 
			// StoryText
			// 
			this->StoryText->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->StoryText->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StoryText->Location = System::Drawing::Point(29, 334);
			this->StoryText->Name = L"StoryText";
			this->StoryText->Size = System::Drawing::Size(283, 32);
			this->StoryText->TabIndex = 10;
			this->StoryText->Text = L"hello its abdulrhman";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(284, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 33);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(246, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 33);
			this->button2->TabIndex = 12;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyStory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 425);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->StoryText);
			this->Controls->Add(this->StoryImage);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->MyStoryLabel2);
			this->Controls->Add(this->MyStoryLabel1);
			this->Controls->Add(this->MyPictureBox);
			this->Controls->Add(this->GoBackButton);
			this->Name = L"MyStory";
			this->Text = L"MyStory";
			this->Load += gcnew System::EventHandler(this, &MyStory::MyStory_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoryImage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyStoryLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    //queue of my stories
	private: List<Story^>^ myStory;
	private:Story^ story = nullptr;
    private: Image^ img;
    private:static int i = 0;
    private: bool flag = 0;
private: System::Void MyStory_Load(System::Object^ sender, System::EventArgs^ e) {
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyStory::typeid));
	try {
		String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM Stories WHERE CID = @CID";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

		SqlDataReader^ reader = command.ExecuteReader();
		myStory = gcnew List<Story^>();
		while (reader->Read())
		{
			story = gcnew Story;
			story->SID = reader->GetInt32(0);
			if (!reader->IsDBNull(1))
			{
				story->Img = (array<Byte>^)(reader[1]);
			}
			if (!reader->IsDBNull(2))
			{
				story->Text = reader->GetString(2);
			}
			else
			{
				story->Text = nullptr;
			}
			story->TimeDate = reader->GetString(3);
			story->CID = reader->GetInt32(4);
			myStory->Add(story);
		}
		reader->Close();
		//getting my profile image
		//String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
		//SqlCommand command1(sqlQuery1, % sqlConn);
		//command1.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

		//SqlDataReader^ reader1 = command1.ExecuteReader();

		//if (reader1->Read())
		{
		//	if (!reader1->IsDBNull(0))
			{
		//		MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
		//		img = Image::FromStream(m);
			}
		}
		//reader1->Close();
		sqlConn.Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
	}
	if (myStory->Count != 0)
	{
	//	if (img != nullptr)
		//{
		//	MyPictureBox->Image = img;
		//}
		MyStoryLabel2->Text = myStory[i]->TimeDate;
		if (myStory[i]->Text != nullptr)
		{
			StoryText->Text = myStory[i]->Text;
		}
		if (!flag)
		{
			MemoryStream^ m = gcnew MemoryStream(myStory[i]->Img);
			StoryImage->Image = Image::FromStream(m);
		}
	}
}
};
}
