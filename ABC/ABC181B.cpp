//ABC181 B

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    long long a, b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sum += ( b*(b+1)/2 - a*(a-1)/2 );
    }
    cout << sum << endl;

    return 0;
}
