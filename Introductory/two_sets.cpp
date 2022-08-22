#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long int n;
	cin >> n;
    long long int total = n * (n + 1) / 2;
    if (total & 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<long long int> arr1, arr2;
        total /= 2LL;
        while (n)
        {
            if (total - n >= 0)
            {
                arr1.push_back(n);
                total -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (long int ele : arr1)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (long int ele : arr2)
            cout << ele << " ";
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