//ABC183 D

#include <bits/stdc++.h>
using namespace std;

const int NX = 2e5 + 5;
long long a[NX];
int N, W;
 
int main() {
	cin >> N >> W;
	for(int i = 0; i < N; ++i) {
		int s, t, p;
		cin >> s >> t >> p;
		a[s] += p;
		a[t] -= p;
	}
	
	for(int i = 1; i < NX; ++i) {
		a[i] += a[i - 1];
	}
	
	int f = 0;
	for(int i = 0; i < NX; ++i) {
		f |= (a[i] > W);
	}
	
	cout << (f ? "No": "Yes"); 
	return 0;
}
