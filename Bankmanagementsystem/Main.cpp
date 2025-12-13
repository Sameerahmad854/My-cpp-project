#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Account
{
          string name;
          int accountNumber;
          double balance;
};

void saveToFile(const vector<Account> &accounts)
{
          ofstream file("bank.txt");
          for (const auto &acc : accounts)
          {
                    file << acc.name << " " << acc.accountNumber << " " << acc.balance << endl;
          }
          file.close();
}

void loadFromFile(vector<Account> &accounts)
{
          ifstream file("bank.txt");
          if (!file)
                    return;

          Account acc;
          while (file >> acc.name >> acc.accountNumber >> acc.balance)
          {
                    accounts.push_back(acc);
          }
          file.close();
}

void createAccount(vector<Account> &accounts)
{
          Account acc;
          cout << "Enter name: ";
          cin >> acc.name;
          cout << "Enter account number: ";
          cin >> acc.accountNumber;
          acc.balance = 0;

          accounts.push_back(acc);
          saveToFile(accounts);

          cout << "\nAccount created successfully!\n";
}

void depositMoney(vector<Account> &accounts)
{
          int accNum;
          double amount;
          cout << "Enter account number: ";
          cin >> accNum;

          for (auto &acc : accounts)
          {
                    if (acc.accountNumber == accNum)
                    {
                              cout << "Enter amount to deposit: ";
                              cin >> amount;
                              acc.balance += amount;
                              saveToFile(accounts);
                              cout << "Amount deposited successfully!\n";
                              return;
                    }
          }
          cout << "Account not found!\n";
}

void withdrawMoney(vector<Account> &accounts)
{
          int accNum;
          double amount;
          cout << "Enter account number: ";
          cin >> accNum;

          for (auto &acc : accounts)
          {
                    if (acc.accountNumber == accNum)
                    {
                              cout << "Enter amount to withdraw: ";
                              cin >> amount;
                              if (amount > acc.balance)
                              {
                                        cout << "Insufficient balance!\n";
                              }
                              else
                              {
                                        acc.balance -= amount;
                                        saveToFile(accounts);
                                        cout << "Withdrawal successful!\n";
                              }
                              return;
                    }
          }
          cout << "Account not found!\n";
}

void checkBalance(const vector<Account> &accounts)
{
          int accNum;
          cout << "Enter account number: ";
          cin >> accNum;

          for (const auto &acc : accounts)
          {
                    if (acc.accountNumber == accNum)
                    {
                              cout << "\nName: " << acc.name << endl;
                              cout << "Account Number: " << acc.accountNumber << endl;
                              cout << "Balance: " << acc.balance << endl;
                              return;
                    }
          }
          cout << "Account not found!\n";
}

void displayAll(const vector<Account> &accounts)
{
          cout << "\n===== All Accounts =====\n";
          for (const auto &acc : accounts)
          {
                    cout << "\nName: " << acc.name << endl;
                    cout << "Account Number: " << acc.accountNumber << endl;
                    cout << "Balance: " << acc.balance << endl;
          }
}

int main()
{
          vector<Account> accounts;
          loadFromFile(accounts);

          int choice;
          do
          {
                    cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
                    cout << "1. Create Account\n";
                    cout << "2. Deposit Money\n";
                    cout << "3. Withdraw Money\n";
                    cout << "4. Check Balance\n";
                    cout << "5. Display All Accounts\n";
                    cout << "6. Exit\n";
                    cout << "Enter choice: ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                              createAccount(accounts);
                              break;
                    case 2:
                              depositMoney(accounts);
                              break;
                    case 3:
                              withdrawMoney(accounts);
                              break;
                    case 4:
                              checkBalance(accounts);
                              break;
                    case 5:
                              displayAll(accounts);
                              break;
                    case 6:
                              cout << "Exiting...\n";
                              break;
                    default:
                              cout << "Invalid choice! Try again.\n";
                    }
          } while (choice != 6);

          return 0;
}
