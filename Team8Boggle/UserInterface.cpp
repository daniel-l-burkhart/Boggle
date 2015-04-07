#include "UserInterface.h"

using namespace Team8Boggle;

/// <summary>
/// Initializes a new instance of the <see cref="UserInterface"/> class.
/// </summary>
UserInterface::UserInterface(void){

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

}

/// <summary>
/// Finalizes an instance of the <see cref="UserInterface"/> class.
/// </summary>
UserInterface::~UserInterface(){
	if (components){
		delete components;
	}
}

/// <summary>
/// Starts the button_ click.
/// </summary>
/// <param name="sender">The sender.</param>
/// <param name="e">The e.</param>
System::Void UserInterface::startButton_Click(System::Object^  sender, System::EventArgs^  e) {

	this->calculateTimer();

	GameBoard^ theBoard = gcnew GameBoard();
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
}

System::Void UserInterface::gameBoardGroupBox_Enter(System::Object^  sender, System::EventArgs^  e) {
}


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

System::Void UserInterface::calculateTimer() {
	this->gameTimer->Start();

	this->time = DateTime::Now;
}