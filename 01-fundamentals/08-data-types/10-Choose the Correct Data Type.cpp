#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int Age = 21;
  long long Population = 10000000000;
  float Temperature = 36.5;
  long double Pi = 3.141592653589793;
  bool IsStudent = true;

  cout << "Age: " << Age << endl;
  cout << "Population: " << Population << endl;
  cout << "Temperature: " << Temperature << endl;
  cout << "Pi: " << setprecision(16) << Pi << endl;
  cout << "IsStudent: " << IsStudent << endl;

  return 0;
}