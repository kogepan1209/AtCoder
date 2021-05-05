#include <bits/stdc++.h>
using namespace std;

bool is_not_exist_seven(string n) {
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '7') return false;
  }

  return true;
}

int main() {
  // cout << fixed << setprecision(15);
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    stringstream ss;
    ss << oct << i;
    string N_8 = ss.str();
    string N_10 = to_string(i);

    if (is_not_exist_seven(N_10) && is_not_exist_seven(N_8)) ans++;
  }

  cout << ans << endl;

  return 0;
}
