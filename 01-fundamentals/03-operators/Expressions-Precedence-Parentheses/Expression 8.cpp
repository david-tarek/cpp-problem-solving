#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, y;
  cout << "Enter the value of x: ";
  cin >> x;
  y = pow(x, 2) + 2 * x + 1;
  cout << "y= " << y << endl;
  return 0;
}