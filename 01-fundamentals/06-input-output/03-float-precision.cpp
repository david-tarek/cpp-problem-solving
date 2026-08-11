#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double num;
  cout << "Enter the number: ";
  cin >> num;
  cout << num << endl;
  cout << setprecision(2) << num << endl;
  return 0;
}