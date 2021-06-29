#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  int a, b, c;
  cin >> a >> b >> c;

  cout << a + b + c - min(a, min(b, c)) << endl;

  return 0;
}
