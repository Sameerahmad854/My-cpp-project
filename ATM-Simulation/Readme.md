# ATM Simulation

A simple **ATM Simulation** project in C++ that allows a user to:  

1. Check account balance  
2. Deposit money  
3. Withdraw money  
4. Exit the system  

This project is console-based and uses basic C++ input/output operations. It simulates a simple ATM without connecting to a real bank system.

## Features

- User-friendly menu-driven interface  
- Tracks account balance during program execution  
- Handles invalid input (e.g., negative deposit/withdrawal amounts)  
- Beginner-friendly C++ console application  

## File Structure

ATM_Simulation/
ATM_Simulation.cpp # Main C++ source code file
 README.md # Project documentation

## How to Compile & Run

1. Open your terminal (Linux/macOS) or Command Prompt (Windows).  
2. Navigate to the project directory:


cd path/to/ATM_Simulation


Compile the code:
g++ ATM_Simulation.cpp -o ATM_Simulation


Run the executable:
./ATM_Simulation  


Menu Options
===== ATM MENU =====
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
**Sample Output**


===== ATM MENU =====
Enter your choice: 1
Your Current Balance: $1000

===== ATM MENU =====
Enter your choice: 2
Enter Amount to Deposit: 500
Deposit Successful! New Balance: $1500

===== ATM MENU =====
Enter your choice: 3
Enter Amount to Withdraw: 200
Withdraw Successful! New Balance: $1300

===== ATM MENU =====
Enter your choice: 4
Thank You for using ATM!
    **Notes**
Initial account balance is set to $1000.

Deposit and withdraw amounts must be positive numbers.

If the withdrawal amount exceeds the available balance, an error message will appear.

This is a simple console simulation and does not store data after the program exits.