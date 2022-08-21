#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long y,x;
	cin >> y >> x;
	if(y>x) {
		if(y%2 == 0) {
			long long maxi = max(y,x);
			long long ans = (maxi*maxi)-min(y,x)+1;
			cout << ans << endl;
		} else {
			long long maxi = max(y,x);
			long long ans = ((maxi-1)*(maxi-1))+min(y,x);
			cout << ans << endl;
		}
	} else {
		if(x%2==0) {
			long long maxi = max(y,x);
			long long ans = ((maxi-1)*(maxi-1))+min(y,x);
			cout << ans << endl;
		} else {
			long long maxi = max(y,x);
			long long ans = (maxi*maxi)-min(y,x)+1;
			cout << ans << endl;
		}
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
	cin >> t;
	while(t--) {
		solve();
	}
	// your code goes here
	return 0;
}