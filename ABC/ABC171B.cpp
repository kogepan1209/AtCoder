#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> p;
    int tmp;
    for(int i=0; i<N; i++){
        cin >> tmp;
        p.push_back(tmp);
    }

    sort(p.rbegin(), p.rend());

    int sum = 0;
    for(int i=0; i<K; i++){
        sum += p.back();
        p.pop_back();
    }

    cout << sum << endl;

    return 0;
}