#include <bits/stdc++.h>
using namespace std;
int main(){
  int k;
  string s;
  cin >> k;
  cin >> s;
  
  int slength = (int)(s.length());
  if( slength <= k){
    cout << s << endl;
  }else{
    s = s.substr(0,k);
    cout << s << "..." << endl;
  }
  
  return 0;
}