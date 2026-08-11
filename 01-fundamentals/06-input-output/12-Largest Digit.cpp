#include <iostream>
using namespace std;
int main()
{
  int num, first_digit, second_digit, third_digit;
  cout << "Enter the value of the number: ";
  cin >> num;
  first_digit = num / 100;
  second_digit = (num / 10) % 10;
  third_digit = num % 10;
  cout << "The first digit is: " << first_digit << endl;
  cout << "The second digit is: " << second_digit << endl;
  cout << "The third digit is: " << third_digit << endl;
  if (first_digit >= second_digit && first_digit >= third_digit)
  {
    cout << "The largest digit is: " << first_digit << endl;
  }
  else if (second_digit >= first_digit && second_digit >= third_digit)
  {
    cout << "The largest digit is: " << second_digit << endl;
  }
  else
  {
    cout << "The largest digit is: " << third_digit << endl;
  }

  return 0;
}