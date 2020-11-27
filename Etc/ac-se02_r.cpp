#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=0; i<n; i++){
        if( i == 0 ) cout << *max_element(a.begin()+1, a.end()) << endl;
        else if( i == n-1 ) cout << *max_element(a.begin(), a.end()-1) << endl;
        else cout << max( *max_element(a.begin(), a.begin()+i), *max_element(a.begin()+i+1, a.end())) << endl;
    }

    return 0;
}
