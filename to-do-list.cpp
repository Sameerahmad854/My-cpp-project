#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void listTasks()
{
          ifstream inFile("tasks.txt");
          string task;
          int count = 1;
          cout << "\n----- TASK LIST -----\n";
          while (getline(inFile, task))
          {
                    cout << count << ". " << task << endl;
                    count++;
          }
          inFile.close();
          if (count == 1)
                    cout << "No tasks found!\n";
}

void addTask()
{
          string task;
          cin.ignore();
          cout << "Enter task: ";
          getline(cin, task);
          ofstream outFile("tasks.txt", ios::app);
          outFile << task << endl;
          outFile.close();
          cout << "Task added successfully!\n";
}

void deleteTask()
{
          vector<string> tasks;
          string task;
          ifstream inFile("tasks.txt");
          while (getline(inFile, task))
          {
                    tasks.push_back(task);
          }
          inFile.close();

          if (tasks.empty())
          {
                    cout << "No tasks to delete!\n";
                    return;
          }

          listTasks();
          int num;
          cout << "Enter task number to delete: ";
          cin >> num;

          if (num < 1 || num > tasks.size())
          {
                    cout << "Invalid task number!\n";
                    return;
          }

          tasks.erase(tasks.begin() + (num - 1));

          ofstream outFile("tasks.txt");
          for (string t : tasks)
          {
                    outFile << t << endl;
          }
          outFile.close();
          cout << "Task deleted successfully!\n";
}

int main()
{
          int choice;
          while (true)
          {
                    cout << "\n===== TO-DO LIST =====\n";
                    cout << "1. Add Task\n";
                    cout << "2. Delete Task\n";
                    cout << "3. List Tasks\n";
                    cout << "4. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                              addTask();
                              break;
                    case 2:
                              deleteTask();
                              break;
                    case 3:
                              listTasks();
                              break;
                    case 4:
                              cout << "Exiting...\n";
                              return 0;
                    default:
                              cout << "Invalid choice! Try again.\n";
                    }
          }

          return 0;
}
