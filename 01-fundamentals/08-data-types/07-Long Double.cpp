#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  long double num = 3.141592653589793;
  cout << setprecision(17);
  cout << num;

  return 0;
}