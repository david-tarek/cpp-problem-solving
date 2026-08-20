#include <iostream>
using namespace std;
int main()
{
  int system, feet;
  double meters, TotalFeets, TotalInches, inches;
  cout << "What is your measurement system? 0-metric/1-imperial: ";
  cin >> system;
  if (system == 0)
  {
    cout << "M= ";
    cin >> meters;
    TotalInches = meters / 0.0254;
    feet = TotalInches / 12;
    TotalFeets = TotalInches / 12.00;
    inches = (TotalFeets - feet) * 12;
    cout << feet << "'" << inches << "\" \n";
  }
  else if (system == 1)
  {
    cout << "feet: ";
    cin >> feet;
    cout << "inche: ";
    cin >> inches;
    meters = inches * 0.0254 + feet * 0.3048;
    cout << "Meters= " << meters << "m \n";
  }

  return 0;
}