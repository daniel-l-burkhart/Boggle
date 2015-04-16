#pragma once
#include "Die.h"
using namespace std;

ref class GameBoard
{
public:
	GameBoard();
	virtual ~GameBoard();
	String^ GameBoard::getPositionValue(int position);
	void RotateGameBoard();
	void selectDie(int position);
	bool getDieSelectionStatus(int position);
	void clearSelectedDies();
	String^ getGuessedLetters();
	void clearGuessedLetters();
	void appendGuessedLetter(String^ letter);
private:
	String^ GuessedLetters;
	array<Die^>^ DIES = gcnew array<Die^>(16);
	int lastSelectedDiePosition;
	bool validSelection(int position);
	void shuffleDies();
};


