#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter the month number: ";
  cin >> num;
  switch (num)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout << "This month contains 31 days \n";
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    cout << "This month contains 30 days \n";
    break;

  case 2:
    cout << "This month contains 28 days \n";
    break;

  default:
    cout << "The number of months in a year is only 12 months \n";
    break;
  }

  return 0;
}