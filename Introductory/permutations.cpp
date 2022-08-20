#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n,i=0;
	cin >> n;
	// cout << n;
	if(n == 1) {
		cout << "1" << endl;
		return;
	}
	if(n==4) {
		cout << "3 1 4 2"; return;
	}
	if(n < 4) {
		cout << "NO SOLUTION" << endl;
		return;
	}
	for (i = 1; i <= n; i+=2) {
		cout << i << " ";
	}
	for (int j =2; j <= n; j+=2) {
		cout << j << " ";
	}
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