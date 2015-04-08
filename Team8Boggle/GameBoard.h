#pragma once
#include "Die.h"

	ref class GameBoard
	{
	public:
		GameBoard();
		virtual ~GameBoard();
		String^ GameBoard::getPositionValue(int position);
		void RotateGameBoard();
		void selectDie(int position);
		bool getDieSelectionStatus(int position);
	private:
		array<Die^>^ DIES = gcnew array<Die^>(16);
		Die^ lastSelectedDie;
	};


