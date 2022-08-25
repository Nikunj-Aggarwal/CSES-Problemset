#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

void solve() {
	long long a,b;
	cin >> a >> b;

	if(a==0 && b == 0) {
		cout << "YES" << endl; return;
	}
	if(a==0 || b == 0) {
		cout << "NO" << endl; return;
	}
	if(((a+b)%3 == 0) && a >= b && a <= 2*b) {
		cout << "YES" << endl; return;
	} else if (((a+b)%3 == 0) && b > a && b <= 2*a) {
		cout << "YES" << endl; return;
	} else {
		cout << "NO" << endl; return;
	}
}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	// your code goes here
	return 0;
}