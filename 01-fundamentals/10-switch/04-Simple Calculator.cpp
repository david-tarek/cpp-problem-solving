#include <iostream>
using namespace std;
int main()
{
  int a, b;
  char op;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter a aperator: ";
  cin >> op;
  cout << "Enter the value of b: ";
  cin >> b;
  switch (op)
  {
  case '+':
    cout << "a + b = " << a + b << endl;
    break;
  case '-':
    cout << "a - b = " << a - b << endl;
    break;
  case '*':
    cout << "a * b = " << a * b << endl;
    break;
  case '/':
    if (b != 0)
    {
      cout << "a / b = " << (double)a / b << endl;
    }
    else
    {
      cout << "It cannot be divided by zero \n";
    }
    break;

  default:
    cout << "This operation is not among these operations \n";
    break;
  }
  return 0;
}