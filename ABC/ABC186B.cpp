#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  int H, W;
  cin >> H >> W;

  vector<vector<int>> A(H, vector<int>(W));
  int minimum = 100;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
      minimum = min(minimum, A[i][j]);
    }
  }

  long long ans = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      ans += A[i][j] - minimum;
    }
  }

  cout << ans << endl;

  return 0;
}
