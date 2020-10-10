/*
@author- yashsoni501

It is easy to see that only the x coordinates of the points matter
as they will be falling vertically on the platform. The logic used 
behind this solution is as follows. We can see that there is no point 
in keeping the platforms in such a way that they overlap with one another
because if they do, then there can be no benefit as any point can be
saved if it falls on any one platform. Also, the location of both 
the platforms should be such that one point should fall on the start of 
the rod. This will ensure that the other end reaches as far as possible 
at the other end.

To solve this, we first create a vector of x coordinates and sort them
in increasing order. These coordinates will serve as the starting points
of our platforms. Since we know the length of the platform, we also 
precompute the maximum number of points that can be captured if the rod 
is placed after index i. This is done by calculating the number of points
that can be captured by placing the rod at x[i]th position, and then taking
max from the end.

Now we iterate over the x coordinates of the points and at each step we 
assume this to be the starting point of our platform. We find the number 
of points that can be captured by the second rod using the precomputed
array in such a manner that the start point of second rod is after the
end point of the first rod in order to avoid double counting of any point.
The answer is max of the number of points captured we get for each starting
location of the first rod.
*/

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define pu push
#define pp pop_back
#define in insert
#define MOD 1000000007
#define endl "\n"
#define sz(a) (int)((a).size())
#define all(x) (x).begin(), (x).end()
#define trace(x) cerr << #x << ": " << x << " " << endl;
#define prv(a) for(auto xsdf : a) cout << xsdf << ' ';cout << '\n';
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define OTP(s) cout<<s<<endl;
#define FOR(i,j,k,l) for(int i=j;i<k;i+=l)
#define REP(i,j) FOR(i,0,j,1)
inline ll add(ll a, ll b){a += b; if(a >= MOD)a -= MOD; return a;}
inline ll sub(ll a, ll b){a -= b; if(a < 0)a += MOD; return a;}
inline ll mul(ll a, ll b){return (ll)((ll) a * b %MOD);}
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;

ll min(ll a,ll b)
{
    return a>b?b:a;
}
ll max(ll a,ll b)
{
    return a>b?a:b;
}

ll t,n,k,xi,yi;
vl x;
ll mar[300000];
int main()
{
    IOS
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x.clear();
        REP(i,n)
        {
            cin>>xi;
            x.pb(xi);
        }
        REP(i,n)    cin>>yi;
        sort(all(x));
        ll ans=0;
        mar[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            mar[i] = max(mar[i+1],upper_bound(all(x), x[i]+k)-(x.begin()+i));
        }

        REP(i,n)
        {
            ll ind = upper_bound(all(x),x[i]+k)-x.begin();
            if(ind==n)
            {
                ans = max(ans, ind-i);
            }
            else
            ans = max(ans, ind-i+mar[ind]);
        }
        cout<<ans<<endl;
    }
}   
