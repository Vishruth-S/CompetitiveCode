// This question was a basic graph question. As one can see there can be maximum of 10^5 states so we can check all these states by applying a simple BFS.
// Since each time a new state is discovered we can mark it so that we do not visit it the next time .
// States here refer to a new key value obtained after the merging process.



#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define ordered_set tree < ll ,  null_type ,  less<ll> ,  rb_tree_tag ,  tree_order_statistics_node_update >
//added two more functions to set
//(1)*(set.find_by_order(k))[kth element in the sorted set] 
//(2)set.order_of_key(k)[count of elements strictly less than k]
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)//remember i is an iterator
#define present(c,x) ((c).find(x) != (c).end())//for sets,maps,multimaps
#define cpresent(c,x) (find(all(c),x) != (c).end())//for vectors
#define tc(t) int (t); cin>>(t);while((t)--)
#define ff first
#define ss second
#define mp make_pair
#define ld long double
#define ull unsigned long long int
#define mod 1000000007
#define mod1 100000
int n,k,a[2000],r;
bool visited[100005];
queue<int> q;
int d[100005];
void bfs(int x)
{
	q.push(x);
	visited[x]=true;
	d[x]=0;
	while(!q.empty())
	{
		int cur=q.front();
		q.pop();
		if(cur==k) 
		{
			return;
		}
		for (int i = 0; i < r; ++i)
		{
			int next=(1ll*a[i]*cur)%mod1;
			if(!visited[next])
			{
				q.push(next);
				visited[next]=true;
				d[next]=d[cur]+1;
			}
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);//this works only
    cin.tie(NULL);// when first all inputs are from user
    cout.tie(NULL);//you will see all outputs afterwards
 	cin>>n>>k;
 	memset(visited,false,sizeof(visited));
 	memset(d,-1,sizeof(d));
 	cin>>r;
 	for(int i=0;i<r;i++)
 	{
 		cin>>a[i];
 	}
 	bfs(n);
 	cout<<d[k];
    return 0;
}