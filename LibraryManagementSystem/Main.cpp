#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Book
{
          int id;
          string title;
          string author;
};

void addBook()
{
          Book b;
          cout << "Enter book ID: ";
          cin >> b.id;
          cin.ignore();
          cout << "Enter book title: ";
          getline(cin, b.title);
          cout << "Enter the author: ";
          getline(cin, b.author);

          ofstream file("books.txt", ios::app);
          file << b.id << endl;
          file << b.title << endl;
          file << b.author << endl;
          file.close();

          cout << "Book added successfully!\n";
}

void listBooks()
{
          ifstream file("books.txt");
          if (!file)
          {
                    cout << "No books found!\n";
                    return;
          }

          Book b;
          cout << "\n==== Book List ====\n";

          while (file >> b.id)
          {
                    file.ignore();
                    getline(file, b.title);
                    getline(file, b.author);

                    cout << "ID: " << b.id << endl;
                    cout << "Title: " << b.title << endl;
                    cout << "Author: " << b.author << endl;
                    cout << "--------------------\n";
          }

          file.close();
}

void searchBook()
{
          int searchId;
          cout << "Enter book ID to search: ";
          cin >> searchId;

          ifstream file("books.txt");
          if (!file)
          {
                    cout << "No books available!\n";
                    return;
          }

          Book b;
          bool found = false;

          while (file >> b.id)
          {
                    file.ignore();
                    getline(file, b.title);
                    getline(file, b.author);

                    if (b.id == searchId)
                    {
                              cout << "\nBook found!\n";
                              cout << "ID: " << b.id << endl;
                              cout << "Title: " << b.title << endl;
                              cout << "Author: " << b.author << endl;
                              found = true;
                              break;
                    }
          }

          if (!found)
                    cout << "Book not found!\n";

          file.close();
}

void deleteBook()
{
          int deleteId;
          cout << "Enter book ID to delete: ";
          cin >> deleteId;

          ifstream file("books.txt");
          if (!file)
          {
                    cout << "No books available!\n";
                    return;
          }

          vector<Book> books;
          Book b;
          bool found = false;

          while (file >> b.id)
          {
                    file.ignore();
                    getline(file, b.title);
                    getline(file, b.author);

                    if (b.id == deleteId)
                    {
                              found = true;
                              continue;
                    }
                    books.push_back(b);
          }

          file.close();

          if (!found)
          {
                    cout << "Book not found!\n";
                    return;
          }

          ofstream out("books.txt");
          for (const auto &bk : books)
          {
                    out << bk.id << endl;
                    out << bk.title << endl;
                    out << bk.author << endl;
          }

          out.close();
          cout << "Book deleted successfully!\n";
}

int main()
{
          int choice;

          do
          {
                    cout << "\n------ Library Management System -----\n";
                    cout << "1. Add Book\n";
                    cout << "2. List Books\n";
                    cout << "3. Search Book\n";
                    cout << "4. Delete Book\n";
                    cout << "5. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                              addBook();
                              break;
                    case 2:
                              listBooks();
                              break;
                    case 3:
                              searchBook();
                              break;
                    case 4:
                              deleteBook();
                              break;
                    case 5:
                              cout << "Exiting...\n";
                              break;
                    default:
                              cout << "Invalid choice! Try again.\n";
                    }
          } while (choice != 5);

          return 0;
}
