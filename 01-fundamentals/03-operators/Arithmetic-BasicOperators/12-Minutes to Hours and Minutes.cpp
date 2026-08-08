#include <iostream>
using namespace std;
int main()
{
  int Hours, TotalMinutes, RemainingMinutes;
  cout << "Enter the total number of minutes: ";
  cin >> TotalMinutes;
  Hours = TotalMinutes / 60;
  RemainingMinutes = TotalMinutes % 60;
  cout << "Hours: " << Hours << endl;
  cout << "Remaining Minutes: " << RemainingMinutes << endl;
  return 0;
}