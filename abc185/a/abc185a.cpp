// ABC185 A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int ans = min(a, b);
  ans = min(ans, c);
  ans = min(ans, d);

  cout << ans << endl;

  return 0;
}
