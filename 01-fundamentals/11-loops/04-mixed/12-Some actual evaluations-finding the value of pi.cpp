#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double PI = 0, div = 1;
  long long N;
  cout << "Number of iterations? ";
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    if (i % 2 == 0)
    {
      PI += (1 / div);
    }
    else
    {
      PI -= (1 / div);
    }
    div += 2;
  }
  cout << "Pi = " << setprecision(20) << (PI * 4) << endl;
  return 0;
}