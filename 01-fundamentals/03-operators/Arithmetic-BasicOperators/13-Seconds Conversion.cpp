#include <iostream>
using namespace std;
int main()
{
  int Hours, TotalSeconds, RemainingMinutes, RemainingSeconds;
  cout << "Enter the total number of secondes: ";
  cin >> TotalSeconds;
  Hours = TotalSeconds / 3600;
  RemainingSeconds = TotalSeconds % 3600;
  RemainingMinutes = RemainingSeconds / 60;
  RemainingSeconds = RemainingSeconds % 60;
  cout << Hours << " Hours " << endl;
  cout << RemainingMinutes << " Minutes " << endl;
  cout << RemainingSeconds << " Seconds " << endl;
  return 0;
}