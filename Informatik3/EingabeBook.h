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
	/// Summary for EingabeBook
	/// </summary>
	public ref class EingabeBook : public System::Windows::Forms::Form
	{
	public:
		EingabeBook(void)
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
		~EingabeBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxKeyword;
	protected:


	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  buttonSave;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBoxTitle;
	private: System::Windows::Forms::TextBox^  textBoxAuthor;
	private: System::Windows::Forms::TextBox^  textBoxPublisher;

	private: System::Windows::Forms::TextBox^  textBoxYear;
	private: System::Windows::Forms::TextBox^  textBoxVolume;
	private: System::Windows::Forms::TextBox^  textBoxSeries;
	private: System::Windows::Forms::TextBox^  textBoxAddress;









	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelPublisher;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelSeries;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxMonth;
	private: System::Windows::Forms::TextBox^  textBoxNotes;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  labelOptional;
	private: System::Windows::Forms::Label^  labelEditopr;
	private: System::Windows::Forms::TextBox^  textBoxEditor;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxEdition;


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
			this->textBoxKeyword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAuthor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPublisher = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVolume = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeries = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelPublisher = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelSeries = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNotes = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labelOptional = (gcnew System::Windows::Forms::Label());
			this->labelEditopr = (gcnew System::Windows::Forms::Label());
			this->textBoxEditor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxEdition = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBoxKeyword
			// 
			this->textBoxKeyword->Location = System::Drawing::Point(159, 75);
			this->textBoxKeyword->Name = L"textBoxKeyword";
			this->textBoxKeyword->Size = System::Drawing::Size(147, 20);
			this->textBoxKeyword->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"keyword";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(435, 698);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Abbrechen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(450, 75);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 3;
			this->buttonSave->Text = L"Speichern";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &EingabeBook::buttonSave_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(528, 698);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Beenden";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBoxTitle
			// 
			this->textBoxTitle->Location = System::Drawing::Point(159, 112);
			this->textBoxTitle->Name = L"textBoxTitle";
			this->textBoxTitle->Size = System::Drawing::Size(147, 20);
			this->textBoxTitle->TabIndex = 5;
			// 
			// textBoxAuthor
			// 
			this->textBoxAuthor->Location = System::Drawing::Point(159, 149);
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(147, 20);
			this->textBoxAuthor->TabIndex = 6;
			// 
			// textBoxPublisher
			// 
			this->textBoxPublisher->Location = System::Drawing::Point(159, 246);
			this->textBoxPublisher->Name = L"textBoxPublisher";
			this->textBoxPublisher->Size = System::Drawing::Size(147, 20);
			this->textBoxPublisher->TabIndex = 7;
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(159, 284);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(147, 20);
			this->textBoxYear->TabIndex = 8;
			// 
			// textBoxVolume
			// 
			this->textBoxVolume->Location = System::Drawing::Point(156, 395);
			this->textBoxVolume->Name = L"textBoxVolume";
			this->textBoxVolume->Size = System::Drawing::Size(147, 20);
			this->textBoxVolume->TabIndex = 9;
			// 
			// textBoxSeries
			// 
			this->textBoxSeries->Location = System::Drawing::Point(156, 439);
			this->textBoxSeries->Name = L"textBoxSeries";
			this->textBoxSeries->Size = System::Drawing::Size(147, 20);
			this->textBoxSeries->TabIndex = 10;
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(156, 485);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(147, 20);
			this->textBoxAddress->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Title";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Author";
			// 
			// labelPublisher
			// 
			this->labelPublisher->AutoSize = true;
			this->labelPublisher->Location = System::Drawing::Point(50, 249);
			this->labelPublisher->Name = L"labelPublisher";
			this->labelPublisher->Size = System::Drawing::Size(50, 13);
			this->labelPublisher->TabIndex = 14;
			this->labelPublisher->Text = L"Publisher";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 287);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Year";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 402);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Volume";
			// 
			// labelSeries
			// 
			this->labelSeries->AutoSize = true;
			this->labelSeries->Location = System::Drawing::Point(47, 442);
			this->labelSeries->Name = L"labelSeries";
			this->labelSeries->Size = System::Drawing::Size(36, 13);
			this->labelSeries->TabIndex = 17;
			this->labelSeries->Text = L"Series";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(47, 488);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Address";
			// 
			// textBoxMonth
			// 
			this->textBoxMonth->Location = System::Drawing::Point(155, 568);
			this->textBoxMonth->Name = L"textBoxMonth";
			this->textBoxMonth->Size = System::Drawing::Size(147, 20);
			this->textBoxMonth->TabIndex = 19;
			// 
			// textBoxNotes
			// 
			this->textBoxNotes->Location = System::Drawing::Point(155, 609);
			this->textBoxNotes->Name = L"textBoxNotes";
			this->textBoxNotes->Size = System::Drawing::Size(147, 20);
			this->textBoxNotes->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(46, 571);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Month";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(46, 612);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Note";
			// 
			// labelOptional
			// 
			this->labelOptional->AutoSize = true;
			this->labelOptional->Location = System::Drawing::Point(156, 354);
			this->labelOptional->Name = L"labelOptional";
			this->labelOptional->Size = System::Drawing::Size(44, 13);
			this->labelOptional->TabIndex = 23;
			this->labelOptional->Text = L"optional";
			// 
			// labelEditopr
			// 
			this->labelEditopr->AutoSize = true;
			this->labelEditopr->Location = System::Drawing::Point(50, 204);
			this->labelEditopr->Name = L"labelEditopr";
			this->labelEditopr->Size = System::Drawing::Size(34, 13);
			this->labelEditopr->TabIndex = 25;
			this->labelEditopr->Text = L"Editor";
			// 
			// textBoxEditor
			// 
			this->textBoxEditor->Location = System::Drawing::Point(159, 197);
			this->textBoxEditor->Name = L"textBoxEditor";
			this->textBoxEditor->Size = System::Drawing::Size(147, 20);
			this->textBoxEditor->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 533);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Edition";
			// 
			// textBoxEdition
			// 
			this->textBoxEdition->Location = System::Drawing::Point(156, 530);
			this->textBoxEdition->Name = L"textBoxEdition";
			this->textBoxEdition->Size = System::Drawing::Size(147, 20);
			this->textBoxEdition->TabIndex = 26;
			// 
			// EingabeBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 733);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxEdition);
			this->Controls->Add(this->labelEditopr);
			this->Controls->Add(this->textBoxEditor);
			this->Controls->Add(this->labelOptional);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxNotes);
			this->Controls->Add(this->textBoxMonth);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->labelSeries);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labelPublisher);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->textBoxSeries);
			this->Controls->Add(this->textBoxVolume);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->textBoxPublisher);
			this->Controls->Add(this->textBoxAuthor);
			this->Controls->Add(this->textBoxTitle);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxKeyword);
			this->Name = L"EingabeBook";
			this->Text = L"Book";
			this->Load += gcnew System::EventHandler(this, &EingabeBook::EingabeBook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EingabeBook_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		//speichern in DataStore::datensatz[DataStore::currentIndex]
		//eventuell Gültigkeit der Eingaben überprüfen, z.B. Jahr nur Zahl erlaubt...


		//Abfrage der erforderlichen Felder
		String^ errorMessage = "";

		if (String::IsNullOrWhiteSpace(textBoxKeyword->Text)) {
			errorMessage += "Keyword ist erforderlich!\n";
		}
		if (String::IsNullOrWhiteSpace(textBoxTitle->Text)) {
			errorMessage += "Title ist erforderlich!\n";
		}
		if (String::IsNullOrWhiteSpace(textBoxAuthor->Text) && String::IsNullOrWhiteSpace(textBoxEditor->Text)) {
			errorMessage += "Author oder Editor ist erforderlich!\n";
		}
		if (String::IsNullOrWhiteSpace(textBoxPublisher->Text)) {
			errorMessage += "Publisher ist erforderlich!\n";
		}
		if (String::IsNullOrWhiteSpace(textBoxYear->Text)) {
			errorMessage += "Year ist erforderlich!\n";
		}
		int year;
		if (String::IsNullOrWhiteSpace(textBoxYear->Text) || !Int32::TryParse(textBoxYear->Text, year)) {//Check ob Zahl
			errorMessage += "Year muss eine Zahl sein!\n";
		}

	
		int volume, series;
		if (!String::IsNullOrWhiteSpace(textBoxVolume->Text) && !Int32::TryParse(textBoxVolume->Text, volume)) {//Check ob Zahl
			errorMessage += "Volume muss eine Zahl sein oder leer bleiben!\n";
		}
		if (!String::IsNullOrWhiteSpace(textBoxSeries->Text) && !Int32::TryParse(textBoxSeries->Text, series)) {//Check ob Zahl
			errorMessage += "Series muss eine Zahl sein oder leer bleiben!\n";
		}
		
		if (!String::IsNullOrEmpty(errorMessage)) {
			MessageBox::Show(errorMessage, "Fehlende Eingaben", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Nicht speichern
		}
		//mandatory
		DataStore::datensatz[DataStore::currentIndex].Typ = "Book";
		DataStore::datensatz[DataStore::currentIndex].Keyword = textBoxKeyword->Text;
		DataStore::datensatz[DataStore::currentIndex].Title = textBoxTitle->Text;
		DataStore::datensatz[DataStore::currentIndex].Author = textBoxAuthor->Text;
		DataStore::datensatz[DataStore::currentIndex].Editor = textBoxEditor->Text;
		DataStore::datensatz[DataStore::currentIndex].Publisher = textBoxPublisher->Text;
		DataStore::datensatz[DataStore::currentIndex].Year = textBoxYear->Text;

		//optional
		DataStore::datensatz[DataStore::currentIndex].Volume = textBoxVolume->Text;
		DataStore::datensatz[DataStore::currentIndex].Series = textBoxSeries->Text;
		DataStore::datensatz[DataStore::currentIndex].Address = textBoxAddress->Text;
		DataStore::datensatz[DataStore::currentIndex].Edition = textBoxEdition->Text;
		DataStore::datensatz[DataStore::currentIndex].Month = textBoxMonth->Text;
		DataStore::datensatz[DataStore::currentIndex].Note = textBoxNotes->Text;

		//Bestätigung
		MessageBox::Show("Daten gespeichert");
		DataStore::currentIndex++; //Index erhöhen für nächste Eingabe
		this->Close();
	}
	
};
}
