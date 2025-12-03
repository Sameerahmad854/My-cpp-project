#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
          srand(time(0));
          int userchoice, compchoice;
          cout << "rock-paper-scissors\n";
          cout << "1.rock\n2.paper\n3.scissors\n";
          cout << "ener your choice(1-3):";
          cin >> userchoice;
          compchoice = rand() % 3 + 1;
          cout << "computer choice:";
          if (compchoice == 1)
                    cout << "rock\n";
          else if (compchoice == 2)
                    cout << "paper\n";
          else
                    cout << "scissor\n";
          if (userchoice == compchoice)
          {
                    cout << "it is a tie!\n";
          }
          else if ((userchoice == 1 && compchoice == 3) || (userchoice == 2 && compchoice == 1) ||
                   (userchoice == 3 && compchoice == 2))
          {
                    cout << "you win!\n";
          }
          else
          {
                    cout << "computer win!\n";
          }

          return 0;
}