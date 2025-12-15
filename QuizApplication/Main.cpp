#include <iostream>
using namespace std;

int main()
{
          int choice;
          int score = 0;
          // Question num-1:
          cout << "=====Quiz App=====\n";
          cout << "\n1.What is the capital of pakistan?\n";
          cout << "\n1.lahore\n2.karachi\n3.Islamabad\n4.peshawar\n";
          cout << "your answer :";
          cin >> choice;
          if (choice == 3)
                    score++;
          // Question num-2
          cout << "\n2.Which data type is used to store decimal value in c++?\n ";
          cout << "\n1.Int\n2.Float\n3.char\n4.bool\n";
          cout << "your answer :";
          cin >> choice;
          if (choice == 2)
                    score++;
          // Question num-3
          cout << "\n3.Which operator is used for logical AND in cpp?\n";
          cout << "\n1.&&\n2.||\n3.!\n4.&\n";
          cout << "your answer :";
          cin >> choice;
          if (choice == 1)
                    score++;
          //  Question num-4
          cout << "\n4.Who invented c++?\n";
          cout << "\n1.Dennis Ritchie\n2.Bjarne Stroustrup\n3.James Gosling\n4.Guido van\n";
          cout << "your Answer :";
          cin >> choice;
          if (choice == 2)
                    score++;
          // Question num-5
          cout << "\n5.Which symbol is used to end a statement in C++\n";
          cout << "\n1. .\n2. ,\n3. ;\n4. :\n";
          cout << "your answer :";
          cin >> choice;
          if (choice == 3)
                    score++;
          // Final score
          cout << "====Result====\n";
          cout << "your Score:" << score << "/5\n";

          if (score == 5)
                    cout << "Excellent!\n";
          else if (score >= 3)
                    cout << "Good job!\n";
          else
                    cout << "Keep practicing\n";

          return 0;
}