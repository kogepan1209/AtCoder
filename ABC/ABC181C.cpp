//ABC181 C

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for( int i=0; i<n-2; i++){
        for (int j=i+1; j<n-1; j++){
            for (int k=j+1; k<n; k++){
                int x1 = x[i] - x[k];
                int y1 = y[i] - y[k];
                int x2 = x[j] - x[k];
                int y2 = y[j] - y[k];
                if( (x1*y2) == (x2*y1)){
                    puts("Yes");
                    return 0;
                }
            }
        }
    }
    puts("No");

    return 0;
}
