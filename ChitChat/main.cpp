#include "LoginForm.h"
#include "DashForm.h"
#include "RegisterForm.h"
#include "StoryMain.h"
#include "AddStory.h"
#include "MyForm.h"
#include "MyStory.h"
#include "Testy.h"
#include "FriendStory.h"
#include "UserProfileForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {



	                      //////////////////////////
	                     //THE LOGIN AND REGISTER//
	                    //////////////////////////
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//ChitChat::AddStory addStory;
	//addStory.ShowDialog();
	Contacts^ cont = nullptr;
	while (true)
	{
		ChitChat::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			ChitChat::RegisterForm registerForm;
	        registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				cont = registerForm.cont;
				break;
			}
		}
		else {
			cont = loginForm.cont;
			break;
		}
	}

	if (cont != nullptr) {
		//Loginpage::MainForm mainForm(cont);
		//Application::Run(% mainForm);
		//MessageBox::Show("Login || Sign in Successfull......");
		//this is will call a form of profile

		ChitChat::UserProfileForm story;
	
		story.ShowDialog();
	
	}
	else {
		MessageBox::Show("Login Canceled");
	}
	                  //////////////////////////
                     //THE LOGIN AND REGISTER//
                    //////////////////////////

}