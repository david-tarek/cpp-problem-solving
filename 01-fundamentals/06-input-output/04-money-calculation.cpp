#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double Product_price;
  int Number_of_products;
  cout << "Enter the Product price: ";
  cin >> Product_price;
  cout << "Enter the Number of products: ";
  cin >> Number_of_products;
  cout << "The total price: " << setprecision(2) << fixed << double(Product_price * Number_of_products) << endl;
  return 0;
}