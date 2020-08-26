#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long N;
    cin >> N;

    int sum = 0;
    while((N/10)!=0){
        sum += N % 10;
        N = N / 10;
    }
    sum += (N%9);

    if((sum%9)==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
   
    return 0;
}
