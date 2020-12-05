#include <bits/stdc++.h>
using namespace std;

int main()
{
    double PI = 3.14159265358979323846;
    double twoPI = 6.28318530718;
    ;

    int a, b;
    double h, m;
    cin >> a >> b >> h >> m;

    double ha = h * (twoPI / 12) + m * (twoPI / 720);
    double ma = m * (twoPI / 60);

    double hm = 0;
    if (ha >= ma)
    {
        hm = ha - ma;
    }
    else if (ma > ha)
    {
        hm = ma - ha;
    }

    if (hm > PI)
    {
        hm = twoPI - hm;
    }
    else
    {
    }

    double c = 0;
    c = a * a + b * b - 2 * a * b * cos(hm);
    c = sqrt(c);

    cout << fixed << setprecision(15) << c << endl;

    return 0;
}
