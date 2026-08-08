#include <iostream>
using namespace std;
int main()
{
  int length, width, Area;
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << "Enter the width of the rectangle: ";
  cin >> width;
  Area = length * width;
  cout << "The area of the rectangle is: " << length << " x " << width << " = " << Area << " cm² " << endl;
  return 0;
}