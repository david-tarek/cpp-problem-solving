#include <iostream>
using namespace std;
int main() {
  int N, Sum = 0;
  cout << "Enter a num: ";
  cin >> N;
  for (int i = 0; i <= N; i++)
  {
    if (i % 2 == 0)
    {
      Sum += i;
    }
  }
  cout << "The sum of even number: " << Sum << endl;
  return 0;
}