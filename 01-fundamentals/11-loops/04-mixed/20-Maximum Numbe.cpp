#include <iostream>
using namespace std;
int main() {
  int N, num, max = 0;
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> num;
    if (num > max)
    {
      max = num;
    }
  }
  cout << max;
  return 0;
}