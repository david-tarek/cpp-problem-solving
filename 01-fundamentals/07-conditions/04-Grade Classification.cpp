#include <iostream>
using namespace std;
int main()
{
  int degree;
  cout << "Enter the degree: ";
  cin >> degree;
  if (degree <= 100 && degree >= 90)
  {
    cout << "Your Grade Classification: A \n";
  }
  else if (degree <= 89 && degree >= 80)
  {
    cout << "Your Grade Classification:   B \n";
  }
  else if (degree <= 79 && degree >= 70)
  {
    cout << "Your Grade Classification: C \n";
  }
  else if (degree <= 69 && degree >= 60)
  {
    cout << "Your Grade Classification: D \n";
  }
  else
  {
    cout << "Your Grade Classification: F \n";
  }
  return 0;
}