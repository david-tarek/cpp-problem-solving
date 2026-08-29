#include <iostream>
using namespace std;
int main() {
  int N, i = 1, Sum = 0;
  cout << "Enter a num: ";
  cin >> N;
  while (i <= N)
  {
    Sum += i;
    i++;
  }
  cout << "Sum= " << Sum << endl;
  return 0;
}