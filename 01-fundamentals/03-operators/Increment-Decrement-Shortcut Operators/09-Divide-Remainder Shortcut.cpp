#include <iostream>
using namespace std;
int main()
{
  int y, z;
  int x = 100;
  cout << "Enter the value of y: ";
  cin >> y;
  x /= y;
  cout << "x1= " << x << endl;
  cout << "Enter the value of z: ";
  cin >> z;
  x %= z;
  cout << "x2= " << x << endl;
  return 0;
}