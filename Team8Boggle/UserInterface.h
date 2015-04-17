#pragma once

#include "GameBoard.h"
#include "FileIO.h"
#include "Trie.h"

namespace Team8Boggle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for UserInterface
	/// </summary>
	public ref class UserInterface : public System::Windows::Forms::Form
	{

	private: FileIO^ file;
	private: System::Windows::Forms::TextBox^  highScoreTextBox;
	private: System::Windows::Forms::TextBox^  wordBox;
	private: System::Windows::Forms::TextBox^  txtScore;
	private: System::Windows::Forms::Label^  scoreBoardLabel;




	private: Trie^ trie;

	public:
		UserInterface(void);

	private: System::Windows::Forms::DataGridView^  wordBankDGV;

	public:

	public:

	private: GameBoard^ theBoard;
	private: System::Void PopulateGameBoard();
	private: array<System::Windows::Forms::Label^>^ boardPieces = gcnew array<System::Windows::Forms::Label^>(16);
	private: System::Void rotateButton_Click(System::Object^  sender, System::EventArgs^  e);
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
	private: System::Windows::Forms::TextBox^  guessedWordTextBox;





	private: System::Windows::Forms::Label^  instructionLabel;
	private: System::Windows::Forms::Label^  currentWordLabel;
	private: System::Windows::Forms::Button^  btnSubmit;

	private: System::Windows::Forms::Label^  wordBankLabel;
	private: System::Windows::Forms::Label^  headerLabel;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::Button^  resetButton;
	private: System::Windows::Forms::Button^  quitButton;
	private: System::Windows::Forms::Button^  rotateButton;
	private: System::Windows::Forms::Timer^  gameTimer;


	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  timeLeft;
	private: System::Windows::Forms::Label^  timerLabel;
	private: ResourceManager^ resourceManager;

	private: System::Timers::Timer^ currentGameTimer;
	private: System::Windows::Forms::Timer^  completeGameTimer;



	private:
		DateTime time;

	private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e);


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	protected:
		~UserInterface();
		void InitializeComponent(void);

	private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void boardPiece_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void gameTimer_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void calculateTimer();

	private: System::Void completeGameTimer_Tick(System::Object^  sender, System::EventArgs^  e);

	private: System::Void CalculateScore();
	private: int calculatePointValue(String^ str);
	private: System::Void gameBoardGroupBox_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void quitButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void resetButton_Click(System::Object^  sender, System::EventArgs^  e);
};
}