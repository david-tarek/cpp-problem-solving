#include <iostream>
using namespace std;
int main() {
  int N, i = 1, Even = 0;
  cout << "Enter a num: ";
  cin >> N;
  while (i <= N)
  {
    if (i % 2 == 0)
    {
      cout << i << " ";
    }
    i++;
  }
  return 0;
}