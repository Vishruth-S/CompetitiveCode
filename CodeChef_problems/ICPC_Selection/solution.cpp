#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define bs binary_search
#define pb push_back
#define pp pair<ll,ll>
#define F first 
#define S second 
#define lc "\n"
ll power(ll x,ll y,ll p){ll res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;} 
ll MAX=1e18 , MIN=-1e18 , MOD=1000000007;
int main() 
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        ll n,m,k,i,cnt=0; cin>>n>>m>>k;
        string h,c; map<string,ll>mp1; vector<ll>v[n];
        vector<pair<string,string>>vt; vector<ll>v1;
        for(i=0;i<n;i++)
        {
            cin>>h>>c;  vt.pb({h,c});
            v[mp1[c]].pb(i); mp1[c]++;
        }
        for(i=0;i<k;i++)
        {
            for(auto j: v[i])
            {
                v1.pb(j);cnt++; 
                if(cnt==m) break;
            }
            if(cnt==m) break;
        }
        if(cnt==m)
        {
            sort(v1.begin(),v1.end());
            for(auto i: v1)
            cout<<vt[i].F<<lc;
            cout<<lc;
        }
        else cout<<"Impossible"<<lc<<lc;
    }
    return 0;
}