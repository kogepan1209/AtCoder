// ARC 109 A
/**
問題文
100 階建ての建物 A , B があります。 i=1,…,100 について、建物 A の i 階と B の i 階は廊下で繋がれています。
また、i=1,…,99 について、建物 A の i+1 階と B の i 階は廊下で繋がれています。 どの廊下も双方向に通行可能で、移動には x 分かかります。
また、A, B どちらの建物にも階段があり、i=1,…,99 について、同じ建物の i 階と i+1 階は階段で繋がれています。どの階段も双方向に通行可能で、移動には y 分かかります。
建物 A の a 階から建物 B の b 階に移動するのにかかる最短時間を求めてください。

制約
1≤a,b,x,y≤100
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    //cout << fixed << setprecision(15);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if( a == b){
        cout << x << endl;
    }else if( a > b ){
        cout << min( 2*(a-b)*x-x , (a-b-1)*y+x ) << endl;
    }else{
        cout << min( (b-a)*2*x+x , (b-a)*y+x ) << endl;
    }
    
    return 0;
}
