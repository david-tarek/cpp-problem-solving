#include <iostream>
using namespace std;
int main()
{
  char letter;
  cout << "Enter the letter: ";
  cin >> letter;
  if (letter >= 'A' && letter <= 'Z')
  {
    cout << "This letter is Uppercase \n";
  }
  else if (letter >= 'a' && letter <= 'z')
  {
    cout << "This letter is Lowercase \n";
  }
  else
  {
    cout << "This not letter \n";
  }

  return 0;
}