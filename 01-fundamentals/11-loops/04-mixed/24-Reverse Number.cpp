#include <iostream>
using namespace std;
int main() {
  int N, digit, reverse = 0;
  cin >> N;
  while (N > 0)
  {
    digit = N % 10;
    reverse = reverse * 10 + digit;
    N /= 10;
  }
  cout << reverse;
  return 0;
}