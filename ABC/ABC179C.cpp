//ABC179 C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    for (int a = 1; a < N; a++)
    {
        cnt += (N - 1) / a;
    }

    cout << cnt << endl;

    return 0;
}
