#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
          srand(time(0));
          string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          string lower = "abcdefghijklmnopqrstuvwxyz";
          string digits = "0123456789";
          string symbols = "!@£$%^&&*()_+{}:|#€/?,.';<>";

          string all = upper + lower + digits + symbols;
          int length;
          cout << "Enter password length:";
          cin >> length;
          string password = "";
          for (int i = 0; i < length; i++)
          {
                    /* code */
                    int index = rand() % all.length();
                    password += all[index];
          }
          cout << "generated password :" << password << endl;

          return 0;
}