#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the value of y: ";
  cin >> y;
  if (x >= y)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}