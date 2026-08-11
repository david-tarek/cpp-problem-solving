#include <iostream>
using namespace std;
int main()
{
  int hours, minutes, seconds, TotalSeconds;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  cout << "Enter the number of seconds: ";
  cin >> seconds;
  TotalSeconds = hours * 3600 + minutes * 60 + seconds;
  cout << "The total seconds: " << TotalSeconds << endl;
  return 0;
}