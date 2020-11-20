//ABC180 C

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long N;
    cin >> N;

    set<long> ans;
    for(long i=1; i*i<=N; i++){
        if( N % i == 0 ){
            ans.insert(i);
            ans.insert(N/i);
        }
    }

    for(auto x:ans) {
        cout << x << endl;     // 要素を順に表示
    }
    
    return 0;
}
