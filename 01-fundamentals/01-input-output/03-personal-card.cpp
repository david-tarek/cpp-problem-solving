#include <iostream>
using namespace std;
int main()
{
  string name, country;
  int age;
  cout << "Name : ";
  getline(cin, name);
  cout << "Age : ";
  cin >> age;
  cin.ignore(); // To ignore the newline character left in the input buffer
  cout << "Country : ";
  getline(cin, country);
  cout << "Name : " << name << endl;
  cout << "Age : " << age << endl;
  cout << "Country : " << country << endl;
  return 0;
}