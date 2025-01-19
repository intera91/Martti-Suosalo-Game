#pragma once

class CGame {
private:
    int numPlayers;
    int numTurns;
    std::vector<int> players;
    int currentPlayer;
    int direction;
    int currentNumber;

public:
    // Constructor to initialize the game with number of players and turns
    CGame(int players, int turns);

    // Function declarations
    bool isDivisibleBy7(int number);
    bool contains7(int number);
    bool sumOfDigitsIs7(int number);
    bool isMarttiSuosalo(int number);
    bool isSameDigitNumber(int number);
    void playGame();
};


