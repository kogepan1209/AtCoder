//ABC177 B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout << fixed << setprecision(15);

    string s, t;
    cin >> s >> t;

    int s_len = s.length();
    int t_len = t.length();

    int max = 0;
    for (int i = 0; i < s_len - t_len + 1; i++)
    {
        int tmp = 0;
        for (int j = 0; j < t_len; j++)
        {
            if (s[i + j] == t[j])
                tmp++;
        }
        if (tmp > max)
            max = tmp;
    }

    cout << t_len - max << endl;

    return 0;
}
