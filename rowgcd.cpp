#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

void solve(ll n, ll m) {
	vector<ll> a;
	vector<ll> b; //is there any way to push back in line?
	for (int i = 0; i < n; i++) {
		ll x; cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < m; i++) {
		ll x; cin >> x;
		b.push_back(x);
	}
	sort(a.begin(), a.end());
	ll firstGcd = 0;
	if (a.size() > 1) {
		for (int i = 1; i < n; i++) {
			firstGcd = gcd(firstGcd, a[i] - a[0]);
		}
	}
	for (int i = 0; i < m; i++) {
		cout << gcd(firstGcd, a[0] + b[i]) << " ";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m; cin >> n >> m;
	solve(n, m);
	return 0;
}