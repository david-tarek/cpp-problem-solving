#include <iostream>
using namespace std;
int main() {
  long long L1, R1, L2, R2, start, end;
  cin >> L1 >> R1 >> L2 >> R2;
  if (L1 > L2)
  {
    start = L1;
  }
  else
  {
    start = L2;
  }

  if (R1 < R2)
  {
    end = R1;
  }
  else
  {
    end = R2;
  }

  if (start <= end)
  {
    cout << start << " " << end << endl;
  }
  else
  {
    cout << -1 << endl;
  }

  return 0;
}