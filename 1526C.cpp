#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	priority_queue<int> q;
	int global_max = 0;
	ll health = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		q.push(-a[i]);
		health += a[i];
		count++;
		if (health < 0) {
			health -= -(q.top());
			q.pop();
			count--;
		}
		global_max = max(global_max, count);
	}
	cout << global_max;
	return 0;
}