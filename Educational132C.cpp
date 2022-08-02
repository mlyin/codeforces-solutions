#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	string s; cin >> s;
	if (s == "??") {
		cout << "YES" << "\n";
		return;
	}
	int n = s.length();
	int questionCount[n];
	int leftCount[n];
	int rightCount[n];
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			questionCount[0] = 0;
			leftCount[0] = 0;
			rightCount[0] = 0;
		}
		if (i == 0) {
			if (s[i] == '?') {
				questionCount[0]++;;
			} else if (s[i] == '(') {
				leftCount[0]++;
			} else {
				rightCount[0]++;
			}
		} else {
			if (s[i] == '?') {
				questionCount[i] = questionCount[i-1] + 1;
				leftCount[i] = leftCount[i-1];
				rightCount[i] = rightCount[i-1];
			} else if (s[i] == '(') {
				questionCount[i] = questionCount[i-1];
				leftCount[i] = leftCount[i-1] + 1;
				rightCount[i] = rightCount[i-1];
			} else {
				questionCount[i] = questionCount[i-1];
				leftCount[i] = leftCount[i-1];
				rightCount[i] = rightCount[i-1] + 1;
			}
		}
	}
	// for (int i = 0; i < n; i++) {
	// 	cout << questionCount[i] << " ";
	// }
	// cout << "\n";
	// for (int i = 0; i < n; i++) {
	// 	cout << leftCount[i] << " ";
	// }
	// cout << "\n";
	// for (int i = 0; i < n; i++) {
	// 	cout << rightCount[i] << " ";
	// }
	// cout << "\n";
	for (int i = 0; i < n; i++) {
		bool condition1 = (leftCount[i] + questionCount[i] >= (2 + rightCount[i]));
		bool condition2 = (questionCount[n-1] - questionCount[i]) + (leftCount[n-1] - leftCount[i]) >= (rightCount[n-1] - rightCount[i]);
		// if (condition1) {
		// 	cout << "1 true" << "\n";
		// }
		// if (condition2) {
		// 	cout << "2 true" << "\n";
		// }
		if ((condition1) && (condition2)) {
			cout << "NO" << "\n";
		return;
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