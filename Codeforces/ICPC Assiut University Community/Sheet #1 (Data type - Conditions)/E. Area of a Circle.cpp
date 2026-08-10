#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  cout << fixed << setprecision(9);
  double Area, PI, R;
  cin >> R;
  PI = 3.141592653;
  Area = PI * pow(R, 2);
  cout << Area;
  return 0;
}