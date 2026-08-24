#include <iostream>
using namespace std;
int main()
{
  char grade;
  cout << "Enter your grade: ";
  cin >> grade;
  switch (grade)
  {
  case 'A':
    cout << "Excellent \n";
    break;
  case 'B':
    cout << "Very Good \n";
    break;
  case 'C':
    cout << "Good \n";
    break;
  case 'D':
    cout << "Pass \n";
    break;
  case 'F':
    cout << "Fail \n";
    break;

  default:
    cout << "Invalid Grade \n";
    break;
  }
  return 0;
}