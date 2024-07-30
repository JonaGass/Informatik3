#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

// Global variables
int a = 0;
int b = 0;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Informatik3::MainForm form;
	Application::Run(%form);
}