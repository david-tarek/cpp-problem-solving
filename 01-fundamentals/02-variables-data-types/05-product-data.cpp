#include <iostream>
using namespace std;
int main()
{
  string ProductName;
  double ProductPrice;
  cout << "Enter the product name: ";
  cin >> ProductName;
  cout << "Enter the product price: ";
  cin >> ProductPrice;
  cout << "Product: " << ProductName << endl;
  cout << "Price: " << ProductPrice << endl;
  return 0;
}