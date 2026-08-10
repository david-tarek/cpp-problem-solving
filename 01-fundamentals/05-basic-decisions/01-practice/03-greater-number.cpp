#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the value of y: ";
  cin >> y;
  if (x > y)
  {
    cout << "Number " << x << " is greater than " << y << endl;
  }
  else
  {
    cout << "Number " << y << " is smaller than " << x << endl;
  }
  return 0;
}