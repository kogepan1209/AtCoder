//ABC174 B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << fixed << setprecision(15);

    int n, d;
    cin >> n >> d;

    int x, y, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if ((pow(x, 2) + pow(y, 2)) <= pow(d, 2))
            ans++;
    }

    cout << ans << endl;

    return 0;
}
