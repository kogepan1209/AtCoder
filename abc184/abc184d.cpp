// ABC184 D

#include <bits/stdc++.h>
using namespace std;

// vector<vector<vector<double>>> dp(101);
double dp[101][101][101];
double f(int a, int b, int c) {
  if (dp[a][b][c]) return dp[a][b][c];
  if (a == 100 || b == 100 || c == 100) return 0;

  double ans = 0;
  ans += (f(a + 1, b, c) + 1) * a / (a + b + c);
  ans += (f(a, b + 1, c) + 1) * b / (a + b + c);
  ans += (f(a, b, c + 1) + 1) * c / (a + b + c);
  dp[a][b][c] = ans;
  return ans;
}

int main() {
  cout << fixed << setprecision(15);

  int a, b, c;
  cin >> a >> b >> c;

  cout << f(a, b, c) << endl;

  return 0;
}
