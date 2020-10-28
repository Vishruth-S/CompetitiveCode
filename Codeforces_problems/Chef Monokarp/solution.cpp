/* gbrls/gas6 @ UFPE - 11:55 27/27/2020 */

#include <bits/stdc++.h>
 
#define ll long long int
#define ii pair<int,int>
 
using namespace std;
 
const int inf = 0x3f3f3f3f;

const int N = 210;
int used[2*N] = {0};
int arr[N];

int n;

int dp[2*N][2*N];

/* We could test every single permutation and then try to minimize it, but that
 * would cost N!, and 200! it is way too much. First thing you need to realize
 * is that the only permutation you need to test is the sorted array. Then, the
 * only thing left to do is to try to minize it, we do it in a complete search
 * manner, but storing some states, to avoid recomputation.
 */

int solve(int idx, int pos) {
    // base case, return 0
    if(idx == n) return 0;
    int ans = inf;

    if(dp[idx][pos]!=-1) return dp[idx][pos];

    // for every available posistion we place the current number in it and we
    // transition to the next state
    for(int i=pos;i<=2*n;i++) {
        // cost
        int c = abs(arr[idx]-(i+1));
        // add the cost and update the next free position, as the array is
        // sorted, we only need to check positions starting from the next smaller not
        // taken.
        int a = c + solve(idx+1, i+1);

        ans = min(a,ans);
        // if the cost is zero, it is optimal, so we don't need to test any
        // further.
        if(c == 0) break;
    }

    return dp[idx][pos] = ans;
}
 
int main() {
    int q; scanf("%d",&q);
    while(q--) {
        memset(dp, -1, sizeof(dp));
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);

        // the only permutation that we care
        sort(arr, arr+n);
        int ans = solve(0,0);
        printf("%d\n",ans);
    }
    return 0;
}
