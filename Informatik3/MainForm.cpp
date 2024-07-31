#include "MainForm.h"
#include "EingabeArticle.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Informatik3::MainForm form;
	Application::Run(%form);
}