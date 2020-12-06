#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int r = 1;
    if (s == "RRR")
        r = 3;
    else if (s == "RRS" || s == "SRR")
        r = 2;
    else if (s == "SSS")
        r = 0;

    cout << r << endl;

    return 0;
}
