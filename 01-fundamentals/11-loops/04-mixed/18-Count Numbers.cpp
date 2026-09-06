#include <iostream>
using namespace std;
int main() {
  int N, num, count = 0;
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> num;
    if (num > 0)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}