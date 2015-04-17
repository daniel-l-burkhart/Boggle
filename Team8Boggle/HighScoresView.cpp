#include "HighScoresView.h"
#include "FileIO.h"

using namespace Team8Boggle;

void HighScoresView::TryAddHighScore(String^ name, int score) {
	if (playersCount < 10) {
		players[playersCount] = gcnew Player(name, score);
		playersCount++;
	}
	else if (score < getPlayerWithLowestScore()->getScore()) {
		return;
	}
	else {
		this->addAndSort(gcnew Player(name, score));
	}
	
	this->textBox1->Clear();
	int i = 0;
	while (i < this->playersCount) {
		this->textBox1->AppendText(players[i]->getName() + " : " + players[i]->getScore() + "\n");
		i++;
	}
}

void HighScoresView::addAndSort(Player^ player) {
	if (this->playersCount == 10) {
		this->players[getLowestScoreIndex()] = player;
	}
	else {
		players[this->playersCount] = player;
		this->playersCount++;
	}
}

int HighScoresView::getLowestScoreIndex() {
	int lowestScoreIndex = 0;
	int lowestScore = INT_MAX;
	Player^ lowScorePlayer;
	for (int i = 0; i < playersCount; i++) {
		if (players[i]->getScore() < lowestScore) {
			lowestScore = players[i]->getScore();
			lowScorePlayer = players[i];
			lowestScoreIndex = i;
		}
	}
	return lowestScoreIndex;
}

Player^ HighScoresView::getPlayerWithLowestScore() {
	int lowestScore = INT_MAX;
	Player^ lowScorePlayer;
	for (int i = 0; i < playersCount; i++) {
		if (players[i]->getScore() < lowestScore) {
			lowestScore = players[i]->getScore();
			lowScorePlayer = players[i];
		}
	}
	return lowScorePlayer;
}

void HighScoresView::highScoresSave() {
	FileIO^ fileIO = gcnew(FileIO);
	fileIO->SaveScores(this->players);
}

void HighScoresView::highScoresLoad() {

}
