// Segment Tree

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007
#define N 100005

ll gcd(ll aa,ll bb){ if(aa==0) return bb; return(bb%aa,aa); }

int a[N],tree[5*N];

void build(int n, int s, int e)
{
    if(s==e)
    {
        tree[n]=a[s];
        return ;
    }
    int m = (s+e)/2;
    build(n*2,s,m);
    build(n*2+1,m+1,e);
    tree[n]=tree[n*2]+tree[n*2+1];
}

void update(int n,int s,int e,int ind,int val)
{
    if(s==e)
    {
        tree[n]=val;
        return ;
    }
    int m=(s+e)/2;
    if(s<=ind && ind<=m)
    {
        update(2*n,s,m,ind,val);
    }
    else
    {
        update(2*n+1,m+1,e,ind,val);
    }
    tree[n]=max(tree[2*n],tree[2*n+1]);
}

int query(int n ,int s,int e,int l,int r)
{
    if(l>e || r<s)
        return 0;
    if(l<=s && e<=r)
    {
        return tree[n];
    }
    int m=(s+e)/2;
    int q1=query(2*n,s,m,l,r);
    int q2=query(2*n+1,m+1,e,l,r);
    return max(q1,q2);
}


int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    int l,r;
    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        ll x=query(1,1,n,1,a[i]-1);
        update(1,1,n,a[i],1+x);
        
        ans=max(ans,1+x);
    
    }
    cout<<ans<<endl;
    return 0;
}
