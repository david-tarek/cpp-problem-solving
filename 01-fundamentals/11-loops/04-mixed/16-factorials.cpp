#include <iostream>
using namespace std;
int main() {
  int n;
  long long fact = 1;
  cout << "Enter a num: ";
  cin >> n;
  if (n == 0 || n == 1)
  {
    cout << "1\n";
  }
  else
  {
    for (int i = 1; i <= n; i++)
    {
      fact *= i;
    }
  }
  cout << "fact= " << fact;
  return 0;
}