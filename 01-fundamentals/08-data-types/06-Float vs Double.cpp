#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  float a;
  double b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << setprecision(12);
  cout << "The value of double: " << b << endl;
  cout << "The value of float: " << a << endl;

  return 0;
}