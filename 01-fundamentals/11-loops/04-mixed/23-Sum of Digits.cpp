#include <iostream>
using namespace std;
int main() {
  int N, digit, sum = 0;
  cin >> N;
  while (N > 0)
  {
    digit = N % 10;
    sum = sum + digit;
    N /= 10;
  }
  cout << sum;
  return 0;
}