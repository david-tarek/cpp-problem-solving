#include <iostream>
using namespace std;
int main() {
  long long a = 1, b = 1, next, n;
  cout << "Enter a num: ";
  cin >> n;
  if (n == 1 || n == 2)
  {
    cout << "1\n";
  }
  else
  {
    for (int i = 1; i <= n - 2; i++)
    {
      next = a + b;
      a = b;
      b = next;
    }
  }
  cout << b << endl;
  return 0;
}