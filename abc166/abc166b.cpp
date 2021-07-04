#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> s(n);
  for (int i = 0; i < k; i++) {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++) {
      int a;
      cin >> a;
      s[a - 1] = 1;
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 0) ans++;
  }
  cout << ans << endl;

  return 0;
}
