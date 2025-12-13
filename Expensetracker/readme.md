# Expense Tracker (C++)

A simple **Expense Tracker** console application in C++ to record, manage, and analyze personal expenses. The application allows users to add expenses, view all expenses, calculate totals, and search expenses by date or month. Data is stored in a text file (`expenses.txt`) for persistence.

## Features
1. Add a new expense with date, item name, and amount
2. Display all recorded expenses
3. Show total expenses
4. Show total expenses by month
5. Search expenses by specific date
6. Persistent data storage using `expenses.txt`

## File Structure

ExpenseTracker/

1. Main.cpp # Main C++ source code file
2. expenses.txt # Data file to store expenses (auto-created)
3. README.md # Project documentation

## How to Compile & Run
1. Open terminal (Linux/macOS) or Command Prompt (Windows).  
2. Navigate to the project directory:

cd path/to/ExpenseTracker

3. Compile the code:

g++ ExpenseTracker.cpp -o ExpenseTracker

4. Run the executable:
./ExpenseTracker

**Menu Option**

=======Expense Tracker=======
1. Add Expense
2. Display All Expenses
3. Show Total Expense
4. Show Total Expense by Month
5. Search Expense by Date
6. Exit

**Sample Output**
=======Expense tracker=======
Enter your choice: 2
Date           Item                 Amount    
--------------------------------------------
2023-11-01     Biryani              $120
2023-11-02     meal                 $150
2023-11-02     chicken              $110

=======Expense tracker=======
Enter your choice: 3
Total expense: $380

=======Expense tracker=======
Enter your choice: 4
Enter month(YYYY-MM): 2023-11
Total expenses for 2023-11: $380

=======Expense tracker=======
Enter your choice: 5
Enter date (YYYY-MM-DD): 2023-11-02
Date           Item                 Amount    
--------------------------------------------
2023-11-02     meal                 $150
2023-11-02     chicken              $110

=======Expense tracker=======
Enter your choice: 6
Exiting....goodbye!
**Notes**
.The file expenses.txt will be created automatically in the project folder.
.Ensure that the date is entered in YYYY-MM-DD format.
.Amounts must be positive numbers.
