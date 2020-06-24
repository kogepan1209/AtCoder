#include <bits/stdc++.h>
using namespace std;
int main(){
  int A,B,C,K;
  
  cin >> A >> B >> C >> K;
  
  int sum=A+B;
  int max;
  
  if(sum>=K){
    if(A>=K){
      max=K;
    }else if(A<K){
      max=A;
    }
  }else if(sum<K){
    max=A-(K-sum);
  }
  
  cout << max << endl;
  
  return 0;
}