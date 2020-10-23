#include <bits/stdc++.h>
using namespace std;
#define int long long

/*
        Lets say the sum from index 0 to a Sum1, and from index 0 to b is Sum2 and (a > b), 
        and the target value is x(say), then on reaching index a, the sum till now is Sum1,
        then we are now looking for all the sums till now whose value is x - Sum1.

        So to keep track of the sum from 0 index to all the indexes, we use map.

        So for every index, we look for the sum = (current_sum - x) in the map.

        TimeComplexity : (O(NlogN))
        Space Complexity : (O(N))
*/

signed main() {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++)
                cin >> a[i];
        map<int, int> m; // map will keep track for the sum from the first index to 
        m[0] = 1;
        int ans = 0;
        int curr = 0;
        for(int i = 0; i < n; i++) {
                curr += a[i];
                int req = curr - x;
                if(m.count(req)) {
                        ans += m[req];
                }
                m[curr]++;
        }
        cout << ans <<"\n";
        return 0;
}
