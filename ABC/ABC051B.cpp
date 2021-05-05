#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, S;
  cin >> K >> S;

  int sum = 0;
  for (int X = K; X >= 0; X--) {
    for (int Y = K; Y >= 0; Y--) {
      int Z = S - X - Y;
      if (0 <= Z and Z <= K) sum++;
    }
  }

  cout << sum << endl;

  return 0;
}
