#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(int x) {
	if (x <= 9) {
		cout << x << "\n";
	} else if (x <= 17) {
		cout << (x-9) << 9 << "\n";
	} else if (x <= 24) {
		cout << (x-17) << 8 << 9 << "\n";
	} else if (x <= 30) {
		cout << (x-24) << 7 << 8 << 9 << "\n";
	} else if (x <= 35) {
		cout << (x-30) << 6 << 7 << 8 << 9 << "\n";
	} else if (x <= 39) {
		cout << (x-35) << 5 << 6 << 7 << 8 << 9 << "\n";
	} else if (x <= 42) {
		cout << (x-39) << 4 << 5 << 6 << 7 << 8 << 9 << "\n";
	} else if (x <= 44) {
		cout << (x-42) << 3 << 4 << 5 << 6 << 7 << 8 << 9 << "\n";
	} else {
		cout << (x-44) << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << "\n";
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
	int t; cin >> t;
	while (cin >> t) {
		solve(t);
	}
	return 0;
}