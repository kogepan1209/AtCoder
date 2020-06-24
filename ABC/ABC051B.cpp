#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;

    int sum = 0;
    for(int i=K; i>=0; i--){
        for(int j=K; j>=0; j--){
            for(int k=K; k>=0; k--){
                if((i+j+k)==S){
                    sum++;
                    break;
                }
            }
        }
    }

    cout << sum << endl;
    
    return 0;
}
