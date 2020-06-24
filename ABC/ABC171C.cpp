#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long N;
    cin >> N;
    
    string s = "abcdefghijklmnopqrstuvwxyz";
    long tmp = 3670344486987776;
    while(tmp > N){
        tmp /= 26;
    }

    vector<char> c;
    while(N > 26){
        c.push_back(s[N/tmp-1]);
        N -= tmp;
        tmp /= 26;
    }
    c.push_back(s[N-1]);

    for(int i=0; i<c.size(); i++) {
        cout << c[i];
    }
    cout << endl;
   
    return 0;
}