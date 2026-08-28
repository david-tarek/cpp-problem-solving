#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double X, P, Y;
  cin >> X >> P;
  Y = (100 - X) / 100;
  cout << fixed << setprecision(2) << P / Y << endl;
  return 0;
}