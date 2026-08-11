#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "Enter the value of x: ";
  cin >> x;
  if (x > 0)
  {
    cout << "This number " << x << " is positive " << endl;
  }
  else if (x < 0)
  {
    cout << "This number " << x << " is Negative " << endl;
  }
  else
  {
    cout << "This number " << x << " is Zero " << endl;
  }

  return 0;
}