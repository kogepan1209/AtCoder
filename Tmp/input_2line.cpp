#include <bits/stdc++.h>
using namespace std;

int main(void){
    string c, a;
    getline(cin, c);
    getline(cin, a);
    
    stringstream cc;
    stringstream aa;
    
    cc << c;
    aa << a;
    
    int C;
    string A;
    
    int sum = 0;
    while(!cc.eof()){
        cc >> C;
        aa >> A;
        if( A == "Alice"){
            sum += C;
        }
    }

    cout << sum << endl;
}
