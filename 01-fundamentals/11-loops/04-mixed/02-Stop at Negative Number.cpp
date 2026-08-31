#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter: ";
  cin >> num;
  while (num)
  {
    if (num < 0)
    {
      cout << "Negative number detected\n";
      break;
    }
    cout << "Enter: ";
    cin >> num;
  }
  return 0;
}