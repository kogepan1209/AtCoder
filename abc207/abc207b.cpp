#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);

  double a, b, c, d;
  cin >> a >> b >> c >> d;

  if (c * d - b == 0) {
    cout << -1 << endl;
    return 0;
  }

  double ans = ceil(a / (c * d - b));
  if (ans < 0) ans = -1;

  cout << ans << endl;

  return 0;
}
