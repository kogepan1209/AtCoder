#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    
    double x[N], y[N];
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }

    double max = 0;
    double length = 0;

    for(int i=0; i<N-1; i++){
        for(int j=i; j<N; j++){
            length = pow((x[i]-x[j]), 2) + pow((y[i]-y[j]), 2);
            if(length > max) max = length;
        }
    }

    cout << sqrt(max) << endl;

    return 0;
}
