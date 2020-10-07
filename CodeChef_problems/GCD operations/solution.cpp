
//It’s only possible if for all i,ai is divisible by bi,otherwise impossible.

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(int tc = 0) {
	ll n, x;
	cin >> n;
	
	bool pos = 1;
	for (ll i = 0; i < n; i++) {
		cin >> x;
		pos &= ((i + 1) % x == 0);
	}
	
	cout << (pos ? "YES\n" : "NO\n");
}
 
int main() {
	
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) solve(t);
}  