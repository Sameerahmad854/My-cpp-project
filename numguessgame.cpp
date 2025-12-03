#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
          srand(time(0));
          int secretNumber = rand() % 100 + 1;
          int guess;
          int attempts = 0;
          cout << "Welcome to the Number Guessing Game!" << endl;
          cout << "I have selected a number between 1 and 100." << endl;

          do
          {
                    cout << "Enter your guess: ";
                    if (!(cin >> guess))
                    {
                              cout << "Invalid input! Please enter a number." << endl;
                              cin.clear();             // Clear error flags
                              cin.ignore(10000, '\n'); // Ignore invalid input
                              continue;
                    }
                    attempts++;
                    if (guess > secretNumber)
                    {
                              cout << "Too high! Try again." << endl;
                    }
                    else if (guess < secretNumber)
                    {
                              cout << "Too low! Try again." << endl;
                    }
                    else
                    {
                              cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
                    }
          } while (guess != secretNumber);

          return 0;
}
