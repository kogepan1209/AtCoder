//ABC199 C
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //cout << fixed << setprecision(15);

  int N, Q;
  string S;
  cin >> N >> S >> Q;

  vector<int> T(Q), A(Q), B(Q);
  for (int i = 0; i < Q; i++){
    cin >> T[i] >> A[i] >> B[i];
  }

  for (int i = 0; i < Q; i++){
    if(T[i] == 1){
      char tmp = S[A[i] - 1];
      S[A[i] - 1] = S[B[i] - 1];
      S[B[i] - 1] = tmp;
    }
    else
    {
      if(T[i+1] == 2){
        i++;
      }else{
        string tmp = S.substr(N);
        S.insert(0, tmp);
        S.erase(2 * N);
      }
    }
  }

  cout << S << endl;

  return 0;
}
