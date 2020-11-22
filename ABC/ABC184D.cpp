//ABC184 D

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    cout << fixed << setprecision(15);

    int a, b, c;
    cin >> a >> b >> c;

    int s = a + b + c;

    double p_a = (double)a * (100-a) / s;
    double p_b = (double)b * (100-b) / s;
    double p_c = (double)c * (100-c) / s;

    cout << p_a << endl;
    cout << p_b << endl;
    cout << p_c << endl;
    cout << p_a + p_b + p_c << endl;
    
    return 0;
}
