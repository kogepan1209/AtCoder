#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);

  int N, t, ans = 0;
  cin >> N;

  vector<double> l(N), r(N);
  for (int i = 0; i < N; i++) {
    cin >> t >> l.at(i) >> r.at(i);
    if (t % 2 == 0) r.at(i) -= 0.5;
    if (t > 2) l.at(i) += 0.5;
  }

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++)
      ans += (max(l.at(i), l.at(j)) <= min(r.at(i), r.at(j)));
  }
  cout << ans << endl;

  return 0;
}
