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
	if (v.size() == 1) {
		cout << "YES" << "\n";
		return;
	}
	unordered_set<int> p1 = {1, 2, 4, 8, 13, 16, 17, 19};
	unordered_set<int> p2 = {3, 6, 7, 9, 11, 12, 14, 18};
	unordered_set<int> p3 = {0, 5, 10, 15};
	int currentPattern = 0;
	if (v[0] % 10 == 5 || v[0] % 10 == 0) {
		if (v[0] % 10 == 5) { //ends in 5
			for (int i = 1; i < n; i++) {
				if (!((v[i] == v[0]) || (v[i] == v[0] + 5))) {
					cout << "NO" << "\n";
					return;
				}
			}
			cout << "YES" << "\n";
			return;
		} else { //ends in 0
			for (int i = 1; i < n; i++) {
				if (!((v[i] == v[0]) || (v[i] == v[0] - 5))) {
					cout << "NO" << "\n";
					return;
				}
			}	
			cout << "YES" << "\n";
			return;
		}
	} else {
		if (p1.count(v[0] % 20)) {
			currentPattern = 1;
		} else {
			currentPattern = 2;
		}
		for (int i = 1; i < n; i++) {
			if ((currentPattern == 1) && ((p2.count(v[i] % 20)) || (p3.count(v[i] % 20))) || (currentPattern == 2) && ((p1.count(v[i] % 20))) || (p3.count(v[i] % 20))) {
				cout << "NO" << "\n";
				return;
			}
		}
	}
	cout << "YES" << "\n";
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
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}