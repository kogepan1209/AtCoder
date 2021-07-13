#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  int A, B;
  cin >> A >> B;

  if (A <= B && B <= (6 * A))
    cout << "Yes";
  else
    cout << "No";

  return 0;
}
