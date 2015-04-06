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


GameBoard::~GameBoard()
{
}

