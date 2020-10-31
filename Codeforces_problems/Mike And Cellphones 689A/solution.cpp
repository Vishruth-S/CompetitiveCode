#include <bits/stdc++.h>
using namespace std;

#define tc(t) int t; cin >> t; while(t--)
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);


/*
Problem Name - Mike and Cellphone
Problem Code - 869A

Input is a string that Mike will enter in his 9 key keyboard. 
We need to find if the pattern can be repeated more than once.
If it can be output YES else output NO

Approach -
 - We check the max displacement in the horizontal direction and same in vertical direction.
 - If the max displacement in vertical direction is 4 then the answer is YES
 - if the max displacement in vertical is less than equal to 3 and 
    the string doesnt have either '0' and '8' but has '7' or '9' then output YES
 - Else output NO

 Time complexity - O(n) where n is the length of the input string.
*/
int getlvl(char c) {
	if (c == '1' || c == '4' || c == '7') return 1;
	if (c == '2' || c == '5' || c == '8' || c == '0') return 2;
	else return 3;
}

int getht(char c) {
	if (c == '1' || c == '2' || c == '3') return 1;
	if (c == '4' || c == '5' || c == '6') return 2;
	if (c == '0') return 4;
	else return 3;
}

bool is_present(string s, char c)  {
	for (auto x : s) {
		if (x == c) return 1;
	}
	return 0;
}

bool is_notpresent(string s, char c) {
	for (auto x : s) {
		if (x == c) return 0;
	}
	return 1;
}

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;
	int L = -1, R = -1;
	for (auto x : s) {
		int lvl = getlvl(x);
		if (L != -1) {
			if (lvl <= L) L = lvl;
			else if (R < lvl) R = lvl;
		}
		else L = R = lvl;
	}

	int max_x = abs(R - L);
	int T = -1, B = -1;
	for (auto x : s) {
		int ht = getht(x);
		if (T != -1) {
			if (ht <= T) T = ht;
			else if (B < ht) B = ht;
		}
		else T = B = ht;
	}
	int max_y = abs(T - B);
	bool present = 0;
	if (max_y == 2 && is_present(s, '0') || max_y == 2 && is_present(s, '8') && is_notpresent(s, '9') && is_notpresent(s, '7')) present = 1;

	if (max_x == 2 && max_y >= 2 && !present || max_y == 3) cout << "YES\n";
	else cout << "NO\n";

}

int32_t main() {
	_

#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
#endif

	// tc(t)
	solve();
	// cerr << "[ Time : " << (float)clock() / CLOCKS_PER_SEC << " secs ]" << endl;
}