#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, A, B;
  cin >> K;
  cin >> A >> B;

  int min = A / K;
  int max = B / K;

  for (int i = min; i <= max; i++) {
    if (A <= (K * i) and (K * i) <= B) {
      cout << "OK" << endl;
      return 0;
    }
  }

  cout << "NG" << endl;

  return 0;
}
