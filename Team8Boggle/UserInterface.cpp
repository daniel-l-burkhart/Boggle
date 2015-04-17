#include "UserInterface.h"
#include "Trie.h"

using namespace Team8Boggle;
using namespace System::Collections;

/// <summary>
/// Initializes a new instance of the <see cref="UserInterface" /> class.
/// </summary>
UserInterface::UserInterface(void){

	this->file = gcnew FileIO();
	this->trie = this->file->getTrie();

	this->InitializeComponent();

	this->resourceManager = gcnew Resources::ResourceManager(L"Team8Boggle.UserInterfaceStrings", this->GetType()->Assembly);

	this->instructionLabel->Text = this->resourceManager->GetString("instructionText");
	this->currentWordLabel->Text = this->resourceManager->GetString("currentWordText");
	this->btnSubmit->Text = this->resourceManager->GetString("btnSubmitText");
	this->wordBankLabel->Text = this->resourceManager->GetString("wordBankText");
	this->headerLabel->Text = this->resourceManager->GetString("headerText");
	this->startButton->Text = this->resourceManager->GetString("startButtonText");
	this->resetButton->Text = this->resourceManager->GetString("resetButtonText");
	this->quitButton->Text = this->resourceManager->GetString("quitButtonText");
	this->rotateButton->Text = this->resourceManager->GetString("rotateButtonText");
	this->timeLeft->Text = this->resourceManager->GetString("timeLeftText");
	this->scoreBoardLabel->Text = this->resourceManager->GetString("scoreBoardText");

	this->boardPieces[0] = this->boardPiece1;
	this->boardPieces[1] = this->boardPiece2;
	this->boardPieces[2] = this->boardPiece3;
	this->boardPieces[3] = this->boardPiece4;
	this->boardPieces[4] = this->boardPiece5;
	this->boardPieces[5] = this->boardPiece6;
	this->boardPieces[6] = this->boardPiece7;
	this->boardPieces[7] = this->boardPiece8;
	this->boardPieces[8] = this->boardPiece9;
	this->boardPieces[9] = this->boardPiece10;
	this->boardPieces[10] = this->boardPiece11;
	this->boardPieces[11] = this->boardPiece12;
	this->boardPieces[12] = this->boardPiece13;
	this->boardPieces[13] = this->boardPiece14;
	this->boardPieces[14] = this->boardPiece15;
	this->boardPieces[15] = this->boardPiece16;

}

/// <summary>
/// Finalizes an instance of the <see cref="UserInterface" /> class.
/// </summary>
UserInterface::~UserInterface(){
	if (components){
		delete components;
	}
}

/// <summary>
/// Populates the game board.
/// </summary>
void UserInterface::PopulateGameBoard() {

	this->boardPiece1->Text = theBoard->getPositionValue(0);
	this->boardPiece2->Text = theBoard->getPositionValue(1);
	this->boardPiece3->Text = theBoard->getPositionValue(2);
	this->boardPiece4->Text = theBoard->getPositionValue(3);
	this->boardPiece5->Text = theBoard->getPositionValue(4);
	this->boardPiece6->Text = theBoard->getPositionValue(5);
	this->boardPiece7->Text = theBoard->getPositionValue(6);
	this->boardPiece8->Text = theBoard->getPositionValue(7);
	this->boardPiece9->Text = theBoard->getPositionValue(8);
	this->boardPiece10->Text = theBoard->getPositionValue(9);
	this->boardPiece11->Text = theBoard->getPositionValue(10);
	this->boardPiece12->Text = theBoard->getPositionValue(11);
	this->boardPiece13->Text = theBoard->getPositionValue(12);
	this->boardPiece14->Text = theBoard->getPositionValue(13);
	this->boardPiece15->Text = theBoard->getPositionValue(14);
	this->boardPiece16->Text = theBoard->getPositionValue(15);

	this->theBoard->getDieSelectionStatus(0) ? this->boardPiece1->BackColor = System::Drawing::Color::Green : this->boardPiece1->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(1) ? this->boardPiece2->BackColor = System::Drawing::Color::Green : this->boardPiece2->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(2) ? this->boardPiece3->BackColor = System::Drawing::Color::Green : this->boardPiece3->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(3) ? this->boardPiece4->BackColor = System::Drawing::Color::Green : this->boardPiece4->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(4) ? this->boardPiece5->BackColor = System::Drawing::Color::Green : this->boardPiece5->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(5) ? this->boardPiece6->BackColor = System::Drawing::Color::Green : this->boardPiece6->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(6) ? this->boardPiece7->BackColor = System::Drawing::Color::Green : this->boardPiece7->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(7) ? this->boardPiece8->BackColor = System::Drawing::Color::Green : this->boardPiece8->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(8) ? this->boardPiece9->BackColor = System::Drawing::Color::Green : this->boardPiece9->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(9) ? this->boardPiece10->BackColor = System::Drawing::Color::Green : this->boardPiece10->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(10) ? this->boardPiece11->BackColor = System::Drawing::Color::Green : this->boardPiece11->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(11) ? this->boardPiece12->BackColor = System::Drawing::Color::Green : this->boardPiece12->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(12) ? this->boardPiece13->BackColor = System::Drawing::Color::Green : this->boardPiece13->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(13) ? this->boardPiece14->BackColor = System::Drawing::Color::Green : this->boardPiece14->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(14) ? this->boardPiece15->BackColor = System::Drawing::Color::Green : this->boardPiece15->BackColor = System::Drawing::Color::DimGray;
	this->theBoard->getDieSelectionStatus(15) ? this->boardPiece16->BackColor = System::Drawing::Color::Green : this->boardPiece16->BackColor = System::Drawing::Color::DimGray;

	this->guessedWordTextBox->Text = this->theBoard->getGuessedLetters();
}


