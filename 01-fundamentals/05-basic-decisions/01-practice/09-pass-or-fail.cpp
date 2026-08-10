#include <iostream>
using namespace std;
int main()
{
  int degree;
  cout << "Enter the student's grade ";
  cin >> degree;
  if (degree >= 50)
  {
    cout << "This student is successful " << endl;
  }
  else
  {
    cout << "This student failed" << endl;
  }

  return 0;
}