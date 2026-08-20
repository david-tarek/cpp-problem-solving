#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "Enter the x: ";
  cin >> x;
  if (x >= 10 && x <= 50)
  {
    cout << "Inside";
  }
  else
  {
    cout << "Outside";
  }
  return 0;
}