#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);

  string S;
  cin >> S;

  vector<char> T;

  bool flag = true;

  for (int i = 0; i < S.length(); i++) {
    if (S[i] == 'R') {
      flag = !flag;
      continue;
    }

    if (flag)
      T.push_back(S[i]);
    else
      T.insert(T.begin(), S[i]);
  }

  if (!flag) reverse(T.begin(), T.end());

  string ans;
  for (char c : T) {
    if (ans.size() != 0 && ans.back() == c) {
      ans.pop_back();
    } else {
      ans += c;
    }
  }

  cout << ans << endl;

  return 0;
}
