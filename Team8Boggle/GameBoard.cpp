#include "GameBoard.h"


GameBoard::GameBoard() {
	int i = 0;
	while (i < 16) {
		Die:Die^ theDie = gcnew Die(i);
		DIES[i] = theDie;
		i++;
	}
}

String^ GameBoard::getPositionValue(int position) {
	return DIES[position]->getValue();
}

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
}

void GameBoard::selectDie(int position) {
	this->DIES[position]->toggleSelected();
	this->lastSelectedDie = this->DIES[position];
}

bool GameBoard::getDieSelectionStatus(int position) {
	return DIES[position]->isSelected();
}


GameBoard::~GameBoard()
{
}

