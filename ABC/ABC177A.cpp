// ABC 177 A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << fixed << setprecision(15);

    double D, T, S;
    cin >> D >> T >> S;

    if (T >= D / S)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
