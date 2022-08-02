#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	unordered_map<int, int> m;
	int ind = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (m.count(v[i])) {
			ind = i;
			break;
		} else {
			m[v[i]]++;
		}
	}
	if (ind == -1) {
		cout << 0 << "\n";
		return;
	} else {
		cout << ind + 1 << "\n";
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
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