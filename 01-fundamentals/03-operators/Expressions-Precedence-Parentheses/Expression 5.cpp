#include <iostream>
using namespace std;
int main()
{
  int a, b, c, x, y;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the value of c: ";
  cin >> c;
  x = a + b * c;
  y = (a + b) * c;
  cout << "x= " << x << endl;
  cout << "y= " << y << endl;
  return 0;
}