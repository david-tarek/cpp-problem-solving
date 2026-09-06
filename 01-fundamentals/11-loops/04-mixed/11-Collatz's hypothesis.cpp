#include <iostream>
using namespace std;
int main() {
  long long c0, i = 0;
  cout << "c0 = ";
  cin >> c0;
  while (c0 != 1)
  {
    if (c0 % 2 == 0)
    {
      c0 /= 2;
    }
    else
    {
      c0 = 3 * c0 + 1;
    }
    i++;
    cout << c0 << endl;
  }
  cout << "steps = " << i << endl;
  return 0;
}