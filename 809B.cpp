#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
	int n; cin >> n;
	int a[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int res[n+1];
	int dp[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[j] == i) dp[i][j] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << dp[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	for (int i = 1; i <= n; i++) {
		res[i] = dp[i][n];
	}
	for (int i = 1; i <= n; i++) {
		cout << res[i] << " ";
	}
	cout << "\n";
}

int main() {
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}