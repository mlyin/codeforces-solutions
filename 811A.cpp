#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	int h, m;
	int n; cin >> n;
	cin >> h >> m;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		v.push_back(60*x+y);
	}
	vector<int> times(n);
	for (int i = 0; i < n; i++) {
		times[i] = (v[i] - (60*h+m));
		if (times[i] < 0) {
			times[i] += 1440;
		}
	}
	int min_el = *min_element(times.begin(), times.end());
	cout << min_el / 60 << " " << min_el % 60 << "\n";
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