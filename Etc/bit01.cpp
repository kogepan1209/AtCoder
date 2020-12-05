#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 45;
    int b = 25;

    cout << a << " AND " << b << " = " << (a & b) << endl;
    cout << bitset<8>(a) << " AND " << bitset<8>(b) << " = " << bitset<8>(a & b) << endl;

    cout << a << " OR " << b << " = " << (a | b) << endl;
    cout << bitset<8>(a) << " OR " << bitset<8>(b) << " = " << bitset<8>(a | b) << endl;

    return 0;
}
