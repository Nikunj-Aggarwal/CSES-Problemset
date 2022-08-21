#include <bits/stdc++.h>
using namespace std;

void solve() {
	int k;
	cin >> k;
	for (int i= 1; i <= k; i++) {
		long long n = i*i;
		long long ans = (n*(n-1)/2) - 4*(i-2)*(i-1);
		cout << ans << endl;
	}	
}
// (1,1) (1,2) (1,3) (1,4) 
// 1 2 9 10
// (2,1) (2,2) (2,3) (2,4) 
// 4 3 8 11
// (3,1) (3,2) (3,3) (3,4) 
// 5 6 7 12
// (4,1) (4,2) (4,3) (4,4) 
// 16 15 14 13
int main() {
	int t = 1;
	// cin >> t;
	while(t--) {
		solve();
	}
	// your code goes here
	return 0;
}