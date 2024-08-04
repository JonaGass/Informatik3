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
		private: System::Windows::Forms::TextBox^  textBoxOutputPublisher;
		private: System::Windows::Forms::Label^  labelPublisher;
		private: System::Windows::Forms::TextBox^  textBoxOutputSeries;
		private: System::Windows::Forms::Label^  labelSeries;
		private: System::Windows::Forms::TextBox^  textBoxOutputAddress;
		private: System::Windows::Forms::Label^  labelAddress;
		private: System::Windows::Forms::TextBox^  textBoxOutputEdition;
		private: System::Windows::Forms::Label^  labelEdition;
		private: System::Windows::Forms::TextBox^  textBoxOutputHowPublished;

		private: System::Windows::Forms::Label^  labelHowPublished;
		private: System::Windows::Forms::TextBox^  textBoxOutputBookTitle;
		private: System::Windows::Forms::Label^  labelBookTitle;
		private: System::Windows::Forms::TextBox^  textBoxOutputEditor;
		private: System::Windows::Forms::Label^  labelEditor;
		private: System::Windows::Forms::TextBox^  textBoxOutputChapter;
		private: System::Windows::Forms::Label^  labelChapter;
		private: System::Windows::Forms::TextBox^  textBoxOutputSchool;
		private: System::Windows::Forms::Label^  labelSchool;
		private: System::Windows::Forms::TextBox^  textBoxOutputType;
		private: System::Windows::Forms::Label^  labelType;
		private: System::Windows::Forms::TextBox^  textBoxOutputInstitution;
		private: System::Windows::Forms::Label^  labelInstitution;
		private: System::Windows::Forms::TextBox^  textBoxOutputOrganization;
		private: System::Windows::Forms::Label^  labelOrganization;
		private: System::Windows::Forms::TextBox^  textBoxOutputTyp;
		private: System::Windows::Forms::Label^  labelTyp;

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
				this->textBoxOutputPublisher = (gcnew System::Windows::Forms::TextBox());
				this->labelPublisher = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputSeries = (gcnew System::Windows::Forms::TextBox());
				this->labelSeries = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputAddress = (gcnew System::Windows::Forms::TextBox());
				this->labelAddress = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputEdition = (gcnew System::Windows::Forms::TextBox());
				this->labelEdition = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputHowPublished = (gcnew System::Windows::Forms::TextBox());
				this->labelHowPublished = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputBookTitle = (gcnew System::Windows::Forms::TextBox());
				this->labelBookTitle = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputEditor = (gcnew System::Windows::Forms::TextBox());
				this->labelEditor = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputChapter = (gcnew System::Windows::Forms::TextBox());
				this->labelChapter = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputSchool = (gcnew System::Windows::Forms::TextBox());
				this->labelSchool = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputType = (gcnew System::Windows::Forms::TextBox());
				this->labelType = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputInstitution = (gcnew System::Windows::Forms::TextBox());
				this->labelInstitution = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputOrganization = (gcnew System::Windows::Forms::TextBox());
				this->labelOrganization = (gcnew System::Windows::Forms::Label());
				this->textBoxOutputTyp = (gcnew System::Windows::Forms::TextBox());
				this->labelTyp = (gcnew System::Windows::Forms::Label());
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
				this->labelTitle->Location = System::Drawing::Point(30, 202);
				this->labelTitle->Name = L"labelTitle";
				this->labelTitle->Size = System::Drawing::Size(27, 13);
				this->labelTitle->TabIndex = 4;
				this->labelTitle->Text = L"Titel";
				// 
				// labelAuthor
				// 
				this->labelAuthor->AutoSize = true;
				this->labelAuthor->Location = System::Drawing::Point(30, 176);
				this->labelAuthor->Name = L"labelAuthor";
				this->labelAuthor->Size = System::Drawing::Size(38, 13);
				this->labelAuthor->TabIndex = 5;
				this->labelAuthor->Text = L"Author";
				// 
				// labelJournal
				// 
				this->labelJournal->AutoSize = true;
				this->labelJournal->Location = System::Drawing::Point(30, 228);
				this->labelJournal->Name = L"labelJournal";
				this->labelJournal->Size = System::Drawing::Size(41, 13);
				this->labelJournal->TabIndex = 6;
				this->labelJournal->Text = L"Journal";
				// 
				// labelYear
				// 
				this->labelYear->AutoSize = true;
				this->labelYear->Location = System::Drawing::Point(30, 254);
				this->labelYear->Name = L"labelYear";
				this->labelYear->Size = System::Drawing::Size(29, 13);
				this->labelYear->TabIndex = 7;
				this->labelYear->Text = L"Year";
				// 
				// labelVolume
				// 
				this->labelVolume->AutoSize = true;
				this->labelVolume->Location = System::Drawing::Point(30, 280);
				this->labelVolume->Name = L"labelVolume";
				this->labelVolume->Size = System::Drawing::Size(42, 13);
				this->labelVolume->TabIndex = 8;
				this->labelVolume->Text = L"Volume";
				// 
				// labelNumber
				// 
				this->labelNumber->AutoSize = true;
				this->labelNumber->Location = System::Drawing::Point(30, 306);
				this->labelNumber->Name = L"labelNumber";
				this->labelNumber->Size = System::Drawing::Size(44, 13);
				this->labelNumber->TabIndex = 9;
				this->labelNumber->Text = L"Number";
				// 
				// labelPages
				// 
				this->labelPages->AutoSize = true;
				this->labelPages->Location = System::Drawing::Point(30, 332);
				this->labelPages->Name = L"labelPages";
				this->labelPages->Size = System::Drawing::Size(37, 13);
				this->labelPages->TabIndex = 10;
				this->labelPages->Text = L"Pages";
				// 
				// labelMonth
				// 
				this->labelMonth->AutoSize = true;
				this->labelMonth->Location = System::Drawing::Point(30, 358);
				this->labelMonth->Name = L"labelMonth";
				this->labelMonth->Size = System::Drawing::Size(37, 13);
				this->labelMonth->TabIndex = 11;
				this->labelMonth->Text = L"Month";
				// 
				// labelNote
				// 
				this->labelNote->AutoSize = true;
				this->labelNote->Location = System::Drawing::Point(30, 384);
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
				this->textBoxOutputTitle->Location = System::Drawing::Point(181, 202);
				this->textBoxOutputTitle->Name = L"textBoxOutputTitle";
				this->textBoxOutputTitle->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputTitle->TabIndex = 14;
				// 
				// textBoxOutputAuthor
				// 
				this->textBoxOutputAuthor->Location = System::Drawing::Point(181, 176);
				this->textBoxOutputAuthor->Name = L"textBoxOutputAuthor";
				this->textBoxOutputAuthor->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputAuthor->TabIndex = 15;
				// 
				// textBoxOutputJournal
				// 
				this->textBoxOutputJournal->Location = System::Drawing::Point(181, 228);
				this->textBoxOutputJournal->Name = L"textBoxOutputJournal";
				this->textBoxOutputJournal->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputJournal->TabIndex = 16;
				// 
				// textBoxOutputYear
				// 
				this->textBoxOutputYear->Location = System::Drawing::Point(181, 254);
				this->textBoxOutputYear->Name = L"textBoxOutputYear";
				this->textBoxOutputYear->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputYear->TabIndex = 17;
				// 
				// textBoxOutputVolume
				// 
				this->textBoxOutputVolume->Location = System::Drawing::Point(181, 280);
				this->textBoxOutputVolume->Name = L"textBoxOutputVolume";
				this->textBoxOutputVolume->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputVolume->TabIndex = 18;
				// 
				// textBoxOutputNumber
				// 
				this->textBoxOutputNumber->Location = System::Drawing::Point(181, 306);
				this->textBoxOutputNumber->Name = L"textBoxOutputNumber";
				this->textBoxOutputNumber->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputNumber->TabIndex = 19;
				// 
				// textBoxOutputPages
				// 
				this->textBoxOutputPages->Location = System::Drawing::Point(181, 332);
				this->textBoxOutputPages->Name = L"textBoxOutputPages";
				this->textBoxOutputPages->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputPages->TabIndex = 20;
				// 
				// textBoxOutputMonth
				// 
				this->textBoxOutputMonth->Location = System::Drawing::Point(181, 358);
				this->textBoxOutputMonth->Name = L"textBoxOutputMonth";
				this->textBoxOutputMonth->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputMonth->TabIndex = 21;
				// 
				// textBoxOutputNotes
				// 
				this->textBoxOutputNotes->Location = System::Drawing::Point(181, 384);
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
				// textBoxOutputPublisher
				// 
				this->textBoxOutputPublisher->Location = System::Drawing::Point(181, 410);
				this->textBoxOutputPublisher->Name = L"textBoxOutputPublisher";
				this->textBoxOutputPublisher->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputPublisher->TabIndex = 25;
				// 
				// labelPublisher
				// 
				this->labelPublisher->AutoSize = true;
				this->labelPublisher->Location = System::Drawing::Point(30, 410);
				this->labelPublisher->Name = L"labelPublisher";
				this->labelPublisher->Size = System::Drawing::Size(50, 13);
				this->labelPublisher->TabIndex = 24;
				this->labelPublisher->Text = L"Publisher";
				// 
				// textBoxOutputSeries
				// 
				this->textBoxOutputSeries->Location = System::Drawing::Point(181, 436);
				this->textBoxOutputSeries->Name = L"textBoxOutputSeries";
				this->textBoxOutputSeries->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputSeries->TabIndex = 27;
				// 
				// labelSeries
				// 
				this->labelSeries->AutoSize = true;
				this->labelSeries->Location = System::Drawing::Point(30, 436);
				this->labelSeries->Name = L"labelSeries";
				this->labelSeries->Size = System::Drawing::Size(36, 13);
				this->labelSeries->TabIndex = 26;
				this->labelSeries->Text = L"Series";
				// 
				// textBoxOutputAddress
				// 
				this->textBoxOutputAddress->Location = System::Drawing::Point(181, 462);
				this->textBoxOutputAddress->Name = L"textBoxOutputAddress";
				this->textBoxOutputAddress->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputAddress->TabIndex = 29;
				// 
				// labelAddress
				// 
				this->labelAddress->AutoSize = true;
				this->labelAddress->Location = System::Drawing::Point(30, 462);
				this->labelAddress->Name = L"labelAddress";
				this->labelAddress->Size = System::Drawing::Size(45, 13);
				this->labelAddress->TabIndex = 28;
				this->labelAddress->Text = L"Address";
				// 
				// textBoxOutputEdition
				// 
				this->textBoxOutputEdition->Location = System::Drawing::Point(181, 488);
				this->textBoxOutputEdition->Name = L"textBoxOutputEdition";
				this->textBoxOutputEdition->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputEdition->TabIndex = 31;
				// 
				// labelEdition
				// 
				this->labelEdition->AutoSize = true;
				this->labelEdition->Location = System::Drawing::Point(30, 488);
				this->labelEdition->Name = L"labelEdition";
				this->labelEdition->Size = System::Drawing::Size(39, 13);
				this->labelEdition->TabIndex = 30;
				this->labelEdition->Text = L"Edition";
				// 
				// textBoxOutputHowPublished
				// 
				this->textBoxOutputHowPublished->Location = System::Drawing::Point(181, 514);
				this->textBoxOutputHowPublished->Name = L"textBoxOutputHowPublished";
				this->textBoxOutputHowPublished->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputHowPublished->TabIndex = 33;
				// 
				// labelHowPublished
				// 
				this->labelHowPublished->AutoSize = true;
				this->labelHowPublished->Location = System::Drawing::Point(30, 514);
				this->labelHowPublished->Name = L"labelHowPublished";
				this->labelHowPublished->Size = System::Drawing::Size(53, 13);
				this->labelHowPublished->TabIndex = 32;
				this->labelHowPublished->Text = L"Published";
				// 
				// textBoxOutputBookTitle
				// 
				this->textBoxOutputBookTitle->Location = System::Drawing::Point(181, 540);
				this->textBoxOutputBookTitle->Name = L"textBoxOutputBookTitle";
				this->textBoxOutputBookTitle->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputBookTitle->TabIndex = 35;
				// 
				// labelBookTitle
				// 
				this->labelBookTitle->AutoSize = true;
				this->labelBookTitle->Location = System::Drawing::Point(30, 540);
				this->labelBookTitle->Name = L"labelBookTitle";
				this->labelBookTitle->Size = System::Drawing::Size(55, 13);
				this->labelBookTitle->TabIndex = 34;
				this->labelBookTitle->Text = L"Book Title";
				// 
				// textBoxOutputEditor
				// 
				this->textBoxOutputEditor->Location = System::Drawing::Point(181, 566);
				this->textBoxOutputEditor->Name = L"textBoxOutputEditor";
				this->textBoxOutputEditor->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputEditor->TabIndex = 37;
				// 
				// labelEditor
				// 
				this->labelEditor->AutoSize = true;
				this->labelEditor->Location = System::Drawing::Point(30, 566);
				this->labelEditor->Name = L"labelEditor";
				this->labelEditor->Size = System::Drawing::Size(34, 13);
				this->labelEditor->TabIndex = 36;
				this->labelEditor->Text = L"Editor";
				// 
				// textBoxOutputChapter
				// 
				this->textBoxOutputChapter->Location = System::Drawing::Point(181, 592);
				this->textBoxOutputChapter->Name = L"textBoxOutputChapter";
				this->textBoxOutputChapter->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputChapter->TabIndex = 39;
				// 
				// labelChapter
				// 
				this->labelChapter->AutoSize = true;
				this->labelChapter->Location = System::Drawing::Point(30, 592);
				this->labelChapter->Name = L"labelChapter";
				this->labelChapter->Size = System::Drawing::Size(44, 13);
				this->labelChapter->TabIndex = 38;
				this->labelChapter->Text = L"Chapter";
				// 
				// textBoxOutputSchool
				// 
				this->textBoxOutputSchool->Location = System::Drawing::Point(181, 618);
				this->textBoxOutputSchool->Name = L"textBoxOutputSchool";
				this->textBoxOutputSchool->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputSchool->TabIndex = 41;
				// 
				// labelSchool
				// 
				this->labelSchool->AutoSize = true;
				this->labelSchool->Location = System::Drawing::Point(30, 618);
				this->labelSchool->Name = L"labelSchool";
				this->labelSchool->Size = System::Drawing::Size(40, 13);
				this->labelSchool->TabIndex = 40;
				this->labelSchool->Text = L"School";
				// 
				// textBoxOutputType
				// 
				this->textBoxOutputType->Location = System::Drawing::Point(181, 644);
				this->textBoxOutputType->Name = L"textBoxOutputType";
				this->textBoxOutputType->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputType->TabIndex = 43;
				// 
				// labelType
				// 
				this->labelType->AutoSize = true;
				this->labelType->Location = System::Drawing::Point(30, 644);
				this->labelType->Name = L"labelType";
				this->labelType->Size = System::Drawing::Size(31, 13);
				this->labelType->TabIndex = 42;
				this->labelType->Text = L"Type";
				// 
				// textBoxOutputInstitution
				// 
				this->textBoxOutputInstitution->Location = System::Drawing::Point(181, 670);
				this->textBoxOutputInstitution->Name = L"textBoxOutputInstitution";
				this->textBoxOutputInstitution->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputInstitution->TabIndex = 45;
				// 
				// labelInstitution
				// 
				this->labelInstitution->AutoSize = true;
				this->labelInstitution->Location = System::Drawing::Point(30, 670);
				this->labelInstitution->Name = L"labelInstitution";
				this->labelInstitution->Size = System::Drawing::Size(52, 13);
				this->labelInstitution->TabIndex = 44;
				this->labelInstitution->Text = L"Institution";
				// 
				// textBoxOutputOrganization
				// 
				this->textBoxOutputOrganization->Location = System::Drawing::Point(181, 696);
				this->textBoxOutputOrganization->Name = L"textBoxOutputOrganization";
				this->textBoxOutputOrganization->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputOrganization->TabIndex = 47;
				// 
				// labelOrganization
				// 
				this->labelOrganization->AutoSize = true;
				this->labelOrganization->Location = System::Drawing::Point(30, 696);
				this->labelOrganization->Name = L"labelOrganization";
				this->labelOrganization->Size = System::Drawing::Size(66, 13);
				this->labelOrganization->TabIndex = 46;
				this->labelOrganization->Text = L"Organization";
				// 
				// textBoxOutputTyp
				// 
				this->textBoxOutputTyp->Location = System::Drawing::Point(181, 124);
				this->textBoxOutputTyp->Name = L"textBoxOutputTyp";
				this->textBoxOutputTyp->Size = System::Drawing::Size(100, 20);
				this->textBoxOutputTyp->TabIndex = 49;
				// 
				// labelTyp
				// 
				this->labelTyp->AutoSize = true;
				this->labelTyp->Location = System::Drawing::Point(30, 124);
				this->labelTyp->Name = L"labelTyp";
				this->labelTyp->Size = System::Drawing::Size(25, 13);
				this->labelTyp->TabIndex = 48;
				this->labelTyp->Text = L"Typ";
				// 
				// ReferenzAnzeigen
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(549, 776);
				this->Controls->Add(this->textBoxOutputTyp);
				this->Controls->Add(this->labelTyp);
				this->Controls->Add(this->textBoxOutputOrganization);
				this->Controls->Add(this->labelOrganization);
				this->Controls->Add(this->textBoxOutputInstitution);
				this->Controls->Add(this->labelInstitution);
				this->Controls->Add(this->textBoxOutputType);
				this->Controls->Add(this->labelType);
				this->Controls->Add(this->textBoxOutputSchool);
				this->Controls->Add(this->labelSchool);
				this->Controls->Add(this->textBoxOutputChapter);
				this->Controls->Add(this->labelChapter);
				this->Controls->Add(this->textBoxOutputEditor);
				this->Controls->Add(this->labelEditor);
				this->Controls->Add(this->textBoxOutputBookTitle);
				this->Controls->Add(this->labelBookTitle);
				this->Controls->Add(this->textBoxOutputHowPublished);
				this->Controls->Add(this->labelHowPublished);
				this->Controls->Add(this->textBoxOutputEdition);
				this->Controls->Add(this->labelEdition);
				this->Controls->Add(this->textBoxOutputAddress);
				this->Controls->Add(this->labelAddress);
				this->Controls->Add(this->textBoxOutputSeries);
				this->Controls->Add(this->labelSeries);
				this->Controls->Add(this->textBoxOutputPublisher);
				this->Controls->Add(this->labelPublisher);
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
		private: System::Void AlignTextBoxes() {
			int topOffset = 150;  //Nur TextBoxes mit Inhalt in geordneter Liste anzeigen
			const int verticalSpacing = 10;  //Abstand

			// Array {label, TextBox}
			array<System::Windows::Forms::Control^>^ controls = {
				labelKeyword, textBoxOutputKeyword,
				labelTitle, textBoxOutputTitle,
				labelAuthor, textBoxOutputAuthor,
				labelJournal, textBoxOutputJournal,
				labelYear, textBoxOutputYear,
				labelVolume, textBoxOutputVolume,
				labelNumber, textBoxOutputNumber,
				labelPages, textBoxOutputPages,
				labelMonth, textBoxOutputMonth,
				labelNote, textBoxOutputNotes,
				labelPublisher, textBoxOutputPublisher,
				labelSeries, textBoxOutputSeries,
				labelAddress, textBoxOutputAddress,
				labelEdition, textBoxOutputEdition,
				labelHowPublished, textBoxOutputHowPublished,
				labelBookTitle, textBoxOutputBookTitle,
				labelEditor, textBoxOutputEditor,
				labelChapter, textBoxOutputChapter,
				labelSchool, textBoxOutputSchool,
				labelType, textBoxOutputType,
				labelInstitution, textBoxOutputInstitution,
				labelOrganization, textBoxOutputOrganization,
				labelTyp, textBoxOutputTyp
			};

			// wenn sichtbar in Liste aufnehmen
			for (int i = 0; i < controls->Length; i += 2) {
				if (controls[i + 1]->Visible) { // wenn die TextBox sichtbar ist
					controls[i]->Top = topOffset; // Label in top Position
					controls[i + 1]->Top = topOffset; // TextBox in Top Position
					topOffset += controls[i]->Height + verticalSpacing; // Offset für nächstes Paar setzen
				}
			}
		}
		private: System::Void buttonShowData_Click(System::Object^  sender, System::EventArgs^  e) {
	
			Referenzen currentReference = DataStore::datensatz[DataStore::currentIndex];

			//Textbox zurücksetzen
			textBoxOutputTyp->Text = "";
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
			textBoxOutputPublisher->Text = "";
			textBoxOutputSeries->Text = "";
			textBoxOutputAddress->Text = "";
			textBoxOutputEdition->Text = "";
			textBoxOutputHowPublished->Text = "";
			textBoxOutputBookTitle->Text = "";
			textBoxOutputEditor->Text = "";
			textBoxOutputChapter->Text = "";
			textBoxOutputSchool->Text = "";
			textBoxOutputType->Text = "";
			textBoxOutputInstitution->Text = "";
			textBoxOutputOrganization->Text = "";


			// Nur Textboxes mit Inhalt werden angezeigt
			if (!String::IsNullOrEmpty(currentReference.Typ)) {
				textBoxOutputTyp->Text = currentReference.Typ;
				textBoxOutputTyp->Visible = true;
				labelTyp->Visible = true;
			}
			else {
				textBoxOutputTyp->Visible = false;
				labelTyp->Visible = false;
			}
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
			if (!String::IsNullOrEmpty(currentReference.Note)) {
				textBoxOutputPublisher->Text = currentReference.Note;
				textBoxOutputPublisher->Visible = true;
				labelPublisher->Visible = true;
			}
			else {
				textBoxOutputPublisher->Visible = false;
				labelPublisher->Visible = false;
			}
			if (!String::IsNullOrEmpty(currentReference.Series)) {
				textBoxOutputSeries->Text = currentReference.Series;
				textBoxOutputSeries->Visible = true;
				labelSeries->Visible = true;
			}
			else {
				textBoxOutputSeries->Visible = false;
				labelSeries->Visible = false;
			}

			if (!String::IsNullOrEmpty(currentReference.Address)) {
				textBoxOutputAddress->Text = currentReference.Address;
				textBoxOutputAddress->Visible = true;
				labelAddress->Visible = true;
			}
			else {
				textBoxOutputAddress->Visible = false;
				labelAddress->Visible = false;
			}
			if (!String::IsNullOrEmpty(currentReference.Edition)) {
				textBoxOutputEdition->Text = currentReference.Edition;
				textBoxOutputEdition->Visible = true;
				labelEdition->Visible = true;
			}
			else {
				textBoxOutputEdition->Visible = false;
				labelEdition->Visible = false;
			}
			if (!String::IsNullOrEmpty(currentReference.HowPublished)) {
				textBoxOutputHowPublished->Text = currentReference.HowPublished;
				textBoxOutputHowPublished->Visible = true;
				labelHowPublished->Visible = true;
			}
			else {
				textBoxOutputHowPublished->Visible = false;
				labelHowPublished->Visible = false;
			}

		
			if (!String::IsNullOrEmpty(currentReference.BookTitle)) {
				textBoxOutputBookTitle->Text = currentReference.BookTitle;
				textBoxOutputBookTitle->Visible = true;
				labelBookTitle->Visible = true;
			}
			else {
				textBoxOutputBookTitle->Visible = false;
				labelBookTitle->Visible = false;
			}

	
			if (!String::IsNullOrEmpty(currentReference.Editor)) {
				textBoxOutputEditor->Text = currentReference.Editor;
				textBoxOutputEditor->Visible = true;
				labelEditor->Visible = true;
			}
			else {
				textBoxOutputEditor->Visible = false;
				labelEditor->Visible = false;
			}

		
			if (!String::IsNullOrEmpty(currentReference.Chapter)) {
				textBoxOutputChapter->Text = currentReference.Chapter;
				textBoxOutputChapter->Visible = true;
				labelChapter->Visible = true;
			}
			else {
				textBoxOutputChapter->Visible = false;
				labelChapter->Visible = false;
			}

		
			if (!String::IsNullOrEmpty(currentReference.School)) {
				textBoxOutputSchool->Text = currentReference.School;
				textBoxOutputSchool->Visible = true;
				labelSchool->Visible = true;
			}
			else {
				textBoxOutputSchool->Visible = false;
				labelSchool->Visible = false;
			}

			
			if (!String::IsNullOrEmpty(currentReference.Type)) {
				textBoxOutputType->Text = currentReference.Type;
				textBoxOutputType->Visible = true;
				labelType->Visible = true;
			}
			else {
				textBoxOutputType->Visible = false;
				labelType->Visible = false;
			}

			if (!String::IsNullOrEmpty(currentReference.Institution)) {
				textBoxOutputInstitution->Text = currentReference.Institution;
				textBoxOutputInstitution->Visible = true;
				labelInstitution->Visible = true;
			}
			else {
				textBoxOutputInstitution->Visible = false;
				labelInstitution->Visible = false;
			}

			if (!String::IsNullOrEmpty(currentReference.Organization)) {
				textBoxOutputOrganization->Text = currentReference.Organization;
				textBoxOutputOrganization->Visible = true;
				labelOrganization->Visible = true;
			}
			else {
				textBoxOutputOrganization->Visible = false;
				labelOrganization->Visible = false;
			}
			AlignTextBoxes();
		}
	};
}
