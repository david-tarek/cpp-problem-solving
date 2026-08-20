#include <iostream>
using namespace std;
int main()
{
  int year;
  cout << "Enter the year: ";
  cin >> year;
  int a = year % 19;
  int b = year % 4;
  int c = year % 7;
  int d = (a * 19 + 24) % 30;
  int e = (2 * b + 4 * c + 6 * d + 5) % 7;
  if (e + d < 10)
  {
    cout << "Easter falls on this day: " << e + d + 22 << " march \n";
  }
  else
  {
    cout << "Easter falls on this day: " << e + d - 9 << " April \n";
  }
  return 0;
}