#include <iostream>
using namespace std;

int main()
{
          string name;
          int m1, m2, m3, m4, m5;
          double total, percentage;
          char grade;
          cout << "====Student report card====\n\n";

          cout << "Enter student name:";
          getline(cin, name);
          cout << "marks of 5 subject(out of 100)\n ";
          cout << "subject 1:";
          cin >> m1;
          cout << "subject 2:";
          cin >> m2;
          cout << "subject 3:";
          cin >> m3;
          cout << "subject 4:";
          cin >> m4;
          cout << "subject 5:";
          cin >> m5;
          total = m1 + m2 + m3 + m4 + m5;
          percentage = total / 5.0;
          if (percentage >= 90)
                    grade = 'A';
          else if (percentage >= 80)
                    grade = 'B';
          else if (percentage >= 70)
                    grade = 'C';
          else if (percentage >= 60)
                    grade = 'D';
          else
                    grade = 'F';
          cout << "===Result====\n";
          cout << "Name " << name << endl;
          cout << "total marks " << total << "/500\n";
          cout << "percentage " << percentage << "%\n";
          cout << "Grade " << grade << endl;

          return 0;
}