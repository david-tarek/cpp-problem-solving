#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int N;
  double result = 1;
  cout << "N: ";
  cin >> N;
  for (int i = 1; i <= N; i++) {
    result /= 2;
  }
  cout << "Result: " << setprecision(20) << result << endl;
  return 0;
}