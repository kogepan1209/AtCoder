//ABC176 C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    long long ans = 0;
    for (int i = 1; i < N; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }

    cout << ans << endl;

    return 0;
}
