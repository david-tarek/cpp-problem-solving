#include <iostream>
using namespace std;
int main()
{
  int Price, Quantity, Total;
  cout << "Enter the price of the item: ";
  cin >> Price;
  cout << "Enter the quantity of the item: ";
  cin >> Quantity;
  Total = Price * Quantity;
  cout << "The total cost is: " << Total << endl;
  return 0;
}