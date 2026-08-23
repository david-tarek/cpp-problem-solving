#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  if (a > 0 || b > 0)
  {
    cout << "1 \n";
  }
  else
  {
    cout << "0 \n";
  }

  return 0;
}