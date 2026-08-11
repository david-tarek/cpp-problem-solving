#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double money, price, remaining_money;
  int quantity;
  cout << "Enter the amount of money you have: ";
  cin >> money;
  cout << "Enter the product price: ";
  cin >> price;
  cout << "Enter the quantity of products: ";
  cin >> quantity;
  remaining_money = money - (price * quantity);
  cout << setprecision(2) << fixed << "Money remaining after purchase: " << remaining_money << endl;
  return 0;
}