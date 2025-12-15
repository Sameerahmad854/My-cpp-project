# Password Generator 

A simple **console-based Password Generator** written in C++ that creates a random and secure password based on the user-defined length.

This project demonstrates the use of random number generation, strings, and basic loops in C++.

## Features

1. Generates random passwords
2. Includes:
  (i). Uppercase letters
  (ii). Lowercase letters
  (iii). Numbers
  (iv). Special symbols
3. User-defined password length
4. Beginner-friendly C++ project

## File Structure

PasswordGenerator/

1) main.cpp # Main C++ source code
2) README.md # Project documentation


## How to Compile & Run

1. Open your terminal or command prompt  
2. Navigate to the project directory:


cd path/to/PasswordGenerator

3. Compile the program:

g++ main.cpp -o PasswordGenerator

4. Run the executable:

./PasswordGenerator
**Sample Output**
Enter password length: 12
Generated password: A9@kP#2fL!Q3
-----------------------
**Notes**
1. Password length should be a positive number
2. Every run generates a different password
3. Uses rand() and srand(time(0)) for randomness
4. Suitable for learning purposes (not for cryptographic security)