#include <iostream>
using namespace std;
int main()
{
  int a, b;
  char operation;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the operation: ";
  cin >> operation;
  cout << "Enter the value of b: ";
  cin >> b;
  if (operation == '+')
  {
    cout << a << " " << operation << " " << b << " = " << a + b;
  }
  else if (operation == '-')
  {
    cout << a << " " << operation << " " << b << " = " << a - b;
  }
  else if (operation == '*')
  {
    cout << a << " " << operation << " " << b << " = " << a * b;
  }
  else if (operation == '/')
  {
    cout << a << " " << operation << " " << b << " = " << a / b;
  }
  else if (operation == '%')
  {
    cout << a << " " << operation << " " << b << " = " << a % b;
  }
  else
  {
    cout << "This is not a mathematical operation";
  }
  return 0;
}