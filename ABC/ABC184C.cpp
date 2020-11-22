//ABC184 C

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    int a = 0;
    int b = 0;
    int c = r2 - r1;
    int d = c2 - c1;
    
    if( a == c && b == d ){
        cout << '0' << endl;
        return 0;
    }else if( (c+d)==0 || (a-b)==(c-d) || abs(a-c)+abs(b-d)<=3 ){
        cout << '1' << endl;
        return 0;
    }else if( abs(a-c)+abs(b-d)<=6 ){
        cout << '2' << endl;
        return 0;
    }

    if( (c+d) % 2 == 0 ){
        cout << '2' << endl;
        return 0;
    }

    for(int x=-3; x<=3; x++){
        for(int y=-3; y<=3; y++){
            if( x != 0 && y != 0 ){
                if( abs(x) + abs(y) <= 3 ){
                    if( x+y == c+d || x-y == c-d ){
                        cout << '2' << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << '3' << endl;

    return 0;
}
