// ABC185 A
#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1, 0);
  a[n] = 1;
  if (m != 0) {
    int tmp;
    for (int i = 0; i < m; i++) {
      cin >> tmp;
      a[tmp - 1] = 1;
    }
  }

  if (m == 0) {
    cout << "1" << endl;
    return 0;
  }
  if (n == m) {
    cout << "0" << endl;
    return 0;
  }

  vector<int> c;
  bool bool_continue = false;
  int cnt = 0;
  int min_c = n;
  for (int i = 0; i <= n; i++) {
    if (a[i] == 0) {
      bool_continue = true;
      cnt++;
    } else {
      if (bool_continue) {
        c.push_back(cnt);
        min_c = min(min_c, cnt);
        cnt = 0;
        bool_continue = false;
      }
    }
  }

  int ans = 0;
  int c_size = c.size();
  for (int i = 0; i < c_size; i++) {
    if (c[i] % min_c != 0) {
      ans += (c[i] / min_c + 1);
    } else {
      ans += (c[i] / min_c);
    }
  }

  cout << ans << endl;

  return 0;
}
