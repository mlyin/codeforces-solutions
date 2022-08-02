#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> adj[n];
	int d[n]{0};
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		adj[u].push_back({v, i});
		adj[v].push_back({u, i});
		d[u]++;
		d[v]++;
	}
	int start;
	for (int i = 0; i < n; i++) {
		if (d[i] >= 3) {
			cout << -1 << "\n";
			return;
		}
		if (d[i] == 1) {
			start = i;
		}
	}
	bool proc[n]{false};
	stack<int> s;
	int res[n-1]{0};
	int weight = 2;
	s.push(start);
	while (!s.empty()) {
		int curr = s.top();
		s.pop();
		proc[curr] = true;
		for (auto ed : adj[curr]) {
			int nei, i;
			tie(nei, i) = ed;
			if (proc[nei]) continue;
			s.push(nei);
			res[i] = weight;
			if (weight == 2) weight = 3;
			else weight = 2;
		}
	}
	for (int i = 0; i <n-1; i++) {
		cout << res[i] << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}