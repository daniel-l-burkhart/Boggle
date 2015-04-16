#include "GameBoard.h"
#include <string>
#include <iostream>
#include <time.h>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
using namespace System;

/// <summary>
/// Initializes a new instance of the <see cref="GameBoard"/> class.
/// </summary>
GameBoard::GameBoard() {
	this->lastSelectedDiePosition = -1;
	int i = 0;
	while (i < 16) {
		DIES[i] = gcnew Die(i);
		i++;
	}
	this->shuffleDies();
}

/// <summary>
/// Shuffles the dies.
/// </summary>
void GameBoard::shuffleDies() {
	std::srand(unsigned (time(0)));
	array<Die^>^ tempDies = gcnew array<Die^>(16);
	std::vector<int> intVector;
	int i = 0;
	while(i < 16) {
		intVector.push_back(i);
		i++;
	}
	std::random_shuffle(intVector.begin(), intVector.end());
	i = 0;
	for (std::vector<int>::iterator it = intVector.begin(); it != intVector.end(); ++it) {
		tempDies[i] = DIES[*it];
		i++;
	}
	DIES = tempDies;
}
/// <summary>
/// Gets the position value.
/// </summary>
/// <param name="position">The position.</param>
/// <returns></returns>
String^ GameBoard::getPositionValue(int position) {
	return DIES[position]->getValue();
}

/// <summary>
/// Clears the selected dies.
/// </summary>
void GameBoard::clearSelectedDies() {
	int i = 0;
	while (i < 16) {
		DIES[i]->deselect_die();
		i++;
	}
	this->lastSelectedDiePosition = -1;
	this->clearGuessedLetters();
}

/// <summary>
/// Appends the guessed letter.
/// </summary>
/// <param name="letter">The letter.</param>
void GameBoard::appendGuessedLetter(String^ letter) {

	this->GuessedLetters = this->GuessedLetters + letter;
}

/// <summary>
/// Gets the guessed letters.
/// </summary>
/// <returns></returns>
String^ GameBoard::getGuessedLetters() {
	return GuessedLetters;
}
/// <summary>
/// Clears the guessed letters.
/// </summary>
void GameBoard::clearGuessedLetters() {
	this->GuessedLetters = "";
}

/// <summary>
/// Rotates the game board.
/// </summary>
void GameBoard::RotateGameBoard() {
	array<Die^>^ rotatedDies = gcnew array<Die^>(16);
	rotatedDies[0] = DIES[12];
	rotatedDies[1] = DIES[8];
	rotatedDies[2] = DIES[4];
	rotatedDies[3] = DIES[0];
	rotatedDies[4] = DIES[13];
	rotatedDies[5] = DIES[9];
	rotatedDies[6] = DIES[5];
	rotatedDies[7] = DIES[1];
	rotatedDies[8] = DIES[14];
	rotatedDies[9] = DIES[10];
	rotatedDies[10] = DIES[6];
	rotatedDies[11] = DIES[2];
	rotatedDies[12] = DIES[15];
	rotatedDies[13] = DIES[11];
	rotatedDies[14] = DIES[7];
	rotatedDies[15] = DIES[3];
	DIES = rotatedDies;
	this->clearSelectedDies();

}

/// <summary>
/// Selects the die.
/// </summary>
/// <param name="position">The position.</param>
void GameBoard::selectDie(int position) {
	if (this->validSelection(position)) {
		this->DIES[position]->select_die();
		this->lastSelectedDiePosition = position;
		this->GuessedLetters = this->GuessedLetters + this->DIES[position]->getValue();
	}
}

/// <summary>
/// Valids the selection.
/// </summary>
/// <param name="position">The position.</param>
/// <returns></returns>
bool GameBoard::validSelection(int position) {
	if (this->lastSelectedDiePosition == -1) {
		return true;
	}

	else if (this->DIES[position]->isSelected()) {
		return false;
	}

	else if ((position == 0 || position == 4 || position == 8 || position == 12)
		&& (this->lastSelectedDiePosition == 3
		|| this->lastSelectedDiePosition == 7
		|| this->lastSelectedDiePosition == 11
		|| this->lastSelectedDiePosition == 15)) {
		return false;
	}

	else if ((position == 3 || position == 7 || position == 11 || position == 15)
		&& (this->lastSelectedDiePosition == 0
		|| this->lastSelectedDiePosition == 4
		|| this->lastSelectedDiePosition == 8
		|| this->lastSelectedDiePosition == 12)) {
		return false;
	}

	else if (position == this->lastSelectedDiePosition - 4
		|| position == this->lastSelectedDiePosition + 4
		|| position == this->lastSelectedDiePosition + 1
		|| position == this->lastSelectedDiePosition - 1
		) {
		return true;
	}
	else if (position == this->lastSelectedDiePosition - 3
		|| position == this->lastSelectedDiePosition + 3
		|| position == this->lastSelectedDiePosition + 5
		|| position == this->lastSelectedDiePosition - 5
		) {
		return true;
	}
}

/// <summary>
/// Gets the die selection status.
/// </summary>
/// <param name="position">The position.</param>
/// <returns></returns>
bool GameBoard::getDieSelectionStatus(int position) {
	return DIES[position]->isSelected();
}


/// <summary>
/// Finalizes an instance of the <see cref="GameBoard"/> class.
/// </summary>
GameBoard::~GameBoard()
{
}

