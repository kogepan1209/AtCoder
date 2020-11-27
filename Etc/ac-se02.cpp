#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> a_sorted(n);
    for(int i=0; i<n; i++) a_sorted[i] = a[i];
    sort(a_sorted.begin(), a_sorted.end());
    int max = a_sorted[n];
    int max_second = a_sorted[n-1];

    for(int i=0; i<n; i++){
        if( a[i] != max ) cout << max << endl;
        else cout << max_second << endl;
    }

    return 0;
}
