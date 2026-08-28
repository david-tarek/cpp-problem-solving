#include <iostream>
using namespace std;
int main() {
  long long A, B, C;
  cin >> A >> B >> C;
  if (A <= B && A <= C)
  {
    cout << A << endl;
    if (B <= C)
    {
      cout << B << endl;
      cout << C << endl;
    }
    else
    {
      cout << C << endl;
      cout << B << endl;
    }
  }

  else if (B <= A && B <= C)
  {
    cout << B << "\n";
    if (A <= C)
    {
      cout << A << endl;
      cout << C << endl;
    }
    else
    {
      cout << C << endl;
      cout << A << endl;
    }
  }

  else
  {
    cout << C << "\n";
    if (B <= A)
    {
      cout << B << endl;
      cout << A << endl;
    }
    else
    {
      cout << A << endl;
      cout << B << endl;
    }
  }

  cout << "\n" << A << "\n" << B << "\n" << C;

  return 0;
}