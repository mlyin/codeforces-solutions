#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int IMAX = 100100;
int t, n;
ll v[IMAX];

ll cost(int i) {
	return max(0ll, max(v[i-1], v[i+1]) - v[i] + 1);
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	if (n%2 == 1) {
		ll cnt = 0;
		for (int i = 1; i < n-1; i += 2) {
			cnt += cost(i);
		}
		cout << cnt << endl;
		return;
	}

	ll cnt = 0;
	for (int i = 1; i < n-1; i += 2) {
		cnt += cost(i);
	}
	ll global_min = cnt;
	for (int i = n-2; i > 1; i -= 2) {
		cnt -= cost(i-1);
		cnt += cost(i);
		global_min = min(cnt, global_min);
	}
	cout << global_min << endl;
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}