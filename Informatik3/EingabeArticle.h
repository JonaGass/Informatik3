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
	/// Summary for EingabeArticle
	/// </summary>
	public ref class EingabeArticle : public System::Windows::Forms::Form
	{
	public:
		EingabeArticle(void)
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
		~EingabeArticle()
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
	private: System::Windows::Forms::TextBox^  textBoxJournal;
	private: System::Windows::Forms::TextBox^  textBoxYear;
	private: System::Windows::Forms::TextBox^  textBoxVolume;
	private: System::Windows::Forms::TextBox^  textBoxNumber;
	private: System::Windows::Forms::TextBox^  textBoxPages;







	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxMonth;
	private: System::Windows::Forms::TextBox^  textBoxNotes;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

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
			this->textBoxJournal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVolume = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPages = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNotes = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->buttonSave->Click += gcnew System::EventHandler(this, &EingabeArticle::buttonSave_Click);
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
			// textBoxJournal
			// 
			this->textBoxJournal->Location = System::Drawing::Point(159, 189);
			this->textBoxJournal->Name = L"textBoxJournal";
			this->textBoxJournal->Size = System::Drawing::Size(147, 20);
			this->textBoxJournal->TabIndex = 7;
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(159, 227);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(147, 20);
			this->textBoxYear->TabIndex = 8;
			// 
			// textBoxVolume
			// 
			this->textBoxVolume->Location = System::Drawing::Point(159, 271);
			this->textBoxVolume->Name = L"textBoxVolume";
			this->textBoxVolume->Size = System::Drawing::Size(147, 20);
			this->textBoxVolume->TabIndex = 9;
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Location = System::Drawing::Point(159, 315);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(147, 20);
			this->textBoxNumber->TabIndex = 10;
			// 
			// textBoxPages
			// 
			this->textBoxPages->Location = System::Drawing::Point(159, 361);
			this->textBoxPages->Name = L"textBoxPages";
			this->textBoxPages->Size = System::Drawing::Size(147, 20);
			this->textBoxPages->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Titel";
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Journal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Jahr";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Volume";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(50, 318);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Nummer";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(50, 364);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Seiten";
			// 
			// textBoxMonth
			// 
			this->textBoxMonth->Location = System::Drawing::Point(159, 408);
			this->textBoxMonth->Name = L"textBoxMonth";
			this->textBoxMonth->Size = System::Drawing::Size(147, 20);
			this->textBoxMonth->TabIndex = 19;
			// 
			// textBoxNotes
			// 
			this->textBoxNotes->Location = System::Drawing::Point(159, 449);
			this->textBoxNotes->Name = L"textBoxNotes";
			this->textBoxNotes->Size = System::Drawing::Size(147, 20);
			this->textBoxNotes->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(50, 411);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Monat";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(50, 452);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Anmerkung";
			// 
			// EingabeArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 733);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxNotes);
			this->Controls->Add(this->textBoxMonth);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxPages);
			this->Controls->Add(this->textBoxNumber);
			this->Controls->Add(this->textBoxVolume);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->textBoxJournal);
			this->Controls->Add(this->textBoxAuthor);
			this->Controls->Add(this->textBoxTitle);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxKeyword);
			this->Name = L"EingabeArticle";
			this->Text = L"EingabeArticle";
			this->Load += gcnew System::EventHandler(this, &EingabeArticle::EingabeArticle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EingabeArticle_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		//speichern in DataStore::datensatz[DataStore::currentIndex]
		//eventuell Gültigkeit der Eingaben überprüfen, z.B. Jahr nur Zahl erlaubt...

		DataStore::datensatz[DataStore::currentIndex].Keyword = textBoxKeyword->Text;
		DataStore::datensatz[DataStore::currentIndex].Title = textBoxTitle->Text;
		DataStore::datensatz[DataStore::currentIndex].Author = textBoxAuthor->Text;
		DataStore::datensatz[DataStore::currentIndex].Journal = textBoxJournal->Text;
		DataStore::datensatz[DataStore::currentIndex].Year = textBoxYear->Text;
		DataStore::datensatz[DataStore::currentIndex].Volume = textBoxVolume->Text;
		DataStore::datensatz[DataStore::currentIndex].Number = textBoxNumber->Text;
		DataStore::datensatz[DataStore::currentIndex].Pages = textBoxPages->Text;
		DataStore::datensatz[DataStore::currentIndex].Month = textBoxMonth->Text;
		DataStore::datensatz[DataStore::currentIndex].Note = textBoxNotes->Text;
		
		//Bestätigung
		MessageBox::Show("Daten gespeichert");
	}
	};
}
