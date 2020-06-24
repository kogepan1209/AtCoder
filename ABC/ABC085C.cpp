#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long Y;
    cin >> N >> Y;

    int x, y, z;
    for(x=0; x<=N; x++){
        for(y=0; y<=N; y++){
            z = (Y - x*10000 - y*5000) / 1000;
            if(0<= z and z == (N-x-y)){
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}
