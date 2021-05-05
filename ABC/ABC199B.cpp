// ABC199 B
#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);

  int N;
  cin >> N;

  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }

  int A_max = *max_element(A.begin(), A.end());
  int B_min = *min_element(B.begin(), B.end());

  if ((B_min - A_max) >= 0) {
    cout << (B_min - A_max + 1) << endl;
  } else {
    cout << '0' << endl;
  }

  return 0;
}
