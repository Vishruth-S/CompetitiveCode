#include <bits/stdc++.h>
using namespace std;
#define ll long int

vector< ll > adj[100005];
ll lca[100005][20];//lca[i][j] means 2^j node from i
ll level[100005];
ll maxn;

void dfs(ll node, ll par){
    //here we are keeping track of parent instead of vis.
    //this dfs func. maintains parent of each node at ay a distance of 2^0=1
    lca[node][0]=par;
    if(node==1){
        level[node]=0;
    }
    for(auto child: adj[node]){
        if(child!=par){
            level[child]=level[node]+1;
            dfs(child,node);
        }
    }
}
void table(ll n){
    dfs(1,-1);
    for(ll j=1;j<=maxn;j++){//like dp filling the entire table 
        for(ll i=1;i<=n;i++){
            if(lca[i][j-1]!=-1){
                lca[i][j]=lca[lca[i][j-1]][j-1];//2^i= 2^i-1 + 2^i-1
            }
        }
    }
}
ll LCA(ll a, ll b){
    if(level[a]>level[b]){//coz we r always considering b as lower node
        ll temp=a;a=b;b=temp;
    }
    ll d=level[b]-level[a];
    while(d>0){
        ll j=log2(d);//for just smaller power of 2
        b=lca[b][j];//jumping to it
        d=d-(1<<j);//decrease by 2^i
    }
    if(a==b)
    return a;
    
    for(ll i=maxn;i>=0;i--){
        if(lca[a][i]!=-1 && (lca[a][i]!=lca[b][i])){
            a=lca[a][i],b=lca[b][i];//trying to reach one level below lca
        }
    }
    return lca[a][0];
}
int main()
{
    ll n,x,y,q;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    maxn=log2(n);
    table(n);
    cin>>q;//queries for lca
    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<LCA(a,b)<<endl;        
    }

    return 0;
}
