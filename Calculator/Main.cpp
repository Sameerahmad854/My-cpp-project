#include <iostream>
using namespace std;

int main()
{
          double num1, num2;
          char op;
          cout << "====-Simple Calculator-====" << endl;
          cout << "Enter the value of num1" << endl;
          cin >> num1;
          cout << "Operator(+,-,*,/):";
          cin >> op;
          cout << "Enter the value of num2" << endl;
          cin >> num2;
          double result;
          switch (op)
          {
          case '+':
                    result = num1 + num2;
                    cout << "result=" << result << endl;
                    break;
          case '-':
                    result = num1 - num2;
                    cout << "result=" << result << endl;
                    break;
          case '*':
                    result = num1 * num2;
                    cout << "result=" << result << endl;
                    break;
          case '/':
                    if (num2 == 0)
                    {
                              cout << "cannot divide by zero!" << endl;
                    }
                    else
                    {
                              result = num1 / num2;
                              cout << "result=" << result << endl;
                    }
                    break;
          default:
                    cout << "invalid opertaor!" << endl;
          }
          return 0;
}