#include <bits/stdc++.h>
using namespace std;
#define int long long

/*
        The question is simple, we need to find the number of all possible binary string of length n,
        So for each position we have two options, either it is 1 or it is 0, so the answer will be ((2 ^ n) % mod).
*/

signed main() {
        int n;
        cin >> n;
        const int mod = 1e9 + 7;
        int ans = 1;
        for(int i = 0; i < n; i++) {
                ans *= 2;
                ans %= mod;
        }
        cout << ans <<"\n";
        return 0;
}
