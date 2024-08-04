#pragma once
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
	/// Summary for ReferenzAnzeigen
	/// </summary>
	public ref class ReferenzAnzeigen : public System::Windows::Forms::Form
	{
	public:
		ReferenzAnzeigen(void)
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
		~ReferenzAnzeigen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelIndex;
	protected:
	private: System::Windows::Forms::Button^  buttonIndex;
	private: System::Windows::Forms::TextBox^  textBoxIndex;
	private: System::Windows::Forms::Label^  labelKeyword;
	private: System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::Label^  labelAuthor;
	private: System::Windows::Forms::Label^  labelJournal;
	private: System::Windows::Forms::Label^  labelYear;
	private: System::Windows::Forms::Label^  labelVolume;
	private: System::Windows::Forms::Label^  labelNumber;
	private: System::Windows::Forms::Label^  labelPages;
	private: System::Windows::Forms::Label^  labelMonth;
	private: System::Windows::Forms::Label^  labelNote;










	private: System::Windows::Forms::TextBox^  textBoxOutputKeyword;
	private: System::Windows::Forms::TextBox^  textBoxOutputTitle;
	private: System::Windows::Forms::TextBox^  textBoxOutputAuthor;
	private: System::Windows::Forms::TextBox^  textBoxOutputJournal;
	private: System::Windows::Forms::TextBox^  textBoxOutputYear;
	private: System::Windows::Forms::TextBox^  textBoxOutputVolume;
	private: System::Windows::Forms::TextBox^  textBoxOutputNumber;
	private: System::Windows::Forms::TextBox^  textBoxOutputPages;
	private: System::Windows::Forms::TextBox^  textBoxOutputMonth;
	private: System::Windows::Forms::TextBox^  textBoxOutputNotes;
	private: System::Windows::Forms::Button^  buttonShowData;

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
			this->labelIndex = (gcnew System::Windows::Forms::Label());
			this->buttonIndex = (gcnew System::Windows::Forms::Button());
			this->textBoxIndex = (gcnew System::Windows::Forms::TextBox());
			this->labelKeyword = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->labelJournal = (gcnew System::Windows::Forms::Label());
			this->labelYear = (gcnew System::Windows::Forms::Label());
			this->labelVolume = (gcnew System::Windows::Forms::Label());
			this->labelNumber = (gcnew System::Windows::Forms::Label());
			this->labelPages = (gcnew System::Windows::Forms::Label());
			this->labelMonth = (gcnew System::Windows::Forms::Label());
			this->labelNote = (gcnew System::Windows::Forms::Label());
			this->textBoxOutputKeyword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputTitle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputAuthor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputJournal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputVolume = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputPages = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOutputNotes = (gcnew System::Windows::Forms::TextBox());
			this->buttonShowData = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelIndex
			// 
			this->labelIndex->AutoSize = true;
			this->labelIndex->Location = System::Drawing::Point(61, 52);
			this->labelIndex->Name = L"labelIndex";
			this->labelIndex->Size = System::Drawing::Size(70, 13);
			this->labelIndex->TabIndex = 0;
			this->labelIndex->Text = L"Indexnummer";
			// 
			// buttonIndex
			// 
			this->buttonIndex->Location = System::Drawing::Point(334, 52);
			this->buttonIndex->Name = L"buttonIndex";
			this->buttonIndex->Size = System::Drawing::Size(75, 23);
			this->buttonIndex->TabIndex = 1;
			this->buttonIndex->Text = L"Index setzen";
			this->buttonIndex->UseVisualStyleBackColor = true;
			this->buttonIndex->Click += gcnew System::EventHandler(this, &ReferenzAnzeigen::buttonIndex_Click);
			// 
			// textBoxIndex
			// 
			this->textBoxIndex->Location = System::Drawing::Point(181, 52);
			this->textBoxIndex->Name = L"textBoxIndex";
			this->textBoxIndex->Size = System::Drawing::Size(100, 20);
			this->textBoxIndex->TabIndex = 2;
			// 
			// labelKeyword
			// 
			this->labelKeyword->AutoSize = true;
			this->labelKeyword->Location = System::Drawing::Point(30, 150);
			this->labelKeyword->Name = L"labelKeyword";
			this->labelKeyword->Size = System::Drawing::Size(48, 13);
			this->labelKeyword->TabIndex = 3;
			this->labelKeyword->Text = L"Keyword";
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Location = System::Drawing::Point(30, 180);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(27, 13);
			this->labelTitle->TabIndex = 4;
			this->labelTitle->Text = L"Titel";
			// 
			// labelAuthor
			// 
			this->labelAuthor->AutoSize = true;
			this->labelAuthor->Location = System::Drawing::Point(30, 210);
			this->labelAuthor->Name = L"labelAuthor";
			this->labelAuthor->Size = System::Drawing::Size(38, 13);
			this->labelAuthor->TabIndex = 5;
			this->labelAuthor->Text = L"Author";
			// 
			// labelJournal
			// 
			this->labelJournal->AutoSize = true;
			this->labelJournal->Location = System::Drawing::Point(30, 240);
			this->labelJournal->Name = L"labelJournal";
			this->labelJournal->Size = System::Drawing::Size(41, 13);
			this->labelJournal->TabIndex = 6;
			this->labelJournal->Text = L"Journal";
			// 
			// labelYear
			// 
			this->labelYear->AutoSize = true;
			this->labelYear->Location = System::Drawing::Point(30, 340);
			this->labelYear->Name = L"labelYear";
			this->labelYear->Size = System::Drawing::Size(27, 13);
			this->labelYear->TabIndex = 7;
			this->labelYear->Text = L"Jahr";
			// 
			// labelVolume
			// 
			this->labelVolume->AutoSize = true;
			this->labelVolume->Location = System::Drawing::Point(30, 370);
			this->labelVolume->Name = L"labelVolume";
			this->labelVolume->Size = System::Drawing::Size(42, 13);
			this->labelVolume->TabIndex = 8;
			this->labelVolume->Text = L"Volume";
			// 
			// labelNumber
			// 
			this->labelNumber->AutoSize = true;
			this->labelNumber->Location = System::Drawing::Point(30, 400);
			this->labelNumber->Name = L"labelNumber";
			this->labelNumber->Size = System::Drawing::Size(46, 13);
			this->labelNumber->TabIndex = 9;
			this->labelNumber->Text = L"Nummer";
			// 
			// labelPages
			// 
			this->labelPages->AutoSize = true;
			this->labelPages->Location = System::Drawing::Point(30, 430);
			this->labelPages->Name = L"labelPages";
			this->labelPages->Size = System::Drawing::Size(37, 13);
			this->labelPages->TabIndex = 10;
			this->labelPages->Text = L"Seiten";
			// 
			// labelMonth
			// 
			this->labelMonth->AutoSize = true;
			this->labelMonth->Location = System::Drawing::Point(30, 460);
			this->labelMonth->Name = L"labelMonth";
			this->labelMonth->Size = System::Drawing::Size(37, 13);
			this->labelMonth->TabIndex = 11;
			this->labelMonth->Text = L"Monat";
			// 
			// labelNote
			// 
			this->labelNote->AutoSize = true;
			this->labelNote->Location = System::Drawing::Point(30, 490);
			this->labelNote->Name = L"labelNote";
			this->labelNote->Size = System::Drawing::Size(61, 13);
			this->labelNote->TabIndex = 12;
			this->labelNote->Text = L"Anmerkung";
			// 
			// textBoxOutputKeyword
			// 
			this->textBoxOutputKeyword->Location = System::Drawing::Point(181, 150);
			this->textBoxOutputKeyword->Name = L"textBoxOutputKeyword";
			this->textBoxOutputKeyword->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputKeyword->TabIndex = 13;
			// 
			// textBoxOutputTitle
			// 
			this->textBoxOutputTitle->Location = System::Drawing::Point(181, 180);
			this->textBoxOutputTitle->Name = L"textBoxOutputTitle";
			this->textBoxOutputTitle->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputTitle->TabIndex = 14;
			// 
			// textBoxOutputAuthor
			// 
			this->textBoxOutputAuthor->Location = System::Drawing::Point(181, 210);
			this->textBoxOutputAuthor->Name = L"textBoxOutputAuthor";
			this->textBoxOutputAuthor->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputAuthor->TabIndex = 15;
			// 
			// textBoxOutputJournal
			// 
			this->textBoxOutputJournal->Location = System::Drawing::Point(181, 240);
			this->textBoxOutputJournal->Name = L"textBoxOutputJournal";
			this->textBoxOutputJournal->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputJournal->TabIndex = 16;
			// 
			// textBoxOutputYear
			// 
			this->textBoxOutputYear->Location = System::Drawing::Point(181, 340);
			this->textBoxOutputYear->Name = L"textBoxOutputYear";
			this->textBoxOutputYear->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputYear->TabIndex = 17;
			// 
			// textBoxOutputVolume
			// 
			this->textBoxOutputVolume->Location = System::Drawing::Point(181, 370);
			this->textBoxOutputVolume->Name = L"textBoxOutputVolume";
			this->textBoxOutputVolume->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputVolume->TabIndex = 18;
			// 
			// textBoxOutputNumber
			// 
			this->textBoxOutputNumber->Location = System::Drawing::Point(181, 400);
			this->textBoxOutputNumber->Name = L"textBoxOutputNumber";
			this->textBoxOutputNumber->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputNumber->TabIndex = 19;
			// 
			// textBoxOutputPages
			// 
			this->textBoxOutputPages->Location = System::Drawing::Point(181, 430);
			this->textBoxOutputPages->Name = L"textBoxOutputPages";
			this->textBoxOutputPages->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputPages->TabIndex = 20;
			// 
			// textBoxOutputMonth
			// 
			this->textBoxOutputMonth->Location = System::Drawing::Point(181, 460);
			this->textBoxOutputMonth->Name = L"textBoxOutputMonth";
			this->textBoxOutputMonth->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputMonth->TabIndex = 21;
			// 
			// textBoxOutputNotes
			// 
			this->textBoxOutputNotes->Location = System::Drawing::Point(181, 490);
			this->textBoxOutputNotes->Name = L"textBoxOutputNotes";
			this->textBoxOutputNotes->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputNotes->TabIndex = 22;
			// 
			// buttonShowData
			// 
			this->buttonShowData->Location = System::Drawing::Point(334, 127);
			this->buttonShowData->Name = L"buttonShowData";
			this->buttonShowData->Size = System::Drawing::Size(131, 23);
			this->buttonShowData->TabIndex = 23;
			this->buttonShowData->Text = L"Datensatz anzeigen";
			this->buttonShowData->UseVisualStyleBackColor = true;
			this->buttonShowData->Click += gcnew System::EventHandler(this, &ReferenzAnzeigen::buttonShowData_Click);
			// 
			// ReferenzAnzeigen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 545);
			this->Controls->Add(this->buttonShowData);
			this->Controls->Add(this->textBoxOutputNotes);
			this->Controls->Add(this->textBoxOutputMonth);
			this->Controls->Add(this->textBoxOutputPages);
			this->Controls->Add(this->textBoxOutputNumber);
			this->Controls->Add(this->textBoxOutputVolume);
			this->Controls->Add(this->textBoxOutputYear);
			this->Controls->Add(this->textBoxOutputJournal);
			this->Controls->Add(this->textBoxOutputAuthor);
			this->Controls->Add(this->textBoxOutputTitle);
			this->Controls->Add(this->textBoxOutputKeyword);
			this->Controls->Add(this->labelNote);
			this->Controls->Add(this->labelMonth);
			this->Controls->Add(this->labelPages);
			this->Controls->Add(this->labelNumber);
			this->Controls->Add(this->labelVolume);
			this->Controls->Add(this->labelYear);
			this->Controls->Add(this->labelJournal);
			this->Controls->Add(this->labelAuthor);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->labelKeyword);
			this->Controls->Add(this->textBoxIndex);
			this->Controls->Add(this->buttonIndex);
			this->Controls->Add(this->labelIndex);
			this->Name = L"ReferenzAnzeigen";
			this->Text = L"ReferenzAnzeigen";
			this->Load += gcnew System::EventHandler(this, &ReferenzAnzeigen::ReferenzAnzeigen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReferenzAnzeigen_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void buttonIndex_Click(System::Object^  sender, System::EventArgs^  e) {
		//Zu Testzwecken Index direkt wählbar
		DataStore::currentIndex = Convert::ToInt32(textBoxIndex->Text);
		MessageBox::Show("Index gesetzt");
	}
private: System::Void buttonShowData_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Referenzen currentReference = DataStore::datensatz[DataStore::currentIndex];

	//Textbox zurücksetzen
	textBoxOutputKeyword->Text = "";
	textBoxOutputTitle->Text = "";
	textBoxOutputAuthor->Text = "";
	textBoxOutputJournal->Text = "";
	textBoxOutputYear->Text = "";
	textBoxOutputVolume->Text = "";
	textBoxOutputNumber->Text = "";
	textBoxOutputPages->Text = "";
	textBoxOutputMonth->Text = "";
	textBoxOutputNotes->Text = "";

	// Nur Textboxes mit Inhalt werden angezeigt
	if (!String::IsNullOrEmpty(currentReference.Keyword)) {
		textBoxOutputKeyword->Text = currentReference.Keyword;
		textBoxOutputKeyword->Visible = true;
		labelKeyword->Visible = true;
	}
	else {
		textBoxOutputKeyword->Visible = false;
		labelKeyword->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Title)) {
		textBoxOutputTitle->Text = currentReference.Title;
		textBoxOutputTitle->Visible = true;
		labelTitle->Visible = true;
	}
	else {
		textBoxOutputTitle->Visible = false;
		labelTitle->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Author)) {
		textBoxOutputAuthor->Text = currentReference.Author;
		textBoxOutputAuthor->Visible = true;
		labelAuthor->Visible = true;
	}
	else {
		textBoxOutputAuthor->Visible = false;
		labelAuthor->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Journal)) {
		textBoxOutputJournal->Text = currentReference.Journal;
		textBoxOutputJournal->Visible = true;
		labelJournal->Visible = true;
	}
	else {
		textBoxOutputJournal->Visible = false;
		labelJournal->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Year)) {
		textBoxOutputYear->Text = currentReference.Year;
		textBoxOutputYear->Visible = true;
		labelYear->Visible = true;
	}
	else {
		textBoxOutputYear->Visible = false;
		labelYear->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Volume)) {
		textBoxOutputVolume->Text = currentReference.Volume;
		textBoxOutputVolume->Visible = true;
		labelVolume->Visible = true;
	}
	else {
		textBoxOutputVolume->Visible = false;
		labelVolume->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Number)) {
		textBoxOutputNumber->Text = currentReference.Number;
		textBoxOutputNumber->Visible = true;
		labelNumber->Visible = true;
	}
	else {
		textBoxOutputNumber->Visible = false;
		labelNumber->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Pages)) {
		textBoxOutputPages->Text = currentReference.Pages;
		textBoxOutputPages->Visible = true;
		labelPages->Visible = true;
	}
	else {
		textBoxOutputPages->Visible = false;
		labelPages->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Month)) {
		textBoxOutputMonth->Text = currentReference.Month;
		textBoxOutputMonth->Visible = true;
		labelMonth->Visible = true;
	}
	else {
		textBoxOutputMonth->Visible = false;
		labelMonth->Visible = false;
	}

	if (!String::IsNullOrEmpty(currentReference.Note)) {
		textBoxOutputNotes->Text = currentReference.Note;
		textBoxOutputNotes->Visible = true;
		labelNote->Visible = true;
	}
	else {
		textBoxOutputNotes->Visible = false;
		labelNote->Visible = false;
	}
}
};
}
