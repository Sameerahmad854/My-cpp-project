#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     int choice;
     double temp, converted;

     cout << "Temperature converter\n";
     cout << "1.Calcius to fahrenheit\n";
     cout << "2.Fahrenheit to calcius\n";
     cout << "Enter you choice:";
     cin >> choice;
     if (choice == 1)
     {
          cout << "Enter temperature in calcius:";
          cin >> temp;
          converted = (temp * 9.0 / 5.0) + 32;
          cout << "Temperature is fahrenheit:" << converted << "F\n"
               << endl;
     }
     else if (choice == 2)
     {
          cout << "Temperature in fahrenheit:";
          cin >> temp;
          converted = (temp - 32) * 5.0 / 9.0;
          cout << "Temperature in calcius:" << converted << "C\n";
     }
     else
     {
          cout << "Invalid choice!\n";
     }

     return 0;
}