#include <iostream>
using namespace std;
int main()
{
  string name;
  int age;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your age: ";
  cin >> age;

  cout << "Name\t" << "Age" << "\n"
       << name << "\t" << age << endl;
  return 0;
}