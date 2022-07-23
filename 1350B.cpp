#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

typedef long long ll;

int dp[100004];
int n;
int a[100004];

int func(int ind) {
	if (ind > n) return 0;
	if (dp[ind] != -1) return dp[ind];
	int count = 0;
	for (int i = ind; i <= n; i += ind) {
		if (a[i] > a[ind]) {
			count = max(count, 1 + func(i));
		}
	}
	return dp[ind] = count;
}

void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp[i] = -1;
	}
	int maxi = 1;
	for (int i = 1; i <= n; i++) {
		maxi = max(maxi, 1 + func(i));
	}
	cout << maxi << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}