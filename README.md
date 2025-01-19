# Martti Suosalo Game

## Description

This was written as an exercise during a job interview, there were obviously constraints of time and no external resources were used.

There is room for improvement that much is obvious but it's a good start

Source.cpp and Source.hpp contain the original version as written for the interview.

an AI written version (corrected) is available in iacpp subproject for comparison


The **Martti Suosalo Game** is a simple C++ game based on a set of rules involving players calling out numbers, while adhering to special rules involving the number 7. Players take turns calling out numbers, but when certain conditions are met (such as divisibility by 7, the number containing a 7, or the sum of digits being 7), the player says "Martti Suosalo" instead of the number. The game also involves reversing the direction of play when a number with the same digits is called.

### Game Rules:

1. Players are arranged in a ring.
2. Players call out consecutive natural numbers.
3. If the number is divisible by 7, contains the digit 7, or has a digit sum of 7, the player shouts "Martti Suosalo" instead of the number.
4. If the number has all identical digits (e.g., 11, 22), the direction of play is reversed.
5. The game continues until a player breaks a rule (e.g., calling the wrong number or violating a rule), at which point they must take a drink.

## Features

- Players are arranged in a circular manner.
- The game dynamically handles any number of players (1 or more).
- Number rules include:
  - Divisibility by 7.
  - Containing the digit 7.
  - Sum of digits equals 7.
- Direction reverses when numbers with identical digits are called (e.g., 11, 22).
- Outputs the results for each round of the game, showing which player shouts which number.

## Requirements

- C++11 or later (C++14 recommended).
- CMake 3.10 or later for building the project.

## Installation

1. **Clone the repository:**

   ```bash# Martti Suosalo Game

## Description

The **Martti Suosalo Game** is a simple C++ game based on a set of rules involving players calling out numbers, while adhering to special rules involving the number 7. Players take turns calling out numbers, but when certain conditions are met (such as divisibility by 7, the number containing a 7, or the sum of digits being 7), the player says "Martti Suosalo" instead of the number. The game also involves reversing the direction of play when a number with the same digits is called.

### Game Rules:

1. Players are arranged in a ring.
2. Players call out consecutive natural numbers.
3. If the number is divisible by 7, contains the digit 7, or has a digit sum of 7, the player shouts "Martti Suosalo" instead of the number.
4. If the number has all identical digits (e.g., 11, 22), the direction of play is reversed.
5. The game continues until a player breaks a rule (e.g., calling the wrong number or violating a rule), at which point they must take a drink.

## Features

- Players are arranged in a circular manner.
- The game dynamically handles any number of players (1 or more).
- Number rules include:
  - Divisibility by 7.
  - Containing the digit 7.
  - Sum of digits equals 7.
- Direction reverses when numbers with identical digits are called (e.g., 11, 22).
- Outputs the results for each round of the game, showing which player shouts which number.

## Requirements

- C++11 or later (C++14 recommended).
- CMake 3.10 or later for building the project.

## Installation

1. **Clone the repository:**

   ```bash
   git clone <repository-url>
   cd MarttiSuosaloGame

   git clone <repository-url>
   cd MarttiSuosaloGame
