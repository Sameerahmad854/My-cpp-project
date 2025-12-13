# Contact Manager (C++)

A simple **Contact Manager** project in C++ that allows users to manage their contacts. Users can add, search, list, and delete contacts. All contact data is stored in a text file (`contact.txt`) for persistence.

## Features

1. Add a new contact (name and phone number)  
2. Search a contact by name  
3. List all saved contacts  
4. Delete a contact by selecting its number from the list  
5. Persistent storage using a text file (`contact.txt`)  

## File Structure

ContactManager/

1.Main.cpp # Main C++ source code file
2. contact.txt # Data file to store contacts (auto-created)
3. README.md # Project documentation

## How to Compile & Run

1. Open your terminal (Linux/macOS) or Command Prompt (Windows).  
2. Navigate to the project directory:  


cd path/to/ContactManager

3. Compile the code:

g++ ContactManager.cpp -o ContactManager
4. Run the executable:

./ContactManager 

Menu Options
====Contact Manager====
1. Add contact
2. Search contact
3. List all contacts
4. Delete contact
5. Exit

Sample Output
====Contact Manager====
Enter your choice: 1
Enter name: SAMEER_AHMAD
Enter phone: 03456778891
Contact saved successfully!

====Contact Manager====
Enter your choice: 3

-----Contact list-----
1. SAMEER_AHMAD-03456778891

====Contact Manager====
Enter your choice: 2
Enter name to search: SAMEER_AHMAD
Contact found: SAMEER_AHMAD-03456778891

====Contact Manager====
Enter your choice: 4
-----Contact list-----
1. SAMEER_AHMAD-03456778891
Enter contact number to delete: 1
Contact deleted successfully

**Notes**
.All contact data is stored in contact.txt automatically.
.Contact names must be single words (no spaces).
.Phone numbers are stored as strings to accommodate different formats.
.This is a simple console application and does not encrypt data.