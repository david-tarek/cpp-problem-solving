#include <iostream>
using namespace std;
int main()
{
  char character;
  cout << "Enter the character: ";
  cin >> character;
  if (character >= char(65) && character <= char(90))
  {
    cout << "This character is Uppercase";
  }
  else if (character >= char(97) && character <= char(122))
  {
    cout << "This character is Lowercase";
  }
  else
  {
    cout << "This is not a letter, but a symbol";
  }

  return 0;
}