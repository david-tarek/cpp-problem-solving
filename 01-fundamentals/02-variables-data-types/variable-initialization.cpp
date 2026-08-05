#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int b(20);
  int c{30};
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;
  return 0;
}