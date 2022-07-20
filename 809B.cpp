#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int IMAX = 100100;

int t, n;

vector<int> a[IMAX];

int solve(int x) {
	if (a[x].empty()) return 0;
	int curr = a[x][0];
	int ans = 1;
	for (int i = 0; i < a[x].size(); i++) {
		if (a[x][i] % 2 != curr % 2) {
			ans++;
			curr = a[x][i];
		} else {
			curr = a[x][i];
		}
	}
	return ans;

}

int main() {
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			a[i].clear();
		}
		for (int i = 1; i <= n; i++) {
			int x; cin >> x;
			a[x].push_back(i); //contains all indices of occurrences
		}
		for (int i = 1; i <= n; i++) {
			cout << solve(i) << " ";
			if (i == n) {
				cout << "\n";
			}
		}
	}
	return 0;
}