#include <iostream>
using namespace std;
int main() {
  int N, digit1, digit2;
  cin >> N;
  digit1 = N % 10;
  digit2 = N / 10;
  if (digit1 % digit2 == 0 || digit2 % digit1 == 0)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
  return 0;
}