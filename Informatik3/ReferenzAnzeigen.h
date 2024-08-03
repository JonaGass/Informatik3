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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Keyword";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Titel";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Author";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 284);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Journal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Jahr";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 391);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Volume";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 435);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Nummer";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(30, 474);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Seiten";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 514);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Monat";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 553);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Anmerkung";
			// 
			// textBoxOutputKeyword
			// 
			this->textBoxOutputKeyword->Location = System::Drawing::Point(181, 130);
			this->textBoxOutputKeyword->Name = L"textBoxOutputKeyword";
			this->textBoxOutputKeyword->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputKeyword->TabIndex = 13;
			// 
			// textBoxOutputTitle
			// 
			this->textBoxOutputTitle->Location = System::Drawing::Point(181, 179);
			this->textBoxOutputTitle->Name = L"textBoxOutputTitle";
			this->textBoxOutputTitle->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputTitle->TabIndex = 14;
			// 
			// textBoxOutputAuthor
			// 
			this->textBoxOutputAuthor->Location = System::Drawing::Point(181, 227);
			this->textBoxOutputAuthor->Name = L"textBoxOutputAuthor";
			this->textBoxOutputAuthor->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputAuthor->TabIndex = 15;
			// 
			// textBoxOutputJournal
			// 
			this->textBoxOutputJournal->Location = System::Drawing::Point(181, 277);
			this->textBoxOutputJournal->Name = L"textBoxOutputJournal";
			this->textBoxOutputJournal->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputJournal->TabIndex = 16;
			// 
			// textBoxOutputYear
			// 
			this->textBoxOutputYear->Location = System::Drawing::Point(181, 335);
			this->textBoxOutputYear->Name = L"textBoxOutputYear";
			this->textBoxOutputYear->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputYear->TabIndex = 17;
			// 
			// textBoxOutputVolume
			// 
			this->textBoxOutputVolume->Location = System::Drawing::Point(181, 384);
			this->textBoxOutputVolume->Name = L"textBoxOutputVolume";
			this->textBoxOutputVolume->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputVolume->TabIndex = 18;
			// 
			// textBoxOutputNumber
			// 
			this->textBoxOutputNumber->Location = System::Drawing::Point(181, 428);
			this->textBoxOutputNumber->Name = L"textBoxOutputNumber";
			this->textBoxOutputNumber->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputNumber->TabIndex = 19;
			// 
			// textBoxOutputPages
			// 
			this->textBoxOutputPages->Location = System::Drawing::Point(181, 467);
			this->textBoxOutputPages->Name = L"textBoxOutputPages";
			this->textBoxOutputPages->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputPages->TabIndex = 20;
			// 
			// textBoxOutputMonth
			// 
			this->textBoxOutputMonth->Location = System::Drawing::Point(181, 507);
			this->textBoxOutputMonth->Name = L"textBoxOutputMonth";
			this->textBoxOutputMonth->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputMonth->TabIndex = 21;
			// 
			// textBoxOutputNotes
			// 
			this->textBoxOutputNotes->Location = System::Drawing::Point(181, 546);
			this->textBoxOutputNotes->Name = L"textBoxOutputNotes";
			this->textBoxOutputNotes->Size = System::Drawing::Size(100, 20);
			this->textBoxOutputNotes->TabIndex = 22;
			// 
			// buttonShowData
			// 
			this->buttonShowData->Location = System::Drawing::Point(334, 127);
			this->buttonShowData->Name = L"buttonShowData";
			this->buttonShowData->Size = System::Drawing::Size(75, 23);
			this->buttonShowData->TabIndex = 23;
			this->buttonShowData->Text = L"Datensatz anzeigen";
			this->buttonShowData->UseVisualStyleBackColor = true;
			this->buttonShowData->Click += gcnew System::EventHandler(this, &ReferenzAnzeigen::buttonShowData_Click);
			// 
			// ReferenzAnzeigen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 741);
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
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
	textBoxOutputKeyword->Text = DataStore::datensatz[DataStore::currentIndex].Keyword;
	textBoxOutputTitle->Text = DataStore::datensatz[DataStore::currentIndex].Title;
	textBoxOutputAuthor->Text = DataStore::datensatz[DataStore::currentIndex].Author;
	textBoxOutputJournal->Text = DataStore::datensatz[DataStore::currentIndex].Journal;
	textBoxOutputYear->Text = DataStore::datensatz[DataStore::currentIndex].Year;
	textBoxOutputVolume->Text = DataStore::datensatz[DataStore::currentIndex].Volume;
	textBoxOutputNumber->Text = DataStore::datensatz[DataStore::currentIndex].Number;
	textBoxOutputPages->Text = DataStore::datensatz[DataStore::currentIndex].Pages;
	textBoxOutputMonth->Text = DataStore::datensatz[DataStore::currentIndex].Month;
	textBoxOutputNotes->Text = DataStore::datensatz[DataStore::currentIndex].Note;
	
}
};
}
