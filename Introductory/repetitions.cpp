#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	int c = 1, ans = 1;
	for (int  i = 1; i < n; i++) {
		if (s[i-1] == s[i]) {
			c++;
		} else {
			c = 1;
		}
		ans = max(c,ans);
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