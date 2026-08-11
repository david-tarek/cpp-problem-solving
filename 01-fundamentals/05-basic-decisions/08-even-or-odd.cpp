#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "Enter the value of x: ";
  cin >> x;
  if (x % 2 == 0)
  {
    cout << "This number " << x << " is even " << endl;
  }
  else
  {
    cout << "This number " << x << " is odd " << endl;
  }

  return 0;
}