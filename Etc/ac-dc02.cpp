#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  int s_len = s.length();

  // スキップソート
  for(int i=(s_len-2); i>=0; i--){
    bool change = true;
    for(int j=0; j<i; j++){
      if( s[j] > s[j+2] ){
        char tmp = s[j+2];
        s[j+2] = s[j];
        s[j] = tmp;
        change = false;
      }
    }
    if(change) break;
  }

  cout << s << endl;

  return 0;
}
