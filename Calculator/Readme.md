# Simple Calculator 

A simple **Calculator** project in C++ that performs basic arithmetic operations: addition, subtraction, multiplication, and division. This project is console-based and designed for beginners to practice C++ input/output and control structures.

## Features

1. Add two numbers
2. Subtract two numbers
3. Multiply two numbers
4. Divide two numbers (with division by zero check)
5. User-friendly console interface


## File Structure

SimpleCalculator/
1. Main.cpp # Main C++ source code file
2. README.md # Project documentation

## How to Compile & Run

1. Open your terminal (Linux/macOS) or Command Prompt (Windows).  
2. Navigate to the project directory:  

cd path/to/SimpleCalculator

3. Compile the code:

g++ SimpleCalculator.cpp -o SimpleCalculator

4. Run the executable:

./SimpleCalculator
5. **Sample output** 
====-Simple Calculator-====
Enter first number: 10
Enter operator (+, -, *, /): +
Enter second number: 5
Result = 15

====-Simple Calculator-====
Enter first number: 10
Enter operator (+, -, *, /): /
Enter second number: 0
Cannot divide by zero!

====-Simple Calculator-====
Enter first number: 8
Enter operator (+, -, *, /): *
Enter second number: 7
Result = 56

**Notes**
. Only basic arithmetic operations are supported.
. Division by zero is handled with an error message.
. This is a console application and does not save results.

