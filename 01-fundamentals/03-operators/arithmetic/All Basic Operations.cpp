#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter the value of a : ";
  cin >> a;
  cout << "Enter the value of b : ";
  cin >> b;
  cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
  cout << "The difference of " << b << " and " << a << " is " << b - a << endl;
  cout << "The product of " << a << " and " << b << " is " << a * b << endl;
  cout << "The quotient of " << a << " and " << b << " is " << a / b << endl;
  cout << "The remainder of " << a << " and " << b << " is " << a % b << endl;
  return 0;
}