//ABC178 B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << fixed << setprecision(15);
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<long> ans;

    ans.push_back(a * c);
    ans.push_back(a * d);
    ans.push_back(b * c);
    ans.push_back(b * d);

    sort(ans.begin(), ans.end());

    cout << ans[3] << endl;

    return 0;
}
