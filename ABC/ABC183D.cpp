//ABC183 D

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, w;
    cin >> n >> w;

    int s[n], t[n], p[n];
    for(int i=0; i<n; i++){
        cin >> s[i] >> t[i] >> p[i];
    }

    for(int i=0; i<n; i++){
        int use = 0;
        for(int j=0; j<n; j++){
            if( s[j]<=s[i] && s[i]<t[j]){
                use += p[j];
                if( use > w){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    /**
    int finish_t = *max_element(t, t+n);
    for(int i=0; i<finish_t; i++){
        int use_w = 0;
        for(int j=0; j<n; j++){
            if( s[j]<=i && i<t[j]){
                use_w += p[j];
                if( use_w > w){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    **/
   
    cout << "Yes" << endl;
    
    return 0;
}
