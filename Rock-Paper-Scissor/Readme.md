# Rock Paper Scissors (C++)

A simple **console-based Rock Paper Scissors game** written in C++.  
The user plays against the computer, which makes a random choice each time.

This project is great for beginners to understand conditional logic, random number generation, and user input in C++.

---

## Features

1. Classic Rock–Paper–Scissors game
2. User vs Computer gameplay
3. Random computer choice using `rand()`
4. Simple and interactive console interface
5. Beginner-friendly C++ project

## Game Rules

1. Rock beats Scissors  
2. Scissors beats Paper  
3. Paper beats Rock  
4. Same choices result in a tie


## File Structure

RockPaperScissors/
1. main.cpp # Main C++ source code
2. README.md # Project documentation

## How to Compile & Run

1. Open terminal or command prompt  
2. Navigate to the project folder:


cd path/to/RockPaperScissors

3. Compile the program:

g++ main.cpp -o RockPaperScissors

4. Run the game:

./RockPaperScissors
**Menu option**
1. Rock
2. Paper
3. Scissors

**Sample Output**
Rock-Paper-Scissors
1. Rock
2. Paper
3. Scissors
Enter your choice (1-3): 1

Computer choice: Scissors
You win!

**Notes**

(i).User input must be between 1 and 3

(ii). Computer choice is generated randomly each run

(iii).Uses srand(time(0)) for randomness

(iv). One-round game (can be extended easily)