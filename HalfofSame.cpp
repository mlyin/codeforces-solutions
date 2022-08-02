#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mostFrequent(vector<int> v)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < v.size(); i++)
        hash[v[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
    return max_count;
}

void solve() {
	int n; cin >> n;
	vector<int> v;
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(x);
		map[x]++;
	}
	for (auto x : map) {
		if (x.second >= n/2) {
			cout << -1 << "\n";
			return;
		}
	}
	for (int i = 1000000; i >= 1; i--) {
		vector<int> dupV(v);
		for (int j = 1; j < v.size(); j++) {
			dupV[j] = dupV[j] % i;
		}
		if ((mostFrequent(dupV)) >= n/2) {
			cout << i << "\n";
			return;
		}
	}
	return;
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