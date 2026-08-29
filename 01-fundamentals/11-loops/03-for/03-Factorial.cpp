#include <iostream>
using namespace std;
int main() {
  int N;
  long long fact = 1;
  cout << "Enter a num: ";
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    fact *= i;
  }
  cout << "The result of factorial: " << fact << endl;
  return 0;
}