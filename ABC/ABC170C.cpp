#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, N;
  cin >> X >> N;

  int p[N];
  for (int i = 0; i < N; i++) {
    cin >> p[i];
  }

  int flag = 0;

  for (int i = 0; i < N; i++) {
    if (X == p[i]) {
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << X << endl;
  }

  if (flag == 1) {
    int i = 1;
    while (1) {
      flag = 0;
      for (int n = 0; n < N; n++) {
        if ((X - i) == p[n]) {
          flag = 1;
        }
      }
      if (flag == 0) {
        cout << X - i << endl;
        break;
      }
      flag = 0;
      for (int n = 0; n < N; n++) {
        if ((X + i) == p[n]) {
          flag = 1;
        }
      }
      if (flag == 0) {
        cout << X + i << endl;
        break;
      }
      i++;
    }
  }

  return 0;
}
