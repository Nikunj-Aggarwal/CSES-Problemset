#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

void solve() {
	int n;
	cin >> n;
	long long ans = 1;
	while(n--) {
		ans = (ans*2)%mod;
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