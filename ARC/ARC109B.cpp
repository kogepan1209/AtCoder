// ARC 109 B
/**
問題文
すぬけ君は、渋谷の丸太やさんに丸太を買いに来ました。 すぬけ君は長さ 1 から n
までの n 種類の丸太が 1 本ずつほしいです。 丸太やさんには、長さ 1 から n+1
までの n+1 種類の丸太がそれぞれ 1 円で売られています。どの丸太の在庫も 1
本ずつしかありません。
すぬけ君は買った丸太を切る作業を好きなだけ行えます。つまり、L=L1+⋯+Lk
であるとき、長さ L の丸太 1 本から、長さ L1,…,Lk の k
本の丸太を作る作業を何度でもできます。また、不要な丸太を捨てることができます。
すぬけ君はできるだけ安く丸太を手に入れたいです。 長さ 1 から n までの n
種類の丸太を 1 本ずつ手に入れるために必要な最小の金額を求めてください。

制約
1≤n≤10^18
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << fixed << setprecision(15);
  long long n;
  cin >> n;

  if (n == 1) {
    cout << "1" << endl;
    return 0;
  }

  long long count = 1;
  long long sum = 0;
  while (sum <= n + 1) {
    sum += count;
    count++;
  }

  cout << n - count + 3 << endl;

  return 0;
}
