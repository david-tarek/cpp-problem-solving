#include <iostream>
using namespace std;
int main() {
  int n;
  while (n)
  {
    cin >> n;
    if (n % 7 == 0)
    {
      cout << n;
      break;
    }
  }
  // do
  // {
  //   cin >> n;
  // } while (n % 7 != 0);
  // cout << n;
  return 0;
}