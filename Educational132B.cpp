#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n; int m;
	cin >> n; cin >> m;
	ll v[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	ll dp[n+1];
	ll dp2[n+1];
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			dp[i] = 0;
		} else {
			if (v[i] > v[i-1]) {
				dp[i] = dp[i-1];
			} else {
				dp[i] = dp[i-1] + (v[i-1] - v[i]);
			}
		}
	}
	for (int i = n; i >= 1; i--) {
		if (i == n) {
			dp2[i] = 0;
		} else {
			if (v[i] > v[i+1]) {
				dp2[i] = dp2[i+1];
			} else {
				dp2[i] = dp2[i+1] + (v[i+1] - v[i]);
			}
		}
	}
	while (m--) {
		int s, t; cin >> s >> t;
		if (s < t) {
			cout << dp[t] - dp[s] << "\n";
		} else {
			cout << dp2[t] - dp2[s] << "\n";
		}
	}
	return 0;
}