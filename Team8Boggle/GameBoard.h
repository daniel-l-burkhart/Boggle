#pragma once
#include "Die.h"

	ref class GameBoard
	{
	public:
		GameBoard();
		virtual ~GameBoard();
		String^ GameBoard::getPositionValue(int position);
	private:
		array<Die^>^ DIES = gcnew array<Die^>(16);
	};


