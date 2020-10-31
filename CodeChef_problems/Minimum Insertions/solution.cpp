// If the gcd of all the adjacent elements including the first and last is greater than 11 then the answer can be found easily and it is fixed for any N.
// In other cases, let’s divide the array into a minimum number of subarrays such that the GCD of any adjacent pair in those subarrays should be greater than 11.
// Now, for each subarray, we just need to check for each value of KK, how many numbers need to be inserted.
// We can optimize it to check only KK values which are less than the size of that subarray.

#include <bits/stdc++.h>

using namespace std;

int ans[200010];

int32_t main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int prev = 1;
		vector <int> v;
		vector <int> v1;

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;

			v1.push_back(x);

			if (__gcd(prev, x) > 1) {
				int top = v.back();
				v.pop_back();
				v.push_back(top + 1);
			} else {
				v.push_back(1);
			}

			prev = x;
		}

		if (__gcd(v1[0], v1.back()) > 1 && v.size() == 1) {
			for (int i = 2; i <= n; i++) {
				cout << n / (i - 1) + (n % (i - 1) != 0) << " ";
			}
			cout << endl;
			continue;
		}

		if (__gcd(v1[0], v1.back()) > 1) {
			v[0] += v.back();
			v.pop_back();
		}

		for (int i = 2; i <= n; i++) {
			ans[i] = 0;
		}

		for (int i : v) {
			for (int j = 2; j <= i; j++) {
				ans[j] += (i - 1) / (j - 1);
			}
		}

		for (int i = 2; i <= n; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}


