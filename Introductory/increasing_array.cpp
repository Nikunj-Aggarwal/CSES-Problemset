#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	long long a[n];
	long long maxi = 0, count = 0;
	for (int  i =0 ; i < n; i++) {
		cin >> a[i];
		maxi = max(maxi,a[i]);
		count += maxi-a[i];
	}
	cout << count << endl;
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