#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Tmp;
    cin >> Tmp;
    //cout << Tmp << endl;

    int A, B, C, D;
    A = Tmp / 1000;
    B = Tmp % 1000 / 100;
    C = Tmp % 100 / 10;
    D = Tmp % 10 / 1;
    //cout << A << " " << B << " " << C << " " << D << endl;

    int ans = 0;
    if ((A + B + C + D) == 7)
    {
        cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl;
        return 0;
    }
    if ((A + B + C - D) == 7)
    {
        cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl;
        return 0;
    }
    if ((A + B - C + D) == 7)
    {
        cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl;
        return 0;
    }
    if ((A + B - C - D) == 7)
    {
        cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl;
        return 0;
    }
    if ((A - B + C + D) == 7)
    {
        cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl;
        return 0;
    }
    if ((A - B + C - D) == 7)
    {
        cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl;
        return 0;
    }
    if ((A - B - C + D) == 7)
    {
        cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl;
        return 0;
    }
    if ((A - B - C - D) == 7)
    {
        cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl;
        return 0;
    }

    return 0;
}
