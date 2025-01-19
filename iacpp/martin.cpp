#include <iostream>
#include <vector>
#include <string>
#include "martin.hpp"



// Constructor to initialize the game with number of players and turns
CGame::CGame(int players, int turns) {
    numPlayers = players;
    numTurns = turns;
    currentPlayer = 0;
    direction = 1; // 1 for clockwise, -1 for counter-clockwise
    currentNumber = 1;
    
    // Initialize player numbers (1 to numPlayers)
    for (int i = 0; i < numPlayers; ++i) {
        this->players.push_back(i + 1);
    }
}

// Function to check if a number is divisible by 7
bool CGame::isDivisibleBy7(int number) {
    return (number % 7 == 0);
}

// Function to check if a number contains the digit 7
bool CGame::contains7(int number) {
    while (number > 0) {
        if (number % 10 == 7) {  // Check the last digit
            return true;
        }
        number /= 10;  // Remove the last digit
    }
    return false;
}

// Function to check if the sum of the digits is 7
bool CGame::sumOfDigitsIs7(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return (sum == 7);
}

// Function to check if a number qualifies for "Martti Suosalo"
bool CGame::isMarttiSuosalo(int number) {
    return isDivisibleBy7(number) || contains7(number) || sumOfDigitsIs7(number);
}

// Function to check if a number consists of the same digits
bool CGame::isSameDigitNumber(int number) {
    int lastDigit = number % 10;
    if(number < 10)
	return false;

    while (number > 0) {
        if (number % 10 != lastDigit) {
            return false;
        }
        number /= 10;
    }
    return true;
}

// Function to play the game for the specified number of turns
void CGame::playGame() {
    for (int turn = 0; turn < numTurns; ++turn) {
        // Determine if the number should be Martti Suosalo
        if (isMarttiSuosalo(currentNumber)) {
            std::cout << "Player " << players[currentPlayer] << " shouts 'Martti Suosalo'\n";
        } else {
            std::cout << "Player " << players[currentPlayer] << " shouts '" << currentNumber << "'\n";
        }

        // Check if the number has the same digits
        if (isSameDigitNumber(currentNumber)) {
            direction = -direction; // Reverse the direction
        }

        // Increment the number and move to the next player
        currentNumber++;
        currentPlayer = (currentPlayer + direction + numPlayers) % numPlayers; // Wrap around the players
    }
}

int main() {
    int numPlayers, numTurns;
    std::cout << "Enter number of players: ";
    std::cin >> numPlayers;
    std::cout << "Enter number of turns: ";
    std::cin >> numTurns;

    // Create a game object and start the game
    CGame game(numPlayers, numTurns);
    game.playGame();

    return 0;
}
