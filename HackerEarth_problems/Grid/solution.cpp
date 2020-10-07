// This is a simple cakewalk problem that involves the direct use of Dijkstra Algorithm. 
// The problem is Single Source Shortest Path in a matrix. Apply Dijkstra algorithm with the given starting cell of the matrix.
//  Then you will have the result to any query stored in an array.

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
string s[2000];
int matrix[2000][2000];
int d[2000][2000];
bool vis[2000][2000];
queue<ii> q;
void bfs(int x,int y)
{
	memset(vis,false,sizeof(vis));
	if(matrix[x][y]==0)
	q.push({x,y});
	vis[x][y]=true;
	d[x][y]=0;
	while(!q.empty())
	{
		int i=q.front().ff;
		int j=q.front().ss;
	//	cout<<i<<" "<<j<<" "<<d[i][j]<<endl;
		q.pop();
		if(matrix[i-1][j]==0 && !vis[i-1][j])
		{
			q.push({i-1,j});
			vis[i-1][j]=true;
			d[i-1][j]=d[i][j]+1;
		}
		if(matrix[i+1][j]==0 && !vis[i+1][j])
		{
			q.push({i+1,j});
			vis[i+1][j]=true;
			d[i+1][j]=d[i][j]+1;
		}
		if(matrix[i][j-1]==0 && !vis[i][j-1])
		{
			q.push({i,j-1});
			vis[i][j-1]=true;
			d[i][j-1]=d[i][j]+1;
		}
		if(matrix[i][j+1]==0 && !vis[i][j+1])
		{
			q.push({i,j+1});
			vis[i][j+1]=true;
			d[i][j+1]=d[i][j]+1;
		}
	}
}
int main()
{
	memset(d,-1,sizeof(d));
	int n,m,q;
	cin>>n>>m>>q;
	for (int i = 0; i <n ; ++i)
	{
		cin>>s[i];	
	}
	for (int i = 0; i <= (n+1); ++i)
	{
		for (int j = 0; j <= (m+1); ++j)
		{
			if( i==0 || j==0 || i==(n+1) || j==(m+1))
			{
				matrix[i][j]=1;
			}
			else
			{
				if(s[i-1][j-1]=='O')
				{
					matrix[i][j]=0;
				}
				else
				{
					matrix[i][j]=1;
				}
			}
		}
	}
	int x,y;
	cin>>x>>y;
	bfs(x,y);
	while(q--)
	{
		cin>>x>>y;
		cout<<d[x][y]<<endl;
	}
	return 0;
}