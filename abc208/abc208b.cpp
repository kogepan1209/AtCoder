#include <bits/stdc++.h>
using namespace std;

int factorial(int i) { return i ? factorial(i - 1) * i : 1; }

int main() {
  int P;
  cin >> P;

  int answer = 0;
  for (int i = 1; i <= 10; i++) {
    int divisor = factorial(i + 1);
    int residue = P % divisor;
    answer += residue / factorial(i);
    P -= residue;
  }

  cout << answer << "\n";
  return 0;
}
