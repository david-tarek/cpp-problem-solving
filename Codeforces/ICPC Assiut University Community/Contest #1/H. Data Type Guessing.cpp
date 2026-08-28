#include <iostream>
using namespace std;
int main() {
  long long n, k, a;
  cin >> n >> k >> a;
  long long mul = n * k;
  if (mul % a != 0)
  {
    cout << "double\n";
  }
  else
  {
    long long result = mul / a;
    if (result >= -2147483648 && result <= 2147483647) {
      cout << "int\n";
    }
    else {
      cout << "long long\n";
    }
  }

  return 0;
}