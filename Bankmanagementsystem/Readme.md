# Bank Management System 

A simple console-based **Bank Management System** in C++ that allows users to create accounts, deposit/withdraw money, check balances, and display all accounts. Data is stored in a text file for persistence.


## Features
1. Create a new bank account
2. Deposit money into an account
3. Withdraw money from an account
4. Check account balance
5. Display all accounts
6. Persistent data storage using a text file (`bank.txt`)

## File Structure
 give next## File Structure
BankManagement/
1) .BankManagement.cpp   # Main C++ source code file
 2) .bank.txt             # Data file to store account info (auto-created)
3) .README.md            # Project documentation

## How to Compile & Run

1. Open your terminal (Linux/macOS) or Command Prompt (Windows).  
2. Navigate to the project directory:  

cd path/to/BankManagement

3. Compile the code:

g++ BankManagement.cpp -o BankManagement

4. Run the executable:

./BankManagement
Menu Options
===== BANK MANAGEMENT SYSTEM =====
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Check Balance
5. Display All Accounts
6. Exit

**Sample Output**
===== BANK MANAGEMENT SYSTEM =====
Enter choice: 1
Enter name: John
Enter account number: 101

Account created successfully!

===== BANK MANAGEMENT SYSTEM =====
Enter choice: 2
Enter account number: 101
Enter amount to deposit: 500
Amount deposited successfully!

===== BANK MANAGEMENT SYSTEM =====
Enter choice: 4
Enter account number: 101

Name: John
Account Number: 101
Balance: 500

Notes

**bank.txt** will be created automatically in the project folder.
Only numeric account numbers are supported.
Deposit/withdraw amounts must be positive.
If the withdrawal amount exceeds the balance, an error message is displayed.
Data persists in **bank.txt** even after the program exits.