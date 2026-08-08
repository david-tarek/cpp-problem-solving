#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d, y;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the value of c: ";
  cin >> c;
  cout << "Enter the value of d: ";
  cin >> d;
  y = a + b * c - d;
  cout << "y= " << y << endl;
  return 0;
}