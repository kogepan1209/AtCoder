#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  sort(A.begin(), A.end(), greater<>());

  long long sum = 0;
  long long ans = 0;
  for (int i = 0; i < N - 1; i++) {
    sum += A[i];
    ans += sum - (A[i + 1] * (i + 1));
  }

  cout << ans << endl;

  return 0;
}
