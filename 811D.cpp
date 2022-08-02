#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool solveable(string s, vector<string> v) {
	if (s == "") {
		return true;
	}
	if (count(v.begin(), v.end(), s)) {
		return true;
	}
	for (int i = 1; i < s.length(); i++) {
		if (solveable(s.substr(0, i), v) && solveable(s.substr(i)), v) {
			return true;
		}
	}
	return false;
}

void solve() {
	string s; cin >> s;
	int n; cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	if 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int q; cin >> q;
	while (q--) {
		solve();
	}
	return 0;
}