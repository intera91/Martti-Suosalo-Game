#pragma once

enum GameDirection {
	INCREASE,
	DECREASE
};



class CGame {

public:
	CGame();
	~CGame();
	void Play(int iTourNumber, int iPlayerNumber);
	int contains7(int value);
	int sumdigits(int value);
	void changegamedirection();

	GameDirection direction;
};