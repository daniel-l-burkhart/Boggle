#pragma once

using namespace System;

ref class Player
{
public:
	Player();
	Player(String^ name, int score);
	virtual ~Player();
	String^ getName();
	int getScore();
	void invalidateScore();
private:
	
	int score;
	String^ name;
};

