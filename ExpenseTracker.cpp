#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
struct expense
{
          string date;
          string item;
          float amount;
};
class ExpenseTracker
{

private:
          vector<expense> expenses;
          string filename = "expenses.txt";
          void loadfromfile()
          {
                    ifstream file(filename);
                    if (!file)
                              return;
                    expense e;
                    while (file >> e.date >> e.item >> e.amount)
                    {
                              expenses.push_back(e);
                    }
                    file.close();
          }
          void savetofile()
          {
                    ofstream file(filename);
                    for (auto &e : expenses)
                    {
                              file << e.date << " " << e.item << " " << e.amount << endl;
                    }
                    file.close();
          }

public:
          ExpenseTracker()
          {
                    loadfromfile();
          }
          void addexpense()
          {
                    expense e;
                    cout << "Enter Date(YYYY-MM-DD):";
                    cin >> e.date;
                    cout << "Enter item name:";
                    cin >> e.item;
                    cout << "Enter Amount:";
                    cin >> e.amount;
                    expenses.push_back(e);
                    savetofile();
                    cout << "Expense Added successfully!\n";
          }
          void displayexpense()
          {
                    if (expenses.empty())
                    {
                              cout << "No expeses recorded.\n";
                              return;
                    }
                    cout << left << setw(15) << "Date" << setw(20) << "item" << setw(10) << "Amount" << endl;
                    cout << "--------------------\n";
                    for (auto &e : expenses)
                    {
                              cout << setw(15) << e.date << setw(20) << e.item << "$" << setw(10) << e.amount << endl;
                    }
          }
          void totalamount()
          {
                    float total = 0;
                    for (auto &e : expenses)
                              total += e.amount;
                    cout << "Total expensse:$" << total << endl;
          }
          void totalbymonth()
          {
                    string month;
                    cout << "Enter month(YYYY-MM):";
                    cin >> month;
                    float total = 0;
                    for (auto &e : expenses)
                    {
                              if (e.date.substr(0, 7) == month)
                                        total += e.amount;
                    }
                    cout << "Total expenses for " << month << ": $" << total << endl;
          }
          void searchbydate()
          {
                    string date;
                    cout << "Enter date (YYYY-MM-DD):";
                    cin >> date;
                    bool found = false;
                    cout << left << setw(15) << "Date" << setw(20) << "item" << setw(10) << "Amount" << endl;
                    cout << "-----------------\n";
                    for (auto &e : expenses)
                    {
                              if (e.date == date)
                              {
                                        cout << left << setw(15) << e.date << setw(20) << e.item << "$" << setw(10) << e.amount << endl;
                                        found = true;
                              }
                    }
                    if (!found)
                              cout << "NO expense found on this date.\n";
          }
};

int main()
{
          ExpenseTracker tracker;
          int choice;
          while (true)
          {
                    cout << "\n=======Expense tracker=======\n";
                    cout << "1.Add Expense \n";
                    cout << "2.Display all expense\n";
                    cout << "3.Show total expense\n";
                    cout << "4.Show total expense by month\n";
                    cout << "5.search expense by date\n";
                    cout << "6.exit\n";
                    cout << "Enter tour choice:";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                              tracker.addexpense();

                              break;
                    case 2:
                              tracker.displayexpense();
                              break;

                    case 3:
                              tracker.totalamount();

                              break;
                    case 4:
                              tracker.totalbymonth();
                              break;
                    case 5:
                              tracker.searchbydate();

                              break;
                    case 6:
                              cout << "Exiting....goodbye!\n";
                              return 0;

                    default:
                              cout << "Invalid Choice!Try again\n";

                              break;
                    }
          }

          return 0;
}