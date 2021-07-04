// ABC183 B

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;

  long double x = (gx - sx) * sy;
  x = x / (sy + gy) + sx;

  cout << fixed << setprecision(9) << x << endl;

  return 0;
}
