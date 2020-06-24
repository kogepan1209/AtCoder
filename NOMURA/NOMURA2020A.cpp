#include <bits/stdc++.h>
using namespace std;
int main(){
  int h1, m1, h2, m2, k;
  cin >> h1 >> m1 >> h2 >> m2 >> k;
  
  int t1, t2;
  t1 = h1*60 + m1;
  t2 = h2*60 + m2;
  
  int t = t2 - t1 -k;
  cout << t << endl;
  
  return 0;
}