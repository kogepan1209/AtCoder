#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;

    unsigned long long tmp = 0;
    unsigned long long sum = 1;
    unsigned long long max = 1000000000000000000;
    int flag = 1;

    for(int i=0; i<N; i++){
        cin >> tmp;
        if(tmp == 0) flag = 0;
        if(tmp > (max/sum)) flag = -1;
        sum *= tmp;
    }

    if(flag == 1) cout << sum << endl;
    if(flag == 0) cout << flag << endl;
    if(flag == -1) cout << flag << endl;
    
    return 0;
}
