#pragma once
#include "NeueReferenz.h"
#include "ReferenzAnzeigen.h"
#include "datatypes.h"
#include "DataStore.h"

namespace Informatik3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Neue Referenz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Referenzen ansehen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(126, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Referenzen durchsuchen";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(126, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(173, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Referenz bearbeiten";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(126, 264);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(173, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Referenz entfernen";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(126, 323);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(173, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Daten auf HD speichern";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(126, 379);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(173, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Export als .bib-Datei";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(491, 523);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Beenden";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 615);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		ReferenzAnzeigen ^ frm2 = gcnew ReferenzAnzeigen();
		frm2->Show();
	
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		NeueReferenz ^ frm = gcnew NeueReferenz;
		frm->Show(); 
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

	Application::Exit();
	}
	};
}
