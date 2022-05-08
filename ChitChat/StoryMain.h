#pragma once
#include "Contacts.h"
#include "LoginForm.h"
#include <cliext/list>
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	using namespace	System::Collections::Generic;

	/// <summary>
	/// Summary for StoryMain
	/// </summary>
	public ref class StoryMain : public System::Windows::Forms::Form
	{
	public:
		StoryMain(void)
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
		~StoryMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::Button^ AddStoryButton;
	private: System::Windows::Forms::Button^ MyStoryButton;
	private: System::Windows::Forms::Label^ MyStoryLabel1;
	private: System::Windows::Forms::Label^ MyStoryLabel2;
	private: System::Windows::Forms::PictureBox^ MyStoryPictureBox;
		   //Friend components
	private: System::Windows::Forms::PictureBox^ FriendStoryPictureBox;
	private: System::Windows::Forms::Label^ FriendStoryLabel1;
	private: System::Windows::Forms::Label^ FriendStoryLabel2;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StoryMain::typeid));
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->AddStoryButton = (gcnew System::Windows::Forms::Button());
			this->MyStoryButton = (gcnew System::Windows::Forms::Button());
			this->MyStoryLabel1 = (gcnew System::Windows::Forms::Label());
			this->MyStoryLabel2 = (gcnew System::Windows::Forms::Label());
			this->MyStoryPictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyStoryPictureBox))->BeginInit();
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
			this->GoBackButton->TabIndex = 0;
			this->GoBackButton->UseVisualStyleBackColor = true;
			// 
			// AddStoryButton
			// 
			this->AddStoryButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->AddStoryButton->FlatAppearance->BorderSize = 0;
			this->AddStoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddStoryButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddStoryButton.Image")));
			this->AddStoryButton->Location = System::Drawing::Point(243, 2);
			this->AddStoryButton->Name = L"AddStoryButton";
			this->AddStoryButton->Size = System::Drawing::Size(78, 66);
			this->AddStoryButton->TabIndex = 1;
			this->AddStoryButton->UseVisualStyleBackColor = true;
			// 
			// MyStoryButton
			// 
			this->MyStoryButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->MyStoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MyStoryButton->Location = System::Drawing::Point(24, 94);
			this->MyStoryButton->Name = L"MyStoryButton";
			this->MyStoryButton->Size = System::Drawing::Size(284, 65);
			this->MyStoryButton->TabIndex = 2;
			this->MyStoryButton->UseVisualStyleBackColor = true;
			// 
			// MyStoryLabel1
			// 
			this->MyStoryLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel1->Location = System::Drawing::Point(115, 104);
			this->MyStoryLabel1->Name = L"MyStoryLabel1";
			this->MyStoryLabel1->Size = System::Drawing::Size(88, 22);
			this->MyStoryLabel1->TabIndex = 3;
			this->MyStoryLabel1->Text = L"My Story";
			// 
			// MyStoryLabel2
			// 
			this->MyStoryLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel2->Font = (gcnew System::Drawing::Font(L"MV Boli", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel2->Location = System::Drawing::Point(115, 126);
			this->MyStoryLabel2->Name = L"MyStoryLabel2";
			this->MyStoryLabel2->Size = System::Drawing::Size(186, 23);
			this->MyStoryLabel2->TabIndex = 5;
			this->MyStoryLabel2->Text = L"There Is No Story To Show";
			// 
			// MyStoryPictureBox
			// 
			this->MyStoryPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyStoryPictureBox.Image")));
			this->MyStoryPictureBox->Location = System::Drawing::Point(37, 104);
			this->MyStoryPictureBox->Name = L"MyStoryPictureBox";
			this->MyStoryPictureBox->Size = System::Drawing::Size(58, 45);
			this->MyStoryPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->MyStoryPictureBox->TabIndex = 4;
			this->MyStoryPictureBox->TabStop = false;
			// 
			// StoryMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(336, 440);
			this->Controls->Add(this->MyStoryLabel2);
			this->Controls->Add(this->MyStoryPictureBox);
			this->Controls->Add(this->MyStoryLabel1);
			this->Controls->Add(this->MyStoryButton);
			this->Controls->Add(this->AddStoryButton);
			this->Controls->Add(this->GoBackButton);
			this->Name = L"StoryMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StoryMain";
			this->Load += gcnew System::EventHandler(this, &StoryMain::StoryMain_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyStoryPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Creating a list to store friend ids inside
	public: static List<int>^ FriendID;
	private: System::Void StoryMain_Load(System::Object^ sender, System::EventArgs^ e) {
		//Changing the date of the story button if the user has any story
		try
		{
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT TimeDate FROM Stories WHERE CID = @CID;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read())
			{
				if (!reader->IsDBNull(0))
				{
					MyStoryLabel2->Text = reader->GetString(0);
				}
			}
			reader->Close();

			//Changing the image of the story button if the user has any story
			String^ sqlQuery1 = "SELECT Image FROM Stories WHERE CID = @CID;";
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

			SqlDataReader^ reader1 = command1.ExecuteReader();

			if (reader1->Read())
			{
				if (!reader1->IsDBNull(0))
				{
					MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
					MyStoryPictureBox->Image = Image::FromStream(m);
				}
			}
			reader1->Close();

			//Saving friends id in a list
			String^ sqlQuery2 = "SELECT FID FROM HasContacts WHERE CID = @CID";
			SqlCommand command2(sqlQuery2, % sqlConn);
			command2.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

			SqlDataReader^ reader2 = command2.ExecuteReader();
			FriendID = gcnew List<int>();
			while (reader2->Read())
			{
				if (reader2->HasRows)
				{
					FriendID->Add(reader2->GetInt32(0));
				}
			}
			reader2->Close();
			//Saving friends id in a list
			String^ sqlQuery3 = "SELECT CID FROM HasContacts WHERE FID = @FID";
			SqlCommand command3(sqlQuery3, % sqlConn);
			command3.Parameters->AddWithValue("@FID", LoginForm::cont->Id);

			SqlDataReader^ reader3 = command3.ExecuteReader();
			while (reader3->Read())
			{
				if (reader3->HasRows)
				{
					FriendID->Add(reader3->GetInt32(0));
				}
			}
			reader3->Close();

			sqlConn.Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
		}		
		
	//Showing friends story buttons
	    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StoryMain::typeid));
	    int y = 165;
		for (int i = 0; i < FriendID->Count; i++)
		{
			String^ name = "________";
			String^ TimeDate = "________";
			MemoryStream^ m = nullptr;
			Image^ img = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyStoryPictureBox.Image")));
			try
			{
				//Getting the name of the user who has story i
				String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT Fname , Lname FROM Contacts WHERE CID = @CID;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@CID", FriendID[i]);

				SqlDataReader^ reader = command.ExecuteReader();

				if (reader->Read())
				{
					if (!reader->IsDBNull(0) || !reader->IsDBNull(1))
					{
						Name = reader->GetString(0);
						Name += " ";
						Name += reader->GetString(1);
					}
				}
				reader->Close();

				String^ sqlQuery1 = "SELECT TimeDate FROM Stories WHERE CID = @CID;";
				SqlCommand command1(sqlQuery1, % sqlConn);
				command1.Parameters->AddWithValue("@CID", FriendID[i]);

				SqlDataReader^ reader1 = command1.ExecuteReader();

				if (reader1->Read())
				{
					if (!reader1->IsDBNull(0))
					{
						TimeDate = reader1->GetString(0);
					}
				}
				reader1->Close();

				//Changing the image of the user story button if the user has any story
				//String^ sqlQuery2 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
				//SqlCommand command2(sqlQuery2, % sqlConn);
				//command2.Parameters->AddWithValue("@CID", FriendID[i]);

				//SqlDataReader^ reader2 = command2.ExecuteReader();

				//if (reader2->Read())
				{
				//	if (!reader2->IsDBNull(0))
					{
			//			m = gcnew MemoryStream((array<Byte>^)reader2[0]);
				//		img = Image::FromStream(m);
					}
				}
				//reader2->Close();

				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
			}

			Button^ FriendStoryButton = gcnew Button();
			this->FriendStoryPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->FriendStoryLabel1 = (gcnew System::Windows::Forms::Label());
			this->FriendStoryLabel2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FriendStoryPictureBox))->EndInit();
			FriendStoryButton->SuspendLayout();

				
			// 
			// FriendStoryPictureBox
			//
		
			this->FriendStoryPictureBox->Image = img;
			this->FriendStoryPictureBox->Location = System::Drawing::Point(15, 15);
			this->FriendStoryPictureBox->Name = L"FriendStoryPictureBox";
			this->FriendStoryPictureBox->Size = System::Drawing::Size(58, 45);
			this->FriendStoryPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->FriendStoryPictureBox->TabIndex = 4;
			this->FriendStoryPictureBox->TabStop = false;

			// 
			// FriendStoryLabel1
			// 
			this->FriendStoryLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FriendStoryLabel1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FriendStoryLabel1->Location = System::Drawing::Point(90, 10);
			this->FriendStoryLabel1->Name = L"FriendStoryLabel1";
			this->FriendStoryLabel1->Size = System::Drawing::Size(88, 22);
			this->FriendStoryLabel1->TabIndex = 3;
			if (Name != nullptr)
			{
				this->FriendStoryLabel1->Text = Name;
			}
			// 
			// FriendStoryLabel2
			// 
			this->FriendStoryLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FriendStoryLabel2->Font = (gcnew System::Drawing::Font(L"MV Boli", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FriendStoryLabel2->Location = System::Drawing::Point(90, 32);
			this->FriendStoryLabel2->Name = L"FriendStoryLabel2";
			this->FriendStoryLabel2->Size = System::Drawing::Size(186, 23);
			this->FriendStoryLabel2->TabIndex = 5;
			if (TimeDate != nullptr)
			{
				this->FriendStoryLabel2->Text = TimeDate;
			}

			// 
			// FriendStoryButton
			// 
			FriendStoryButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			FriendStoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			FriendStoryButton->ForeColor = System::Drawing::SystemColors::ControlText;
			FriendStoryButton->Location = System::Drawing::Point(24, y);
			FriendStoryButton->Name = L"FriendStoryButton";
			FriendStoryButton->Size = System::Drawing::Size(284, 65);
			FriendStoryButton->TabIndex = 2;
			FriendStoryButton->UseVisualStyleBackColor = true;
			FriendStoryButton->Controls->Add(this->FriendStoryLabel1);
			FriendStoryButton->Controls->Add(this->FriendStoryLabel2);
			FriendStoryButton->Controls->Add(this->FriendStoryPictureBox);
			FriendStoryButton->Click += gcnew System::EventHandler(this, &StoryMain::FriendStoryButton_Click);


			FriendStoryButton->ResumeLayout(false);

			this->Controls->Add(FriendStoryButton);

			y += 70;
		}
	}
	private: System::Void FriendStoryButton_Click(System::Object ^ sender, System::EventArgs ^ e)
	{

	}
	};
}
