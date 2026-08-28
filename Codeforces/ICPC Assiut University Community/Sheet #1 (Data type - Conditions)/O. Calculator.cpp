#include <iostream>
using namespace std;
int main()
{
  int A, B;
  char operation;
  cin >> A >> operation >> B;
  switch (operation)
  {
  case '+':
    cout << A + B;
    break;
  case '-':
    cout << A - B;
    break;
  case '*':
    cout << A * B;
    break;
  case '/':
    cout << A / B;
    break;
  }
  return 0;
}