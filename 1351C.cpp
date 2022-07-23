#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

typedef long long ll;

int dp[100004];
int n;
int a[100004];

void solve() {
	pair<int, int> currCoord = make_pair(0, 0);
	set<pair<pair<int, int>, pair<int, int>>> visitedEdges;
	string s; cin >> s;
	int res = 0;
	for (int i = 0; i < s.length(); i++) {
		pair<int, int> prevCoord = currCoord;
		if (s[i] == 'N') {
			currCoord.second++;
		} else if (s[i] == 'E') {
			currCoord.first++;
		} else if (s[i] == 'S') {
			currCoord.second--;
		} else { // s[i] == 'W'
			currCoord.first--;
		}
		pair<pair<int, int>, pair<int, int>> currEdge = make_pair(prevCoord, currCoord);
		pair<pair<int, int>, pair<int, int>> currEdgeReversed = make_pair(currCoord, prevCoord);
		if ((visitedEdges.find(currEdge) != visitedEdges.end()) || (visitedEdges.find(currEdgeReversed) != visitedEdges.end())) {
			res++;
		} else {
			visitedEdges.insert(currEdge);
			res += 5;
		}
	}
	cout << res << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}