#include <iostream>
using namespace std;
int main()
{
  string Student_Name;
  int Student_Score;
  cout << "Enter your name: ";
  getline(cin, Student_Name);
  cout << "Enter your score: ";
  cin >> Student_Score;
  cin.ignore();
  cout << "Student Name: " << Student_Name << endl;
  cout << "Student Score: " << Student_Score << endl;
  return 0;
}