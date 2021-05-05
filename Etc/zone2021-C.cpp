#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);

  int N;
  cin >> N;

  vector<vector<long long>> member(N, vector<long long>(5));

  for (int i = 0; i < N; i++) {
    cin >> member[i][0] >> member[i][1] >> member[i][2] >> member[i][3] >>
        member[i][4];
  }

  int ok = 0, ng = 1000000001;
  auto check = [&](int x) -> bool {
    set<int> s;
    for (auto& a : member) {
      int bit = 0;
      for (int i : a) {
        bit <<= 1;
        bit |= i >= x;
      }
      s.insert(bit);
    }
    for (int x : s)
      for (int y : s)
        for (int z : s) {
          if ((x | y | z) == 31) return 1;
        }
    return 0;
  };
  while (abs(ok - ng) > 1) {
    int cen = (ok + ng) / 2;
    (check(cen) ? ok : ng) = cen;
  }
  cout << ok << endl;

  return 0;
}
