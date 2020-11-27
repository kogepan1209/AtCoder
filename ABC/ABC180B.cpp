//ABC180 B

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    cout << fixed << setprecision(15);

    int N;
    cin >> N;
    vector<int> x(N);
    for(int i=0; i<N; i++) cin >> x[i];

    long m = 0;
    long u = 0;
    int c = 0;
    for(int i=0; i<N; i++){
        m += abs(x[i]);
        u += abs(x[i]) * (long)abs(x[i]);
        c = max(c, abs(x[i]));
    }

    cout << m << endl;
    cout << sqrt(u) << endl;
    cout << c << endl;
    
    return 0;
}