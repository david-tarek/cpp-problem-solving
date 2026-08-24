#include <iostream>
using namespace std;

int main()
{
  int grade;
  char letter;

  cout << "Enter grade: ";
  cin >> grade;

  if (grade >= 90 && grade <= 100)
    letter = 'A';
  else if (grade >= 80 && grade <= 89)
    letter = 'B';
  else if (grade >= 70 && grade <= 79)
    letter = 'C';
  else if (grade >= 60 && grade <= 69)
    letter = 'D';
  else if (grade >= 0 && grade <= 59)
    letter = 'F';
  else
    letter = 'X';

  switch (letter)
  {
  case 'A':
    cout << "Excellent";
    break;

  case 'B':
    cout << "Very Good";
    break;

  case 'C':
    cout << "Good";
    break;

  case 'D':
    cout << "Pass";
    break;

  case 'F':
    cout << "Fail";
    break;

  default:
    cout << "Invalid Grade";
  }

  return 0;
}