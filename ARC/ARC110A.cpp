// ARC 110 A
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return (b);
    }
    else
    {
        return (gcd(b, a % b));
    }
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    //cout << fixed << setprecision(15);

    int n;
    cin >> n;

    long long ans = 2;
    for (int i = 3; i <= n; i++)
    {
        ans = lcm(ans, i);
    }

    cout << ans + 1 << endl;

    return 0;
}
