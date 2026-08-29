#include <iostream>
using namespace std;
int main() {
  int N;
  do
  {
    cout << "Enter number: ";
    cin >> N;
  } while (N <= 0);
  cout << "Valid number: " << N << endl;
  return 0;
}