#include <iostream>
using namespace std;
int main() {
  int N, num, min = 1000000;
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> num;
    if (num < min)
    {
      min = num;
    }
  }
  cout << min;
  return 0;
}