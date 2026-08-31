#include <iostream>
using namespace std;
int main() {
  int N;
  cout << "Enter a num: ";
  cin >> N;
  for (int i = N; ;i++)
  {
    if (i % 7 == 0)
    {
      cout << i;
      break;
    }
  }
  return 0;
}