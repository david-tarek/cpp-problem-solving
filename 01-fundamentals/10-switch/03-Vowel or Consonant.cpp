#include <iostream>
using namespace std;
int main()
{
  char letter;
  cout << "Enter a vowel: ";
  cin >> letter;
  switch (letter)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout << "This is a vowel \n";
    break;

  default:
    cout << "This is a constant character \n";
    break;
  }

  return 0;
}