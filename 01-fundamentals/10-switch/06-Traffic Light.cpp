#include <iostream>
using namespace std;
int main()
{
  char Traffic;
  cout << "Enter the traffic light: ";
  cin >> Traffic;
  switch (Traffic)
  {
  case 'R':
    cout << "Stop \n";
    break;
  case 'Y':
    cout << "Wait \n";
    break;
  case 'G':
    cout << "Go \n";
    break;

  default:
    cout << "Invalid \n";
    break;
  }
  return 0;
}