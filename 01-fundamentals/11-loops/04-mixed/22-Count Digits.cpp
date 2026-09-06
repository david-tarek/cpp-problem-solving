#include <iostream>
using namespace std;
int main() {
  int N, count = 0;
  cin >> N;
  while (N > 0)
  {
    N /= 10;
    count++;
  }
  cout << count;
  return 0;
}