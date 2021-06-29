#include <bits/stdc++.h>
using namespace std;

long long calc(int n) {
  if (n < 2) {
    return 0;
  }
  long long ans = 0;
  for (int i = 1; i < n; i++) {
    ans += i;
  }
  return ans;
}

int main() {
  // cout << fixed << setprecision(15);

  int N;
  cin >> N;

  int cnt[200];
  for (int i = 0; i < 200; i++) {
    cnt[i] = 0;
  }

  long long tmp;
  for (int i = 0; i < N; i++) {
    cin >> tmp;
    cnt[tmp % 200]++;
  }

  long long ans = 0;
  for (int i = 0; i < 200; i++) {
    ans += calc(cnt[i]);
  }

  cout << ans << endl;

  return 0;
}
