/*The maximum number of rounds Alice can win is pretty easy to calculate greedily: min(a1,b2)+min(a2,b3)+min(a3,b1). What about the minimum number of rounds?

It can be shown that if we started using some combination we are better to end it before using the other one. There are six possible combinations to not win the round:

a1 and b1.
a2 and b2.
a3 and b3.
a1 and b3.
a2 and b1.
a3 and b2.
We can iterate over all permutations of these combinations (there are 6!=720 possible permutations) and greedily apply them. Use the first while it is possible, then the second, and so on, and find the best answer.

It is also possible that the order of these combinations does not matter, but we didn't prove that fact.

Time complexity: O(1).*/

#include <bits/stdc++.h>

#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define pb push_back
#define ft first
#define sc second

using namespace std;

int n;
vector<int> a, b;

inline void read() {
	cin >> n;
	a.resize(3);
	b.resize(3);
	for (int i = 0; i < 3; i++) cin >> a[i];
	for (int i = 0; i < 3; i++) cin >> b[i];
}
	
inline void solve() {
	int ans1 = INT_MAX;
	vector<pair<int, int> > ord;
	ord.pb({0, 0});
	ord.pb({0, 2});
	ord.pb({1, 1});
	ord.pb({1, 0});
	ord.pb({2, 2});
	ord.pb({2, 1});
	sort(all(ord));
	do {
		vector<int> a1 = a, b1 = b;
		for (int i = 0; i < sz(ord); i++) {
			int cnt = min(a1[ord[i].ft], b1[ord[i].sc]);
			a1[ord[i].ft] -= cnt;
			b1[ord[i].sc] -= cnt;			
		}
		int cur = min(a1[0], b1[1]) + min(a1[1], b1[2]) + min(a1[2], b1[0]);
		ans1 = min(ans1, cur);
	} while(next_permutation(all(ord)));
	int ans2 = min(a[0], b[1]) + min(a[1], b[2]) + min(a[2], b[0]);
	cout << ans1 << ' ' << ans2 << endl;
}

int main () {
    read();
    solve();
}
