# To-Do List 

A simple **To-Do List** console application in C++ that allows users to manage tasks. Users can add tasks, delete tasks, and view all tasks. Tasks are saved in a text file for persistence.

## Features

1. Add new tasks
2. Delete existing tasks
3. View all tasks
4. Persistent storage using `tasks.txt`
5. Beginner-friendly console application

## File Structure

ToDoList/

1. main.cpp # Main C++ source code
2. tasks.txt # Stores tasks (auto-generated)
3. README.md # Project documentation

## How to Compile & Run

1. Open Terminal (Linux/macOS) or Command Prompt (Windows) and navigate to the project directory:

cd path/to/ToDoList

## Compile the program:
g++ main.cpp -o ToDoList

## Run the executable:

./ToDoList
## Menu Options
===== TO-DO LIST =====
1. Add Task
2. Delete Task
3. List Tasks
4. Exit
## Sample Output
===== TO-DO LIST =====
Enter your choice: 1
Enter task: Finish C++ project
Task added successfully!

===== TO-DO LIST =====
Enter your choice: 1
Enter task: Study for quiz
Task added successfully!

===== TO-DO LIST =====
Enter your choice: 3

----- TASK LIST -----
1. Finish C++ project
2. Study for quiz

===== TO-DO LIST =====
Enter your choice: 2
Enter task number to delete: 1
Task deleted successfully!

===== TO-DO LIST =====
Enter your choice: 3

----- TASK LIST -----
1. Study for quiz

## Notes

Tasks are stored in tasks.txt for persistence.
Input numbers must correspond to valid menu options.
Console-based program suitable for beginners.