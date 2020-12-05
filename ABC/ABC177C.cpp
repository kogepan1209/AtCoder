//ABC177 C
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// cout << fixed << setprecision(15);
	const long long MOD = 1000000007;

	// 入力・累積和
	int n;
	cin >> n;
	vector<long long> a(n);
	vector<long long> at(n + 1, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		at[i + 1] = at[i] + a[i];
	}

	long long ans = 0;
	for (int i = 0; i < n - 1; i++)
	{
		long long sum = (at[n] - at[i + 1]) % MOD;
		ans += (a[i] * sum) % MOD;
	}

	cout << ans % MOD << endl;

	return 0;
}
