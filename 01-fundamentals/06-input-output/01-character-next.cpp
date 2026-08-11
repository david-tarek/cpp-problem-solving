#include <iostream>
using namespace std;
int main()
{
  char letter;
  cout << "Enter the letter: ";
  cin >> letter;
  cout << "The next letter is: " << char(letter + 1) << endl;
  return 0;
}