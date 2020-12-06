// Money Forward Winter 01
#include <bits/stdc++.h>
using namespace std;

bool hitWall(int m, int n, int x, int y, char c)
{
    switch (c)
    {
    case 'S':
        if (y == n - 1)
            return false;
        break;
    case 'E':
        if (x == m - 1)
            return false;
        break;
    case 'W':
        if (x == 0)
            return false;
        break;
    case 'N':
        if (y == 0)
            return false;
        break;
    default:
        break;
    }

    return true;
}

int main()
{
    //cout << fixed << setprecision(15);

    // 入力
    int n, m;
    cin >> n >> m;

    vector<vector<char>> map(n, vector<char>(m));
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            map[i][j] = s[j];
        }
    }

    // 移動
    int x = 0;
    int y = 0;
    int count = 0;
    while (true)
    {
        if (hitWall(m, n, x, y, map[y][x]))
        {
            count++;
            cout << "x: " << x << ", y: " << y << ", c: " << map[y][x] << ", count: " << count << endl;

            switch (map[y][x])
            {
            case 'S':
                y++;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            case 'N':
                y--;
                break;
            default:
                break;
            }
        }
        else
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
