#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	int index = 0;
	for (int i = 0; i < 999; i++) {		// Array bei Programmstart leeren um Fehler zu vermeiden
		initializeData(&array[i]);
	}
	load(array, &index);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Informatik3::MainForm form;
	Application::Run(%form);
}