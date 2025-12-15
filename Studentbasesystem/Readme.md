# Student Database System 

A **console-based Student Database System** in C++ that allows users to manage student records.  
The system supports adding, searching, deleting, and displaying student details. All data is stored persistently in a text file (`students.txt`).

## Features

1. Add new student records (roll number, name, marks)
2. Search for a student by roll number
3. Delete a student record
4. Display all student records
5. Persistent data storage using `students.txt`


## File Structure

1. main.cpp # Main C++ source code
2. students.txt # Data file for storing student records (auto-created)
3. README.md # Project documentation

## How to Compile & Run

### Step 1: Open Terminal or Command Prompt
Navigate to the project folder:


cd path/to/StudentDatabase

## Step 2: Compile the Program
g++ main.cpp -o StudentDatabase

## Step 3: Run the Executable
./StudentDatabase 


## Menu Options
===== Student Database System =====
1. Add Student
2. Search Student
3. Delete Student
4. Display All Students
5. Exit

## Sample Output
===== Student Database System =====
Enter your choice: 1
Enter Roll Number: 101
Enter Name: Sameer
Enter Marks: 95
Student Added Successfully!

===== Student Database System =====
Enter your choice: 4

==== Student List ====
Roll: 101 | Name: Sameer | Marks: 95

===== Student Database System =====
Enter your choice: 2
Enter Roll Number to Search: 101

Student Found:
Roll: 101
Name: Sameer
Marks: 95

===== Student Database System =====
Enter your choice: 3
Enter Roll Number to Delete: 101
Student Deleted Successfully!

### Notes

The students.txt file will be created automatically when you add the first student.
Roll numbers must be unique.
Marks should be entered as numeric values.
The program uses a simple console interface suitable for beginners.