//~Created by Shruti

/*We can visualise the data set as an undirected graph where 
a vertex would correspond to a person and edges would correspond 
to dancing couples. "Big P" in our scenario occupies vertex 0 which 
our source vertex.Use priority queue and push source vertex with luck 0. 
Now, pop from the priority queue and traverse its adjacents
- if adjacent vertex is not visited increase its luck by 1 and push else continue.
When the priority queue becomes empty we will get the luckiness 
of all the vertices*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fi first
#define se second
vector<ll> adj[1001];
int vis[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	int u,v;
	for(int i=0;i<n;i++)
	{
		adj[i].clear();
		vis[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
    int ht[n];
    memset(ht,INT_MAX,sizeof(ht));
    ht[0] = 0;
 
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    pq.push({0,0});
    pair<int,int> tmp;
    int x,y;
    int visit[n];
    memset(visit,0,sizeof(visit));
    while(!pq.empty())
    {
       tmp=pq.top();pq.pop();
       x=tmp.first;
       y=tmp.second;
       if(visit[y])continue;
       visit[y]=1;
       ht[y]=x;
       for(auto i:adj[y])
       {
       	 if(!visit[i])
       	 {
            pq.push({ht[y]+1,i});
       	 }
       }
 
    }
    for(int i=1;i<n;i++)
    {
        if(!visit[i])
        ht[i]=-1;
    }
	for(int i=1;i<n;i++)
		cout<<ht[i]<<"\n";
}
