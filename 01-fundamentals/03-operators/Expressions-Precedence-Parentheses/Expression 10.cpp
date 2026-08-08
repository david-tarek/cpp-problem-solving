#include <iostream>
using namespace std;
int main()
{
  int a, b, c, y;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the value of c: ";
  cin >> c;
  y = (a + b) * (b + c);
  cout << "y= " << y << endl;
  return 0;
}