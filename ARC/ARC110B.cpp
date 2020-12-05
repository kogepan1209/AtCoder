// ARC 110 B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << fixed << setprecision(15);
    int n;
    cin >> n;

    string s1 = "110";
    string s2 = "101";
    string s3 = "011";

    string t;
    cin >> t;

    bool same1 = true;
    bool same2 = true;
    bool same3 = true;
    if (t[0] == '1' && t[1] == '1')
    {
        same2 = false;
        same3 = false;
        for (int i = 0; i < n; i++)
        {
            if (t[i] != s1[i % 3])
                same1 = false;
        }
    }
    else if (t[0] == '1' && t[1])
    {
        same1 = false;
        same3 = false;
        for (int i = 0; i < n; i++)
        {
            if (t[i] != s2[i % 3])
                same2 = false;
        }
    }
    else if (t[0] == '0' && t[1])
    {
        same1 = false;
        same2 = false;
        for (int i = 0; i < n; i++)
        {
            if (t[i] != s3[i % 3])
                same3 = false;
        }
    }
    else
    {
        same1 = false;
        same2 = false;
        same3 = false;
    }

    long long ans = 10000000000;
    if (n == 1)
    {
        if (t[0] == '1')
        {
            ans *= 2;
        }
        else if (t[0] == '0')
        {
        }
        else
        {
            ans = 0;
        }
    }
    else if (n == 2)
    {
        if (t[0] == '1' && t[1] == '1')
        {
        }
        else if (t[0] == '1' && t[1] == '0')
        {
        }
        else if (t[0] == '0' && t[1] == '1')
        {
            ans -= 1;
        }
        else
        {
            ans = 0;
        }
    }
    else if (same1)
    {
        ans -= (n - 1) / 3;
    }
    else if (same2)
    {
        ans -= n / 3;
    }
    else if (same3)
    {
        ans -= (n + 1) / 3;
    }
    else
    {
        ans = 0;
    }

    cout << ans << endl;

    return 0;
}
