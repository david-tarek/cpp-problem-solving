#include <iostream>
using namespace std;
int main() {
  int num, sum = 0;
  cin >> num;
  while (num)
  {
    if (num == 0)
    {
      break;
    }
    sum += num;
    cin >> num;
  }
  cout << sum;
  return 0;
}