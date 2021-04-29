// JOI 2006 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> x(n), y(n);
  vector<vector<bool>> map(5001, vector<bool>(5001));   // 柱の存在マップ
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
    map[y[i]][x[i]] = true;
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++){
      int dis_x = x[j] - x[i];
      int dis_y = y[j] - y[i];

      // 2点取れない場合を除去
      if (i == j)
      {
        continue;
      }

      // 枠外にはみ出る場合を除去
      if (y[i] + dis_x < 0 || 5000 < y[i] + dis_x || x[i] - dis_y < 0 || 5000 < x[i] - dis_y || y[j] + dis_x < 0 || 5000 < y[j] + dis_x || x[j] - dis_y < 0 || 5000 < x[j] - dis_y)
      {
        continue;
      }

      // これだけだとセグフォする
      if (map[y[i] + dis_x][x[i] - dis_y] && map[y[j] + dis_x][x[j] - dis_y])
      {
        ans = max(ans, dis_x * dis_x + dis_y * dis_y);
      }
    }
  }

  cout << ans << endl;

  return 0;
}
