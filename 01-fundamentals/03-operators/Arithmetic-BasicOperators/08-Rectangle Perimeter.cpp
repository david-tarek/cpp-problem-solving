#include <iostream>
using namespace std;
int main()
{
  int length, width, perimeter;
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << "Enter the width of the rectangle: ";
  cin >> width;
  perimeter = 2 * (length + width);
  cout << "The perimeter of the rectangle is: " << "2 x (" << length << " + " << width << ") = " << perimeter << " cm " << endl;
  return 0;
}