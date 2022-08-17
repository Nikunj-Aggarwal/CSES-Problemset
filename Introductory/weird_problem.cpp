#include <iostream>
using namespace std;

int main() {
// 	3 10 5 
// (3n+1)/2

// n/2
	long long n;
	cin >> n;
	cout << n << " ";
	while (n != 1) {
		if(n&1) {
			n = 3*n+1;
			cout << n << " ";
			// n = x;
		} else {
			cout << n/2 << " ";
			n = n/2;
		}
	}
	cout << endl;
	// your code goes here
	return 0;
}