#define _CRT_SECURE_NO_WARNINGS
#include "MyForm.h"
#include "Service.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	CLR::MyForm form;
	Application::Run(% form);
}