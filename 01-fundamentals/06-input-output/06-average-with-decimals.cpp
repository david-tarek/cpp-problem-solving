#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double num1, num2, num3, num4, num5, average;
  cout << "Enter the value of the first number: ";
  cin >> num1;
  cout << "Enter the value of the second number: ";
  cin >> num2;
  cout << "Enter the value of the third number: ";
  cin >> num3;
  cout << "Enter the value of the fourth number: ";
  cin >> num4;
  cout << "Enter the value of the fifth number: ";
  cin >> num5;
  average = (num1 + num2 + num3 + num4 + num5) / 5.0;
  cout << "Average these numbers: " << setprecision(2) << fixed << average << endl;
  return 0;
}