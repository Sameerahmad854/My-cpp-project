#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Student
{
          int roll;
          string name;
          float marks;
};

vector<Student> students;

void loadFromFile()
{
          ifstream file("students.txt");
          if (!file)
                    return;

          Student s;
          while (file >> s.roll >> s.name >> s.marks)
          {
                    students.push_back(s);
          }
          file.close();
}

void saveToFile()
{
          ofstream file("students.txt");
          for (auto &s : students)
          {
                    file << s.roll << " " << s.name << " " << s.marks << endl;
          }
          file.close();
}

void addStudent()
{
          Student s;
          cout << "Enter Roll Number: ";
          cin >> s.roll;
          cout << "Enter Name: ";
          cin >> s.name;
          cout << "Enter Marks: ";
          cin >> s.marks;

          students.push_back(s);
          cout << "Student Added Successfully!\n";
          saveToFile();
}

void searchStudent()
{
          int r;
          cout << "Enter Roll Number to Search: ";
          cin >> r;

          for (auto &s : students)
          {
                    if (s.roll == r)
                    {
                              cout << "\nStudent Found:\n";
                              cout << "Roll: " << s.roll << "\nName: " << s.name << "\nMarks: " << s.marks << endl;
                              return;
                    }
          }
          cout << "No student found with this roll number.\n";
}

void deleteStudent()
{
          int r;
          cout << "Enter Roll Number to Delete: ";
          cin >> r;

          for (int i = 0; i < students.size(); i++)
          {
                    if (students[i].roll == r)
                    {
                              students.erase(students.begin() + i);
                              cout << "Student Deleted Successfully!\n";
                              saveToFile();
                              return;
                    }
          }
          cout << "Student Not Found!\n";
}

void displayAll()
{
          if (students.empty())
          {
                    cout << "No students available.\n";
                    return;
          }

          cout << "\n==== Student List ====\n";
          for (auto &s : students)
          {
                    cout << "Roll: " << s.roll
                         << " | Name: " << s.name
                         << " | Marks: " << s.marks << endl;
          }
}

int main()
{
          loadFromFile();
          int choice;

          while (true)
          {
                    cout << "\n===== Student Database System =====\n";
                    cout << "1. Add Student\n";
                    cout << "2. Search Student\n";
                    cout << "3. Delete Student\n";
                    cout << "4. Display All Students\n";
                    cout << "5. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                              addStudent();
                              break;
                    case 2:
                              searchStudent();
                              break;
                    case 3:
                              deleteStudent();
                              break;
                    case 4:
                              displayAll();
                              break;
                    case 5:
                              cout << "Exiting... Goodbye!\n";
                              return 0;
                    default:
                              cout << "Invalid choice! Try again.\n";
                    }
          }
          return 0;
}
