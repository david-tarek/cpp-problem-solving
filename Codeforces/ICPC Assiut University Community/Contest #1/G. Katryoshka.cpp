#include <iostream>
using namespace std;
int main() {
  long long e, m, b, Katryoshkas, ans1, ans2;
  cin >> e >> m >> b;
  if (e <= m && e <= b)
  {
    ans1 = e;
  }
  else if (m <= e && m <= b)
  {
    ans1 = m;
  }
  else
  {
    ans1 = b;
  }
  e -= ans1;
  m -= ans1;
  b -= ans1;
  e = e / 2;
  if (e <= b)
  {
    ans2 = e;
  }
  else
  {
    ans2 = b;
  }

  Katryoshkas = ans1 + ans2;
  cout << Katryoshkas << endl;
  return 0;
}