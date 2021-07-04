// ABC182 B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int max = 0;
  int res = -1;
  for (int i = 2; i <= 1000; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (a[j] % i == 0) cnt++;
    }
    if (max < cnt) max = cnt, res = i;
  }
  cout << res << endl;

  return 0;
}
