#include <iostream>
using namespace std;
int main()
{
  int num;
  double cm, m, kg, g;

  cout << "1 - Centimeter to Meter \n";
  cout << "2 - Meter to Centimeter \n";
  cout << "3 - Kilogram to Gram \n";
  cout << "4 - Gram to Kilogram \n";
  cout << "Select the transaction number: ";
  cin >> num;

  switch (num)
  {
  case 1:
    cout << "cm= ";
    cin >> cm;
    m = cm / 100;
    cout << "m= " << m << endl;
    break;
  case 2:
    cout << "m= ";
    cin >> m;
    cm = 100 * m;
    cout << "cm= " << cm << endl;
    break;
  case 3:
    cout << "kg= ";
    cin >> kg;
    g = 1000 * kg;
    cout << "g= " << g << endl;
    break;
  case 4:
    cout << "g= ";
    cin >> g;
    kg = g / 1000;
    cout << "kg= " << kg << endl;
    break;

  default:
    cout << "This number is not part of the transfer operations \n";
    break;
  }
  return 0;
}