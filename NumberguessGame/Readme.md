# Number Guessing Game 

A simple **Number Guessing Game** implemented in C++ where the computer randomly selects a number between 1 and 100, and the user tries to guess it. The program provides feedback if the guess is too high or too low until the correct number is guessed.

## Features

1. Generates a random number between 1 and 100  
2. User inputs guesses via console  
3. Provides hints: "Too high" or "Too low"  
4. Tracks number of attempts  
5. Validates input to prevent non-numeric entries  

## File Structure
NumberGuessingGame/
1. Main.cpp # Main C++ source code file
2. README.md # Project documentation

## How to Compile & Run
1. Open terminal (Linux/macOS) or Command Prompt (Windows).  
2. Navigate to the project directory:  


cd path/to/NumberGuessingGame

4. Compile the code:

g++ MAIN.cpp -o main
5. Run the executable:

./NumberGuessingGame 
**Sample output**
Welcome to the Number Guessing Game!
I have selected a number between 1 and 100.
Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37
Congratulations! You guessed it in 3 attempts.

**Notes**

.The random number is generated each time the program runs.
.Input is validated to accept only numeric guesses.

