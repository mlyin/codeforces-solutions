#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	int cnt = 0;
	int cnt2 = 0;
	if (n % 2 == 1) { // odd number buildings
		for (int i = 1; i < n; i += 2) {
			if (v[i] <= max(v[i-1], v[i+1])) {
				cnt += ((max(v[i-1], v[i+1]) - v[i]) + 1);
			}
		}
		cout << cnt << endl;
		return;
	} else {
		vector<int> costs(n);
		for (int i = 1; i < n; i += 2) {
			if (v[i] <= max(v[i-1], v[i+1])) {
				costs[i] = ((max(v[i-1], v[i+1]) - v[i]) + 1);
			}
		}
		for (int i = 2; i < n; i += 2) {
			if (v[i] <= max(v[i-1], v[i+1])) {
				costs[i] = ((max(v[i-1], v[i+1]) - v[i]) + 1);
			}
		}
		cout << min(cnt, cnt2) << endl;
		return;
	}
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