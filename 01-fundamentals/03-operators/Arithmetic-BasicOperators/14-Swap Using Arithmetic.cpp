#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;

  cout << "Enter the value of a: ";
  cin >> a;

  cout << "Enter the value of b: ";
  cin >> b;

  cout << "Enter the value of c: ";
  cin >> c;

  cout << "Enter the value of d: ";
  cin >> d;

  cout << "Before swap:" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  a = a + b;
  b = a - b;
  a = a - b;

  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  c = c * d;
  d = c / d;
  c = c / d;

  cout << "After swapping:" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;

  return 0;
}