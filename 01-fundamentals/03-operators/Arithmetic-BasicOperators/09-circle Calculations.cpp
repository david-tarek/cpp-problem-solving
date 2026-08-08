#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float radius, Area, Circumference;
  float PI = 3.14;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  Area = PI * pow(radius, 2);
  Circumference = 2 * PI * radius;
  cout << "The area of the circle is: " << PI << " x " << radius << "^2 = " << Area << " cm² " << endl;
  cout << "The circumference of the circle is: 2 x " << PI << " x " << radius << " = " << Circumference << " cm " << endl;
  return 0;
}