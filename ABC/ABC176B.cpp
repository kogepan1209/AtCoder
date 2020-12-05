//ABC176 B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int sum = 0;
    for (int i = 0; i < a.length(); i++)
    {
        sum += (a[i] - '0');
    }

    if (sum % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
