//ABC184 B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            x++;
        }
        else if (s[i] == 'x')
        {
            if (x > 0)
            {
                x--;
            }
        }
    }

    cout << x << endl;

    return 0;
}
