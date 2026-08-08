#include <iostream>
using namespace std;
int main()
{
  int Hours, Minutes, Seconds;
  cout << "Enter the number of hours: ";
  cin >> Hours;
  cout << "Enter the number of minutes: ";
  cin >> Minutes;
  cout << "Enter the number of seconds: ";
  cin >> Seconds;
  cout << "Time: " << Hours << ":" << Minutes << ":" << Seconds << endl;
  return 0;
}