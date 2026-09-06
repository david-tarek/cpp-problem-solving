#include <iostream>
using namespace std;
int main() {
  int side;
  cout << "Side size: ";
  cin >> side;
  if (side <= 1 || side > 20)
  {
    cout << "Sorry, this size is not suitable.\n";
  }
  else
  {
    for (int i = 1; i <= side; i++)
    {
      for (int j = 1; j <= side; j++)
      {
        if (i == 1 || i == side)
        {
          if (j == 1 || j == side)
          {
            cout << "+";
          }
          else
          {
            cout << "-";
          }
        }
        else
        {
          if (j == 1 || j == side)
          {
            cout << "|";
          }
          else
          {
            cout << " ";
          }
        }
      }
      cout << endl;
    }
  }
  return 0;
}