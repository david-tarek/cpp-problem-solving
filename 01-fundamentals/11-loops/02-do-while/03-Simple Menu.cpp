#include <iostream>
using namespace std;
int main() {
  int choise;
  do
  {

    cout << "1 - Say Hello\n";
    cout << "2 - Say Goodbye\n";
    cout << "3 - Exit\n\n";
    cout << "Enter your choise: ";
    cin >> choise;
    cout << endl;
    if (choise == 1)
    {
      cout << "Hello\n\n\n";
    }
    else if (choise == 2)
    {
      cout << "Goodbye\n\n\n";
    }
  } while (choise != 3);
  return 0;
}