#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//build tree 
void build(ll a[],ll tl,ll tr,ll dp[],ll v)
{
    if(tl==tr)dp[v]=a[tl];
    else{
        ll tm=(tl+tr)/2;
        build(a,tl,tm,dp,2*v);
        build(a,tm+1,tr,dp,2*v+1);
        dp[v]=dp[2*v]+dp[2*v+1];
    }
} 
//find range in given range l to r
ll sum(ll v,ll tl,ll tr,ll l,ll r,ll dp[])
{
    if(l>r)return 0;
    if(tl==l&&tr==r)return dp[v];
    ll tm=(tl+tr)/2;
    return sum(v*2,tl,tm,l,min(r,tm),dp)+sum(v*2+1,tm+1,tr,max(l,tm+1),r,dp);
} 
int main()
{   
     ll n,q; cin>>n>>q; ll a[n+10],i,dp[4*n+10],tl,tr,v;
     for(i=0;i<n;i++)cin>>a[i]; tl=0; tr=n-1; v=1; memset(dp,0,sizeof(dp));
     build(a,tl,tr,dp,v);
     while(q--)
     {
        ll l,r; cin>>l>>r; tl=0; tr=n-1; v=1;
        cout<<sum(v,tl,tr,l-1,r-1,dp)<<"\n";
     }
     return 0;
}