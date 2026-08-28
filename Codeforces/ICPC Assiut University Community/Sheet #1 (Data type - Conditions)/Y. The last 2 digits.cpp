#include <iostream>
using namespace std;
int main() {
  long long A, B, C, D, result;
  cin >> A >> B >> C >> D;
  A %= 100;
  B %= 100;
  C %= 100;
  D %= 100;
  result = (A * B) % 100;
  result = (result * C) % 100;
  result = (result * D) % 100;
  if (result <= 9)
  {
    cout << "0" << result << endl;
  }
  else
  {
    cout << result <<endl;
  }
  // cout << setw(2) << setfill('0') << result;
  return 0;
}