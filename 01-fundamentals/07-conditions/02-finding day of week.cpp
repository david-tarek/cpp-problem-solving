#include <iostream>
using namespace std;
int main()
{
  int year, month, day;
  cout << "Enter the year: ";
  cin >> year;
  cout << "Enter the month: ";
  cin >> month;
  cout << "Enter the day: ";
  cin >> day;
  month -= 2;
  if (month <= 0)
  {
    month += 12;
    year -= 1;
  }
  month = month * 83 / 32;
  month += day;
  month += year;
  month += year / 4;
  month -= year / 100;
  month += year / 400;
  month %= 7;
  if (month == 0)
  {
    cout << "This day is: " << " Sunday \n";
  }
  else if (month == 1)
  {
    cout << "This day is: " << " Monday \n";
  }
  else if (month == 2)
  {
    cout << "This day is: " << " Tuesday \n";
  }
  else if (month == 3)
  {
    cout << "This day is: " << " Wednesday \n";
  }
  else if (month == 4)
  {
    cout << "This day is: " << " Thursday \n";
  }
  else if (month == 5)
  {
    cout << "This day is: " << " Friday \n";
  }
  else if (month == 6)
  {
    cout << "This day is: " << " Saturday \n";
  }

  return 0;
}