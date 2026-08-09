#include <iostream>
using namespace std;
int main()
{
  int x = 10;
  ++x;
  cout << "x1= " << x << endl;
  x++;
  cout << "x2= " << x << endl;
  --x;
  cout << "x3= " << x << endl;
  x--;
  cout << "x4= " << x << endl;
  x += 5;
  cout << "x5= " << x << endl;
  x -= 3;
  cout << "x6= " << x << endl;
  x *= 2;
  cout << "x7= " << x << endl;
  x /= 4;
  cout << "x8= " << x << endl;
  x %= 3;
  cout << "x9= " << x << endl;
  return 0;
}