// This question is greedy problem.

// variable are t-eliminated rivals s-is the remaining opponent. 

// First of all we have to think how t/s becomes more rewarding.
// so the optimal solution is to eliminate one at a time.
// so t becomes 1


#include <bits/stdc++.h>
using namespace std;

void Solve(int n) {
	double ans = 0;
	for (int i=1; i<=n; i++) ans += 1.0 / i;
	cout << fixed << setprecision(12) << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	int n;
	cin>>n;
	Solve(n);
	return 0;
}
