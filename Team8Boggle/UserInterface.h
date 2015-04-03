#pragma once

namespace Team8Boggle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserInterface
	/// </summary>
	public ref class UserInterface : public System::Windows::Forms::Form
	{
	public:
		UserInterface(void)
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
		~UserInterface()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^  gameBoardGroupBox;
	private: System::Windows::Forms::Label^  boardPiece16;
	private: System::Windows::Forms::Label^  boardPiece15;
	private: System::Windows::Forms::Label^  boardPiece14;
	private: System::Windows::Forms::Label^  boardPiece13;
	private: System::Windows::Forms::Label^  boardPiece12;
	private: System::Windows::Forms::Label^  boardPiece11;
	private: System::Windows::Forms::Label^  boardPiece10;
	private: System::Windows::Forms::Label^  boardPiece9;
	private: System::Windows::Forms::Label^  boardPiece8;
	private: System::Windows::Forms::Label^  boardPiece7;
	private: System::Windows::Forms::Label^  boardPiece6;
	private: System::Windows::Forms::Label^  boardPiece5;
	private: System::Windows::Forms::Label^  boardPiece4;
	private: System::Windows::Forms::Label^  boardPiece3;
	private: System::Windows::Forms::Label^  boardPiece2;
	private: System::Windows::Forms::Label^  boardPiece1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  currentWordLabel;
	private: System::Windows::Forms::Button^  btnSubmit;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  wordBankLabel;
	private: System::Windows::Forms::Label^  headerLabel;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::Button^  resetButton;
	private: System::Windows::Forms::Button^  quitButton;
	private: System::Windows::Forms::Button^  rotateButton;


	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gameBoardGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->boardPiece16 = (gcnew System::Windows::Forms::Label());
			this->boardPiece15 = (gcnew System::Windows::Forms::Label());
			this->boardPiece14 = (gcnew System::Windows::Forms::Label());
			this->boardPiece13 = (gcnew System::Windows::Forms::Label());
			this->boardPiece12 = (gcnew System::Windows::Forms::Label());
			this->boardPiece11 = (gcnew System::Windows::Forms::Label());
			this->boardPiece10 = (gcnew System::Windows::Forms::Label());
			this->boardPiece9 = (gcnew System::Windows::Forms::Label());
			this->boardPiece8 = (gcnew System::Windows::Forms::Label());
			this->boardPiece7 = (gcnew System::Windows::Forms::Label());
			this->boardPiece6 = (gcnew System::Windows::Forms::Label());
			this->boardPiece5 = (gcnew System::Windows::Forms::Label());
			this->boardPiece4 = (gcnew System::Windows::Forms::Label());
			this->boardPiece3 = (gcnew System::Windows::Forms::Label());
			this->boardPiece2 = (gcnew System::Windows::Forms::Label());
			this->boardPiece1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->currentWordLabel = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->wordBankLabel = (gcnew System::Windows::Forms::Label());
			this->headerLabel = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->quitButton = (gcnew System::Windows::Forms::Button());
			this->rotateButton = (gcnew System::Windows::Forms::Button());
			this->gameBoardGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// gameBoardGroupBox
			// 
			this->gameBoardGroupBox->Controls->Add(this->boardPiece16);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece15);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece14);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece13);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece12);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece11);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece10);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece9);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece8);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece7);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece6);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece5);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece4);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece3);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece2);
			this->gameBoardGroupBox->Controls->Add(this->boardPiece1);
			this->gameBoardGroupBox->Location = System::Drawing::Point(12, 83);
			this->gameBoardGroupBox->Name = L"gameBoardGroupBox";
			this->gameBoardGroupBox->Size = System::Drawing::Size(338, 203);
			this->gameBoardGroupBox->TabIndex = 0;
			this->gameBoardGroupBox->TabStop = false;
			// 
			// boardPiece16
			// 
			this->boardPiece16->AutoSize = true;
			this->boardPiece16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece16->Location = System::Drawing::Point(265, 154);
			this->boardPiece16->Name = L"boardPiece16";
			this->boardPiece16->Size = System::Drawing::Size(2, 27);
			this->boardPiece16->TabIndex = 15;
			// 
			// boardPiece15
			// 
			this->boardPiece15->AutoSize = true;
			this->boardPiece15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece15->Location = System::Drawing::Point(189, 154);
			this->boardPiece15->Name = L"boardPiece15";
			this->boardPiece15->Size = System::Drawing::Size(2, 27);
			this->boardPiece15->TabIndex = 14;
			// 
			// boardPiece14
			// 
			this->boardPiece14->AutoSize = true;
			this->boardPiece14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece14->Location = System::Drawing::Point(113, 154);
			this->boardPiece14->Name = L"boardPiece14";
			this->boardPiece14->Size = System::Drawing::Size(2, 27);
			this->boardPiece14->TabIndex = 13;
			// 
			// boardPiece13
			// 
			this->boardPiece13->AutoSize = true;
			this->boardPiece13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece13->Location = System::Drawing::Point(37, 154);
			this->boardPiece13->Name = L"boardPiece13";
			this->boardPiece13->Size = System::Drawing::Size(2, 27);
			this->boardPiece13->TabIndex = 12;
			// 
			// boardPiece12
			// 
			this->boardPiece12->AutoSize = true;
			this->boardPiece12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece12->Location = System::Drawing::Point(265, 115);
			this->boardPiece12->Name = L"boardPiece12";
			this->boardPiece12->Size = System::Drawing::Size(2, 27);
			this->boardPiece12->TabIndex = 11;
			// 
			// boardPiece11
			// 
			this->boardPiece11->AutoSize = true;
			this->boardPiece11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece11->Location = System::Drawing::Point(189, 115);
			this->boardPiece11->Name = L"boardPiece11";
			this->boardPiece11->Size = System::Drawing::Size(2, 27);
			this->boardPiece11->TabIndex = 10;
			// 
			// boardPiece10
			// 
			this->boardPiece10->AutoSize = true;
			this->boardPiece10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece10->Location = System::Drawing::Point(113, 115);
			this->boardPiece10->Name = L"boardPiece10";
			this->boardPiece10->Size = System::Drawing::Size(2, 27);
			this->boardPiece10->TabIndex = 9;
			// 
			// boardPiece9
			// 
			this->boardPiece9->AutoSize = true;
			this->boardPiece9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece9->Location = System::Drawing::Point(37, 115);
			this->boardPiece9->Name = L"boardPiece9";
			this->boardPiece9->Size = System::Drawing::Size(2, 27);
			this->boardPiece9->TabIndex = 8;
			// 
			// boardPiece8
			// 
			this->boardPiece8->AutoSize = true;
			this->boardPiece8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece8->Location = System::Drawing::Point(265, 66);
			this->boardPiece8->Name = L"boardPiece8";
			this->boardPiece8->Size = System::Drawing::Size(2, 27);
			this->boardPiece8->TabIndex = 7;
			// 
			// boardPiece7
			// 
			this->boardPiece7->AutoSize = true;
			this->boardPiece7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece7->Location = System::Drawing::Point(189, 66);
			this->boardPiece7->Name = L"boardPiece7";
			this->boardPiece7->Size = System::Drawing::Size(2, 27);
			this->boardPiece7->TabIndex = 6;
			// 
			// boardPiece6
			// 
			this->boardPiece6->AutoSize = true;
			this->boardPiece6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece6->Location = System::Drawing::Point(113, 66);
			this->boardPiece6->Name = L"boardPiece6";
			this->boardPiece6->Size = System::Drawing::Size(2, 27);
			this->boardPiece6->TabIndex = 5;
			// 
			// boardPiece5
			// 
			this->boardPiece5->AutoSize = true;
			this->boardPiece5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece5->Location = System::Drawing::Point(37, 66);
			this->boardPiece5->Name = L"boardPiece5";
			this->boardPiece5->Size = System::Drawing::Size(2, 27);
			this->boardPiece5->TabIndex = 4;
			// 
			// boardPiece4
			// 
			this->boardPiece4->AutoSize = true;
			this->boardPiece4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece4->Location = System::Drawing::Point(265, 16);
			this->boardPiece4->Name = L"boardPiece4";
			this->boardPiece4->Size = System::Drawing::Size(2, 27);
			this->boardPiece4->TabIndex = 3;
			// 
			// boardPiece3
			// 
			this->boardPiece3->AutoSize = true;
			this->boardPiece3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece3->Location = System::Drawing::Point(189, 16);
			this->boardPiece3->Name = L"boardPiece3";
			this->boardPiece3->Size = System::Drawing::Size(2, 27);
			this->boardPiece3->TabIndex = 2;
			// 
			// boardPiece2
			// 
			this->boardPiece2->AutoSize = true;
			this->boardPiece2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece2->Location = System::Drawing::Point(113, 16);
			this->boardPiece2->Name = L"boardPiece2";
			this->boardPiece2->Size = System::Drawing::Size(2, 27);
			this->boardPiece2->TabIndex = 1;
			// 
			// boardPiece1
			// 
			this->boardPiece1->AutoSize = true;
			this->boardPiece1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->boardPiece1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardPiece1->Location = System::Drawing::Point(37, 16);
			this->boardPiece1->Name = L"boardPiece1";
			this->boardPiece1->Size = System::Drawing::Size(2, 27);
			this->boardPiece1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 334);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(158, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Click on die to form words";
			// 
			// currentWordLabel
			// 
			this->currentWordLabel->AutoSize = true;
			this->currentWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentWordLabel->Location = System::Drawing::Point(13, 308);
			this->currentWordLabel->Name = L"currentWordLabel";
			this->currentWordLabel->Size = System::Drawing::Size(114, 16);
			this->currentWordLabel->TabIndex = 3;
			this->currentWordLabel->Text = L"Your current word:";
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(206, 333);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(90, 23);
			this->btnSubmit->TabIndex = 4;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(382, 99);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(159, 187);
			this->textBox2->TabIndex = 5;
			// 
			// wordBankLabel
			// 
			this->wordBankLabel->AutoSize = true;
			this->wordBankLabel->Location = System::Drawing::Point(442, 83);
			this->wordBankLabel->Name = L"wordBankLabel";
			this->wordBankLabel->Size = System::Drawing::Size(99, 13);
			this->wordBankLabel->TabIndex = 6;
			this->wordBankLabel->Text = L"Your current words:";
			// 
			// headerLabel
			// 
			this->headerLabel->AutoSize = true;
			this->headerLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->headerLabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->headerLabel->Location = System::Drawing::Point(12, 9);
			this->headerLabel->Name = L"headerLabel";
			this->headerLabel->Size = System::Drawing::Size(240, 34);
			this->headerLabel->TabIndex = 7;
			this->headerLabel->Text = L"Team 8 Boggle";
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(12, 379);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(75, 23);
			this->startButton->TabIndex = 8;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			// 
			// resetButton
			// 
			this->resetButton->Location = System::Drawing::Point(93, 379);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(75, 23);
			this->resetButton->TabIndex = 9;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			// 
			// quitButton
			// 
			this->quitButton->Location = System::Drawing::Point(174, 379);
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(75, 23);
			this->quitButton->TabIndex = 10;
			this->quitButton->Text = L"Quit";
			this->quitButton->UseVisualStyleBackColor = true;
			// 
			// rotateButton
			// 
			this->rotateButton->Location = System::Drawing::Point(382, 333);
			this->rotateButton->Name = L"rotateButton";
			this->rotateButton->Size = System::Drawing::Size(159, 23);
			this->rotateButton->TabIndex = 11;
			this->rotateButton->Text = L"Rotate Board";
			this->rotateButton->UseVisualStyleBackColor = true;
			// 
			// UserInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 440);
			this->Controls->Add(this->rotateButton);
			this->Controls->Add(this->quitButton);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->headerLabel);
			this->Controls->Add(this->wordBankLabel);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->currentWordLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->gameBoardGroupBox);
			this->Name = L"UserInterface";
			this->Text = L"Team 8 Boggle by Bradley and Burkhart";
			this->gameBoardGroupBox->ResumeLayout(false);
			this->gameBoardGroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
};
}