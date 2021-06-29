#include <bits/stdc++.h>
using namespace std;

int main() {
  long long X, K, D;
  cin >> X >> K >> D;
  X = abs(X);

  long long straight = min(K, X / D);
  K -= straight;
  X -= straight * D;

  if (K % 2 == 0) {
    cout << X << endl;
  } else {
    cout << D - X << endl;
  }

  return 0;
}
