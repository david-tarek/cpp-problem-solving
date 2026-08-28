#include <iostream>
using namespace std;
int main() {
  int N, Years, RemainingDays, RemainingMonth, Days;
  cin >> N;
  Years = N / 365;
  RemainingDays = N % 365;
  RemainingMonth = RemainingDays / 30;
  Days = RemainingDays % 30;
  cout << Years << " years\n" << RemainingMonth << " months\n" << Days << " days\n";

  return 0;
}