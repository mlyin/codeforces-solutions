#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, a, b;

bool solve(ll n, ll a, ll b) {
	if (b == 1) {
		return true;
	}
	if (a == 1) {
		return (n % b == 1);
	} else {
		for (ll i = 1; i <= n; i *= a) {
			if ((n - i) % b == 0) {
				return true;
			} 
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll t; cin >> t;
	while (t--) {
		cin >> n >> a >> b;
		if (solve(n, a, b)) {
			cout << "Yes" << "\n";
		} else {
			cout << "No" << "\n";
		}
	}
	return 0;
}