#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n-1; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	long long orgSum = (n*(n+1))/2;
	cout << orgSum-sum << endl;
	
	// your code goes here
	return 0;
}