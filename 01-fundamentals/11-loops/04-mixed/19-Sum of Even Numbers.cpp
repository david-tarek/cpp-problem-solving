#include <iostream>
using namespace std;
int main() {
  int N, num, sum = 0;
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> num;
    if (num % 2 == 0)
    {
      sum += num;
    }
  }
  cout << sum << endl;
  return 0;
}