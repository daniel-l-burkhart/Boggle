#include "UserInterface.h"

using namespace Team8Boggle;

/// <summary>
/// Initializes a new instance of the <see cref="UserInterface"/> class.
/// </summary>
UserInterface::UserInterface(void){

	this->InitializeComponent();


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