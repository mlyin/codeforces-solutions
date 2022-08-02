#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int IMAX = 100100;
int t, n;

void solve() {
	int currKey; cin >> currKey;
	vector<int> v(IMAX);
	map<int, int> m;
	for (int i = 1; i <= 3; i++) {
		cin >> v[i];
	}
	// for (int i = 1; i <= 3; i++) {
	// 	cout << i << " " << v[i] << "\n";
	// }
	// cout << "\n";
	for (int i = 1; i <=3; i++) {
		m.insert(make_pair(i, v[i]));
	}
	while (!m.empty()) {
		// for (int i = 1; i <= 3; i++) {
		// 	cout << i << " " << v[i] << "\n";
		// }
		// cout << "\n";
		if (m.count(currKey)) {
			int nextKey = m[currKey];
			m.erase(currKey);
			currKey = nextKey;
		} else {
			cout << "NO" << "\n";
			return;
		}
	}
	if (m.empty()) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
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