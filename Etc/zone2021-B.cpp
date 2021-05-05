#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << fixed << setprecision(15);

  int N;
  double D, H;
  cin >> N >> D >> H;

  vector<pair<double, double>> a(N);

  int d, h;
  for (int i = 0; i < N; i++) {
    cin >> d >> h;
    a[i] = make_pair(d, h);
  }

  sort(a.begin(), a.end());

  double r = H / D;

  for (int i = N - 1; i >= 0; i--) {
    r = min(r, ((H - a[i].second) / (D - a[i].first)));
  }

  cout << (H - (r * D)) << endl;

  return 0;
}
