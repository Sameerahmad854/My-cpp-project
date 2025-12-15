# Student Report Card 

A simple **Student Report Card** program in C++ that calculates the total marks, percentage, and grade of a student based on marks entered for 5 subjects.

## Features

1. Input student name
2. Enter marks for 5 subjects (out of 100)
3. Calculate total marks
4. Calculate percentage
5. Assign grade based on percentage
  (i). `A` : 90% and above
  (ii). `B` : 80% – 89%
  (iii). `C` : 70% – 79%
  (iv). `D` : 60% – 69%
  (v) `F` : Below 60%

## File Structure

StudentReportCard/

1. main.cpp # Main C++ source code
2. README.md # Project documentation


## How to Compile & Run

### Step 1: Open Terminal or Command Prompt
Navigate to the project folder:


cd path/to/StudentReportCard

## Step 2: Compile the Program
g++ main.cpp -o StudentReportCard

## Step 3: Run the Executable
./StudentReportCard  

## Sample Output
====Student report card====

Enter student name: Sameer
Marks of 5 subjects (out of 100)
Subject 1: 95
Subject 2: 88
Subject 3: 92
Subject 4: 85
Subject 5: 90

===Result====
Name: Sameer
Total Marks: 450/500
Percentage: 90%
Grade: A

## Notes

1. Marks should be numeric and out of 100.

2. Grade is assigned automatically based on the percentage.

3. This is a console-based program suitable for beginners.