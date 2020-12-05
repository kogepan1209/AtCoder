//ABC176 A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, T;
    cin >> N >> X >> T;

    int min = (N + (X - 1)) / X * T;

    cout << min << endl;

    return 0;
}
