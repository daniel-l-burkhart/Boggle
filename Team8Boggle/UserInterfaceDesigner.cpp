#include "UserInterface.h"

using namespace Team8Boggle;

/// <summary>
/// Initializes the component.
/// </summary>
void UserInterface::InitializeComponent(void){
	this->components = (gcnew System::ComponentModel::Container());
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
	this->guessedWordTextBox = (gcnew System::Windows::Forms::TextBox());
	this->instructionLabel = (gcnew System::Windows::Forms::Label());
	this->currentWordLabel = (gcnew System::Windows::Forms::Label());
	this->btnSubmit = (gcnew System::Windows::Forms::Button());
	this->wordBankLabel = (gcnew System::Windows::Forms::Label());
	this->headerLabel = (gcnew System::Windows::Forms::Label());
	this->startButton = (gcnew System::Windows::Forms::Button());
	this->resetButton = (gcnew System::Windows::Forms::Button());
	this->quitButton = (gcnew System::Windows::Forms::Button());
	this->rotateButton = (gcnew System::Windows::Forms::Button());
	this->gameTimer = (gcnew System::Windows::Forms::Timer(this->components));
	this->timeLeft = (gcnew System::Windows::Forms::Label());
	this->timerLabel = (gcnew System::Windows::Forms::Label());
	this->completeGameTimer = (gcnew System::Windows::Forms::Timer(this->components));
	this->wordBox = (gcnew System::Windows::Forms::TextBox());
	this->txtScore = (gcnew System::Windows::Forms::TextBox());
	this->scoreBoardLabel = (gcnew System::Windows::Forms::Label());
	this->highScoresButton = (gcnew System::Windows::Forms::Button());
	this->playerNameTextBox = (gcnew System::Windows::Forms::TextBox());
	this->playerNameLabel = (gcnew System::Windows::Forms::Label());
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
	this->boardPiece16->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece15->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece14->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece13->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece12->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece11->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece10->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece9->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece8->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece7->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece6->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece5->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece4->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece3->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece2->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
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
	this->boardPiece1->Click += gcnew System::EventHandler(this, &UserInterface::boardPiece_Click);
	// 
	// guessedWordTextBox
	// 
	this->guessedWordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->guessedWordTextBox->Location = System::Drawing::Point(12, 334);
	this->guessedWordTextBox->Name = L"guessedWordTextBox";
	this->guessedWordTextBox->ReadOnly = true;
	this->guessedWordTextBox->Size = System::Drawing::Size(158, 22);
	this->guessedWordTextBox->TabIndex = 1;
	// 
	// instructionLabel
	// 
	this->instructionLabel->AutoSize = true;
	this->instructionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->instructionLabel->Location = System::Drawing::Point(12, 60);
	this->instructionLabel->Name = L"instructionLabel";
	this->instructionLabel->Size = System::Drawing::Size(215, 20);
	this->instructionLabel->TabIndex = 2;
	this->instructionLabel->Text = L"Click on die to form words";
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
	this->btnSubmit->Click += gcnew System::EventHandler(this, &UserInterface::submitButton_Click);
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
	this->headerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->headerLabel->ForeColor = System::Drawing::SystemColors::ControlText;
	this->headerLabel->Location = System::Drawing::Point(12, 9);
	this->headerLabel->Name = L"headerLabel";
	this->headerLabel->Size = System::Drawing::Size(0, 33);
	this->headerLabel->TabIndex = 7;
	// 
	// startButton
	// 
	this->startButton->Location = System::Drawing::Point(12, 379);
	this->startButton->Name = L"startButton";
	this->startButton->Size = System::Drawing::Size(75, 23);
	this->startButton->TabIndex = 8;
	this->startButton->Text = L"Start";
	this->startButton->UseVisualStyleBackColor = true;
	this->startButton->Click += gcnew System::EventHandler(this, &UserInterface::startButton_Click);
	// 
	// resetButton
	// 
	this->resetButton->Location = System::Drawing::Point(93, 379);
	this->resetButton->Name = L"resetButton";
	this->resetButton->Size = System::Drawing::Size(75, 23);
	this->resetButton->TabIndex = 9;
	this->resetButton->Text = L"Reset";
	this->resetButton->UseVisualStyleBackColor = true;
	this->resetButton->Click += gcnew System::EventHandler(this, &UserInterface::resetButton_Click);
	// 
	// quitButton
	// 
	this->quitButton->Location = System::Drawing::Point(174, 379);
	this->quitButton->Name = L"quitButton";
	this->quitButton->Size = System::Drawing::Size(75, 23);
	this->quitButton->TabIndex = 10;
	this->quitButton->Text = L"Quit";
	this->quitButton->UseVisualStyleBackColor = true;
	this->quitButton->Click += gcnew System::EventHandler(this, &UserInterface::quitButton_Click);
	// 
	// rotateButton
	// 
	this->rotateButton->Location = System::Drawing::Point(382, 333);
	this->rotateButton->Name = L"rotateButton";
	this->rotateButton->Size = System::Drawing::Size(159, 23);
	this->rotateButton->TabIndex = 11;
	this->rotateButton->Text = L"Rotate Board";
	this->rotateButton->UseVisualStyleBackColor = true;
	this->rotateButton->Click += gcnew System::EventHandler(this, &UserInterface::rotateButton_Click);
	// 
	// gameTimer
	// 
	this->gameTimer->Enabled = true;
	this->gameTimer->Interval = 1000;
	this->gameTimer->Tick += gcnew System::EventHandler(this, &UserInterface::gameTimer_Tick);
	// 
	// timeLeft
	// 
	this->timeLeft->AutoSize = true;
	this->timeLeft->Location = System::Drawing::Point(379, 389);
	this->timeLeft->Name = L"timeLeft";
	this->timeLeft->Size = System::Drawing::Size(0, 13);
	this->timeLeft->TabIndex = 12;
	// 
	// timerLabel
	// 
	this->timerLabel->AutoSize = true;
	this->timerLabel->Location = System::Drawing::Point(442, 389);
	this->timerLabel->Name = L"timerLabel";
	this->timerLabel->Size = System::Drawing::Size(28, 13);
	this->timerLabel->TabIndex = 13;
	this->timerLabel->Text = L"3:00";
	// 
	// completeGameTimer
	// 
	this->completeGameTimer->Interval = 180000;
	this->completeGameTimer->Tick += gcnew System::EventHandler(this, &UserInterface::completeGameTimer_Tick);
	// 
	// wordBox
	// 
	this->wordBox->Location = System::Drawing::Point(382, 99);
	this->wordBox->Multiline = true;
	this->wordBox->Name = L"wordBox";
	this->wordBox->ReadOnly = true;
	this->wordBox->Size = System::Drawing::Size(159, 187);
	this->wordBox->TabIndex = 14;
	// 
	// txtScore
	// 
	this->txtScore->Location = System::Drawing::Point(12, 434);
	this->txtScore->Multiline = true;
	this->txtScore->Name = L"txtScore";
	this->txtScore->ReadOnly = true;
	this->txtScore->Size = System::Drawing::Size(529, 150);
	this->txtScore->TabIndex = 15;
	// 
	// scoreBoardLabel
	// 
	this->scoreBoardLabel->AutoSize = true;
	this->scoreBoardLabel->Location = System::Drawing::Point(13, 418);
	this->scoreBoardLabel->Name = L"scoreBoardLabel";
	this->scoreBoardLabel->Size = System::Drawing::Size(35, 13);
	this->scoreBoardLabel->TabIndex = 16;
	this->scoreBoardLabel->Text = L"label1";
	// 
	// highScoresButton
	// 
	this->highScoresButton->Location = System::Drawing::Point(256, 378);
	this->highScoresButton->Name = L"highScoresButton";
	this->highScoresButton->Size = System::Drawing::Size(75, 23);
	this->highScoresButton->TabIndex = 17;
	this->highScoresButton->Text = L"High Scores";
	this->highScoresButton->UseVisualStyleBackColor = true;
	this->highScoresButton->Click += gcnew System::EventHandler(this, &UserInterface::highScoresButton_Click);
	// 
	// playerNameTextBox
	// 
	this->playerNameTextBox->Location = System::Drawing::Point(344, 21);
	this->playerNameTextBox->Name = L"playerNameTextBox";
	this->playerNameTextBox->Size = System::Drawing::Size(212, 20);
	this->playerNameTextBox->TabIndex = 18;
	this->playerNameTextBox->Text = L"Boggle Player";
	// 
	// playerNameLabel
	// 
	this->playerNameLabel->AutoSize = true;
	this->playerNameLabel->Location = System::Drawing::Point(252, 24);
	this->playerNameLabel->Name = L"playerNameLabel";
	this->playerNameLabel->Size = System::Drawing::Size(79, 13);
	this->playerNameLabel->TabIndex = 19;
	this->playerNameLabel->Text = L"Player Name ->";
	// 
	// UserInterface
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(579, 596);
	this->Controls->Add(this->playerNameLabel);
	this->Controls->Add(this->playerNameTextBox);
	this->Controls->Add(this->highScoresButton);
	this->Controls->Add(this->scoreBoardLabel);
	this->Controls->Add(this->txtScore);
	this->Controls->Add(this->wordBox);
	this->Controls->Add(this->timerLabel);
	this->Controls->Add(this->timeLeft);
	this->Controls->Add(this->rotateButton);
	this->Controls->Add(this->quitButton);
	this->Controls->Add(this->resetButton);
	this->Controls->Add(this->startButton);
	this->Controls->Add(this->headerLabel);
	this->Controls->Add(this->wordBankLabel);
	this->Controls->Add(this->btnSubmit);
	this->Controls->Add(this->currentWordLabel);
	this->Controls->Add(this->instructionLabel);
	this->Controls->Add(this->guessedWordTextBox);
	this->Controls->Add(this->gameBoardGroupBox);
	this->Location = System::Drawing::Point(256, 378);
	this->Name = L"UserInterface";
	this->Text = L"Team 8 Boggle by Bradley and Burkhart";
	this->gameBoardGroupBox->ResumeLayout(false);
	this->gameBoardGroupBox->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}

