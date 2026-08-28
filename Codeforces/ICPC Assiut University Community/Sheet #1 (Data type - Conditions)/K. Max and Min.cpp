#include <iostream>
using namespace std;
int main() {
  long long A, B, C;
  cin >> A >> B >> C;
  if (A <= B && A <= C)
  {
    cout << A << " ";
    if (B <= C)
    {
      cout << C << endl;
    }
    else
    {
      cout << B << endl;
    }
  }

  else if (B <= A && B <= C)
  {
    cout << B << " ";
    if (A <= C)
    {
      cout << C << endl;
    }
    else
    {
      cout << A << endl;
    }
  }

  else
  {
    cout << C << " ";
    if (B <= A)
    {
      cout << A << endl;
    }
    else
    {
      cout << B << endl;
    }
  }


  return 0;
}