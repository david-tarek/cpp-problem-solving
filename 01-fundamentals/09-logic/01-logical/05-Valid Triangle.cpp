#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the value of c: ";
  cin >> c;
  if (a + b > c && a + c > b && b + c > a)
  {
    cout << "1 \n";
  }
  else
  {
    cout << "0 \n";
  }

  return 0;
}