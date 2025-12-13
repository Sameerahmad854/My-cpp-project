# Library Management System 

A simple **Library Management System** in C++ that allows users to add, list, search, and delete books. Data is stored in a text file (`books.txt`) for persistence.

## Features

1. Add a new book with ID, title, and author
2. List all books
3. Search for a book by ID
4. Delete a book by ID
5. Persistent data storage using a text file

## File Structure

LibraryManagement/

1. Main.cpp # Main C++ source code file
2. books.txt # Data file to store book records (auto-created)
3. README.md # Project documentation

## How to Compile & Run

1. Open your terminal (Linux/macOS) or Command Prompt (Windows).  
2. Navigate to the project directory:


cd path/to/LibraryManagement

3. Compile the code:
 g++ MAIN.cpp -o main
4. Run the executable:
./LibraryManagement

**Menu Options**
------ Library Management System -----
1. Add Book
2. List Books
3. Search Book
4. Delete Book
5. Exit


**Sample output**
------ Library Management System -----
Enter your choice: 1
Enter book ID: 102
Enter book title: C++ Programming
Enter the author: Bjarne Stroustrup
Book added successfully!

------ Library Management System -----
Enter your choice: 2

==== Book List ====
ID: 102
Title: C++ Programming
Author: Bjarne Stroustrup
--------------------

------ Library Management System -----
Enter your choice: 3
Enter book ID to search: 102

Book found!
ID: 102
Title: C++ Programming
Author: Bjarne Stroustrup

------ Library Management System -----
Enter your choice: 4
Enter book ID to delete: 102
Book deleted successfully!

------ Library Management System -----
Enter your choice: 5
Exiting...

**Notes**

.books.txt will be created automatically in the project folder.
.Each book must have a unique numeric ID.
.Book title and author names are case-sensitive.
.Deleted books are permanently removed from the file.

