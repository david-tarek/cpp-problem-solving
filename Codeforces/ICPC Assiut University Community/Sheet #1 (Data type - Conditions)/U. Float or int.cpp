#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  float N;
  cin >> N;
  int integerpart = (int)N;
  if (N == integerpart)
  {
    cout << "int " << integerpart << endl;
  }
  else
  {
    cout << fixed << setprecision(3) << "float " << integerpart << " " << N - integerpart << endl;
  }

  return 0;
}