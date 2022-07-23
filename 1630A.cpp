#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, a, b;

int myPow(int x, unsigned int p)
{
  if (p == 0) return 1;
  if (p == 1) return x;
  
  int tmp = myPow(x, p/2);
  if (p%2 == 0) return tmp * tmp;
  else return x * tmp * tmp;
}

void solve(int a, int b) {
	if (a == 4) {
		if (b == 0) {
			cout << "0" << " 3" << "\n";
			cout << "1" << " 2" << "\n";
			return;
		} else if (b == 1) {
			cout << "0" << " 2" << "\n";
			cout << "1" << " 3" << "\n";
			return;
		} else if (b == 2) {
			cout << "0" << " 1" << "\n";
			cout << "2" << " 3" << "\n";
			return;
		} else {
			cout << "-1" << "\n";
			return;
		}
	} else { //not equal to 4
		if (b != pow(2, a) - 1) {

		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll t; cin >> t;
	while (t--) {
		int x, y; cin >> x >> y;
		solve(x, y);
	}
	return 0;
}