#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long long A, B, C, D;
  long double L, R;
  cin >> A >> B >> C >> D;
  L = B * log(A);
  R = D * log(C);
  if (L > R)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }

  return 0;
}