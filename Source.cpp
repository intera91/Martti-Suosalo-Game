#include <iostream>
#include <string>
#include "Source.hpp"


using namespace std;

int main(int argc, char** argv) {

	long nbPlayers;
	long nRounds;
	CGame game;


	if (argc == 3) {
		cout << "nPlayers: " << argv[1] << " nRounds: " << argv[2] << endl;
		nbPlayers = strtol(argv[1], NULL, 10);
		nRounds = strtol(argv[2], NULL, 10);
	}
	else {
		cout << "Usage: Source <Number of Players> <Number of rounds>" << endl;
		exit(1);
	}

	game.Play(nRounds, nbPlayers);

	}

CGame::CGame() {
	direction = GameDirection::INCREASE;
}

CGame::~CGame() {
	// Do nothing
}

void CGame::Play(int iTourNumber, int iPlayerNumber) {

	int newValueToPlay = 0;
	int PlayerPlaying = 1;
	int i;	// Loop counter

	// Looping for the number of tours
	for (i = 0; i < iTourNumber; i++) {
		if (i == 0) {			// First turn 
			newValueToPlay++;
			cout << "P: " << PlayerPlaying << " \"" << newValueToPlay << "\"" << endl;
			PlayerPlaying++;
			newValueToPlay++;
			continue;
		}

		if (!(newValueToPlay % 11) || !(newValueToPlay % 111)) {
			// Check for different possible conditions
			cout << "P: " << PlayerPlaying << " \"" << newValueToPlay << "\"" << endl;
			changegamedirection();
			if (direction == GameDirection::INCREASE) {
				PlayerPlaying++;
				if (PlayerPlaying > iPlayerNumber)
					PlayerPlaying = 1;
			}
			if (direction == GameDirection::DECREASE) {
				PlayerPlaying--;
				if (PlayerPlaying == 0)
					PlayerPlaying = iPlayerNumber;
			}
			newValueToPlay++;
			continue;
		}
		else if ((!(newValueToPlay % 7)) || (contains7(newValueToPlay)) || (sumdigits(newValueToPlay) == 7)) {
			cout << "P: " << PlayerPlaying << " \"" << "Martti Suasolo" << "\"" << endl;
			newValueToPlay++;
			
			if (direction == GameDirection::INCREASE) {
				PlayerPlaying++;
				if (PlayerPlaying > iPlayerNumber)
					PlayerPlaying = 1;
			}
			if (direction == GameDirection::DECREASE) {
				PlayerPlaying--;
				if (PlayerPlaying == 0)
					PlayerPlaying = iPlayerNumber;
			}
			
			
			continue;
		}
		else {
			cout << "P: " << PlayerPlaying << " \"" << newValueToPlay << "\"" << endl;
			if (direction == GameDirection::INCREASE) {
				PlayerPlaying++;
				if (PlayerPlaying > iPlayerNumber)
					PlayerPlaying = 1;
			}

			if (direction == GameDirection::DECREASE) {
				PlayerPlaying--;
				if (PlayerPlaying == 0)
					PlayerPlaying = iPlayerNumber;
			}



			newValueToPlay++;
			continue;

		}

	}
}
	


int CGame::contains7(int value) {
	
	string str = to_string(value);

	if (str.find("7") != string::npos)
		return(1);
	else
		return(0);

}


int CGame::sumdigits(int value) {
	int m;
	int sum = 0;
	
	while (value > 0)
	{
		m = value % 10;
		sum = sum + m;
		value = value / 10;
	}
	return(sum);
}


void CGame::changegamedirection() {

	
	if (direction == GameDirection::INCREASE) {
		direction = GameDirection::DECREASE;	
		return;
	}
	if (direction == GameDirection::DECREASE) {
		direction = GameDirection::INCREASE;
		return;
}

}




























