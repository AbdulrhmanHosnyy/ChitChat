#include "LoginForm.h"
#include "DashForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	                      //////////////////////////
	                     //THE LOGIN AND REGISTER//
	                    //////////////////////////
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

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
		MessageBox::Show("Login || Sign in Successfull......");
		//this is will call a form of profile
	}
	else {
		MessageBox::Show("Login Canceled");
	}
	                  //////////////////////////
                     //THE LOGIN AND REGISTER//
                    //////////////////////////

}