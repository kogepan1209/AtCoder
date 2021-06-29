// ABC185 A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  int L;
  cin >> L;
  L--;

  unsigned long long ans = 1;

  for (int i = L; i > L - 11; i--) {
    ans *= i;
  }

  for (int i = 1; i <= 11; i++) {
    ans /= i;
  }

  cout << ans << endl;

  return 0;
}
