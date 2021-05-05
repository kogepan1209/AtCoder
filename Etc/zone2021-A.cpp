#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);

  string S;
  cin >> S;

  int ans = 0;
  for (int i = 0; i < S.length() - 3; i++) {
    if (S[i] == 'Z' && S[i + 1] == 'O' && S[i + 2] == 'N' && S[i + 3] == 'e')
      ans++;
  }

  cout << ans << endl;

  return 0;
}
