#include <iostream>
using namespace std;

int main()
{
          int choice;
          double balance = 1000.0;
          double amount;

          do
          {
                    cout << "\n===== ATM MENU =====\n";
                    cout << "1. Check Balance\n";
                    cout << "2. Deposit Money\n";
                    cout << "3. Withdraw Money\n";
                    cout << "4. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                              cout << "Your Current Balance: $" << balance << endl;
                              break;

                    case 2:
                              cout << "Enter Amount to Deposit: ";
                              cin >> amount;
                              if (amount > 0)
                              {
                                        balance += amount;
                                        cout << "Deposit Successful! New Balance: $" << balance << endl;
                              }
                              else
                                        cout << "Invalid Amount!\n";
                              break;

                    case 3:
                              cout << "Enter Amount to Withdraw: ";
                              cin >> amount;
                              if (amount > balance)
                                        cout << "Insufficient Funds!\n";
                              else if (amount <= 0)
                                        cout << "Invalid Amount!\n";
                              else
                              {
                                        balance -= amount;
                                        cout << "Withdraw Successful! New Balance: $" << balance << endl;
                              }
                              break;

                    case 4:
                              cout << "Thank You for using ATM!\n";
                              break;

                    default:
                              cout << "Invalid Choice! Try Again.\n";
                    }

          } while (choice != 4);

          return 0;
}
