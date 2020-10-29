/* gbrls (gas6) - UFPE, 21/10/2020 */
#include <bits/stdc++.h>

#define ll long long int
#define ii pair<int,int>

using namespace std;
using namespace __gnu_pbds;

const int N = 72;
const int inf = 0x3f3f3f3f;
int mat[N][N];
int n,m,k;
int M;
int T;

int dp[N][N][N][N];

// this is a classic dp problem, very similar to the knapsack problem.
// the DP's state will be the current column, row, how many numbers we picked
// in the current row and the mod of the current sum.
int solve(int a, int b, int left, int mod) {
    // if we have already visited the current state we just return it's value.
    if(dp[a][b][left][mod]!=-1) return dp[a][b][left][mod];
    
    // we have three transitions:
    // we can pick an element, not pick an element,
    // and transition from one row to the next
    int ans;
    if(a == n) { 
        // the answer will be mod 0.
        if(mod == 0) return 0;
        // we don't want the other mods.
        else return -inf;
    }
    // transision from one row to the next
    else if(b == m) ans = solve(a+1,0,T,mod);
    // don't pick the current element and move to the next column
    else if(left == 0) ans = solve(a,b+1,left,mod);
    else {
        // pick the current element
        int x = mat[a][b] + solve(a,b+1,left-1,(mod+mat[a][b])%k);
        // don't pick the current element and move to the next column
        int y = solve(a,b+1,left,mod);
        
        // store and return the maximum, because we want to maximize.
        return dp[a][b][left][mod] = max(x,y);
    }

    // storing the current state's value.
    return dp[a][b][left][mod] = ans;
}

int main() {
    scanf("%d%d%d",&n,&m,&k);

    T = (m>>1);

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    // -1 in the array means that we haven't visited that state
    memset(dp, -1, sizeof(dp));

    int ans = solve(0,0,T,0);

    printf("%d\n",ans);

    return 0;
}
