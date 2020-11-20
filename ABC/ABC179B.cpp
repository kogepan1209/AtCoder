//ABC179 B

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    vector<int> d1(n);
    vector<int> d2(n);
    for(int i=0; i<n; i++) cin >> d1[i] >> d2[i];

    for(int i=2; i<n; i++){
        if(d1[i-2]==d2[i-2] && d1[i-1]==d2[i-1] && d1[i]==d2[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    
    return 0;
}
