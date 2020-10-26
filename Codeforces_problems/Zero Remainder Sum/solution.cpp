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

// this is a classic dp problem, very similar to the knapsack problem
int solve(int a, int b, int left, int mod) {
    if(dp[a][b][left][mod]!=-1) return dp[a][b][left][mod];

    int ans;
    if(a == n) { 
        if(mod == 0) return 0;
        else return -inf;
    }
    else if(b == m) ans = solve(a+1,0,T,mod);
    else if(left == 0) ans = solve(a,b+1,left,mod);
    else {
        int x = mat[a][b] + solve(a,b+1,left-1,(mod+mat[a][b])%k);
        int y = solve(a,b+1,left,mod);

        return dp[a][b][left][mod] = max(x,y);
    }

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

    memset(dp, -1, sizeof(dp));

    int ans = solve(0,0,T,0);

    printf("%d\n",ans);

    return 0;
}
