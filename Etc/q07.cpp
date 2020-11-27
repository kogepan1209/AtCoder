#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 1000;
    long counter = 0;

    long count_i = 0;
    long count_j = 0;
    long count_h = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int h=j; h<n; h++){
                for(int k=h; k<n; k++){
                    counter++;
                }
                count_h++;
            }
            count_j++;
        }
        count_i++;
    }

    cout << count_i << endl;
    cout << count_j << endl;
    cout << count_h << endl;
    cout << counter << endl;

    return 0;
}
