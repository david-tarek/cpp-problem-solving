#include <iostream>
using namespace std;
int main()
{
  int num, first_digit, second_digit;
  cout << "Enter the value of the number: ";
  cin >> num;
  first_digit = num / 10;
  second_digit = num % 10;
  cout << "The first digit is: " << first_digit << endl;
  cout << "The second digit is: " << second_digit << endl;
  cout << "The reverse: " << second_digit << first_digit << endl;
  return 0;
}