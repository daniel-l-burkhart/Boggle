#include "Player.h"
#include <iostream>

Player::Player() {

}
Player::Player(String^ name, int score) {
	this->name = name;
	this->score = score;
}

String^ Player::getName() {
	return this->name;
}

int Player::getScore() {
	return this->score;
}

void Player::invalidateScore() {
	this->score = INT_MAX;
}


Player::~Player()
{
}