/// <summary>
/// Starts the button_ click.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::startButton_Click(System::Object^  sender, System::EventArgs^  e) {

	this->theBoard = gcnew GameBoard();
	this->wordBox->Text = "";
	this->PopulateGameBoard();
	this->calculateTimer();
}

/// <summary>
/// Boards the piece_ click.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::boardPiece_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::Label^ boardPiece = safe_cast<System::Windows::Forms::Label^>(sender);
	if (boardPiece->Equals(boardPiece1)) {
		this->theBoard->selectDie(0);
	}
	if (boardPiece->Equals(boardPiece2)) {
		this->theBoard->selectDie(1);
	}
	if (boardPiece->Equals(boardPiece3)) {
		this->theBoard->selectDie(2);
	}
	if (boardPiece->Equals(boardPiece4)) {
		this->theBoard->selectDie(3);
	}
	if (boardPiece->Equals(boardPiece5)) {
		this->theBoard->selectDie(4);
	}
	if (boardPiece->Equals(boardPiece6)) {
		this->theBoard->selectDie(5);
	}
	if (boardPiece->Equals(boardPiece7)) {
		this->theBoard->selectDie(6);
	}
	if (boardPiece->Equals(boardPiece8)) {
		this->theBoard->selectDie(7);
	}
	if (boardPiece->Equals(boardPiece9)) {
		this->theBoard->selectDie(8);
	}
	if (boardPiece->Equals(boardPiece10)) {
		this->theBoard->selectDie(9);
	}
	if (boardPiece->Equals(boardPiece11)) {
		this->theBoard->selectDie(10);
	}
	if (boardPiece->Equals(boardPiece12)) {
		this->theBoard->selectDie(11);
	}
	if (boardPiece->Equals(boardPiece13)) {
		this->theBoard->selectDie(12);
	}
	if (boardPiece->Equals(boardPiece14)) {
		this->theBoard->selectDie(13);
	}
	if (boardPiece->Equals(boardPiece15)) {
		this->theBoard->selectDie(14);
	}
	if (boardPiece->Equals(boardPiece16)) {
		this->theBoard->selectDie(15);
	}
	this->PopulateGameBoard();
}


/// <summary>
/// Rotates the button_ click.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::rotateButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->theBoard->RotateGameBoard();
	this->PopulateGameBoard();
}


/// <summary>
/// Games the timer_ tick.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::gameTimer_Tick(System::Object^  sender, System::EventArgs^  e) {


	int elapsedSeconds = (int)(DateTime::Now - this->time).TotalSeconds;
	int remainingSeconds = 180 - elapsedSeconds;

	if (remainingSeconds <= 0)
	{
		this->gameTimer->Stop();
	}

	int minutes = remainingSeconds / 60;
	int seconds = remainingSeconds % 60;

	this->timerLabel->Text = minutes.ToString() + ":" + seconds.ToString();
}

/// <summary>
/// Calculates the timer.
/// </summary>
System::Void UserInterface::calculateTimer() {
	this->gameTimer->Start();
	this->completeGameTimer->Start();

	this->time = DateTime::Now;
}

/// <summary>
/// Completes the game timer_ tick.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::completeGameTimer_Tick(System::Object^  sender, System::EventArgs^  e){
	this->completeGameTimer->Stop();
	this->CalculateScore();
}

/// <summary>
/// Calculates the score.
/// </summary>
System::Void UserInterface::CalculateScore(){
	String^ guessedWords = this->wordBox->Text;

	array<String^>^ words = guessedWords->Split();

	int userScore = 0;
	for (int i = 0; i < words->Length; i++){

		if (this->trie->search(words[i])){

			userScore += this->calculatePointValue(words[i]);
		}
	}
	this->txtScore->Text += ("New Score: " + userScore + "\r\n");
}

/// <summary>
/// Calculates the point value.
/// </summary>
/// <param name="string">The string.</param>
/// <returns></returns>
int UserInterface::calculatePointValue(String^ currentWord){

	int score = 0;

	if (currentWord->Length > 8){
		score = 11;
	}
	switch (currentWord->Length){
	case 3: {
		score = 1;
		break;
	}
	case 4:{
		score = 1;
		break;
	}
	case 5:{
		score = 2;
		break;
	}
	case 6:{
		score = 3;
		break;
	}
	case 7:{
		score = 5;
		break;
	}
	case 8:{
		score = 11;
		break;
	}
	default:{
		score = 0;
		break;
	}

	}

	return score;
}


/// <summary>
/// Submits the button_ click.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->wordBox->AppendText(this->theBoard->getGuessedLetters() + "\n");
	this->guessedWordTextBox->Clear();
	this->theBoard->clearSelectedDies();
	this->PopulateGameBoard();
}

/// <summary>
/// Quits the button_ click.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::quitButton_Click(System::Object^  sender, System::EventArgs^  e){
	this->gameTimer->Stop();
	this->completeGameTimer->Stop();
	this->timerLabel->Text = "0:00";
	this->CalculateScore();
}

/// <summary>
/// Resets the button_ click.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::resetButton_Click(System::Object^  sender, System::EventArgs^  e){
	this->guessedWordTextBox->Clear();
	this->theBoard->clearSelectedDies();
	this->PopulateGameBoard();
}