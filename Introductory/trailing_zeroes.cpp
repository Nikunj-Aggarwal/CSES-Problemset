#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

void solve() {
	long long n;
	cin >> n;
	long long ans = 0;
	long long x=5;
	while (x <= n) {
		ans += n/x;
		x*=5;
	}
	cout << ans << endl;
}

int main() {
	int t = 1;
	// cin >> t;
	while(t--) {
		solve();
	}
	// your code goes here
	return 0;
}