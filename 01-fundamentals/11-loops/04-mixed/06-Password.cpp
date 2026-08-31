#include <iostream>
using namespace std;
int main() {
  int password;
  do
  {
    cout << "Enter password: ";
    cin >> password;
    if (password == 1234) {
      cout << "Login successful" << endl;
      break;
    }
    else {
      cout << "Wrong password" << endl;
    }
  } while (true);
  return 0;
}