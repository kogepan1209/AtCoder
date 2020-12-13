//ABC185 A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << fixed << setprecision(15);
    int n, m, t;
    cin >> n >> m >> t;

    vector<int> a(m);
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> a[i] >> b[i];

    int battery = n;
    int cafe = 0;
    for (int i = 0; i < t; i++)
    {
        if (i >= a[cafe] && i < b[cafe])
        {
            if (battery < n)
            {
                battery++;
            }
        }
        else if (i == b[cafe])
        {
            cafe++;
            battery--;
        }
        else
        {
            battery--;
        }

        if (battery == 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
