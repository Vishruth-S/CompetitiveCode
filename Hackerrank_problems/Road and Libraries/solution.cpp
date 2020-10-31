#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

/*   PROBLEM LOGIC
    1. The main logic is to look in the problem statement is that if the cost of library
        is less than that of repairing a road, we can build library for each city as it
        will be more cost optimal so answer in that case is simply (number_of_cities*cost_of_library)
    
    2. However if the cost of repairing the road is less we try to find the number of cities
        in a connected component ( if all roads are repaired ). Supose cc are the number of cities
        in connected component one then we can add cost of one library and cost of repairing (cc-1)
        roads, since it will be the minimum number of roads required to connect each city in each
        component. Thus for each component add cost (l + (cc-1)*r) to total cost.
    
    Note: We can clearly show that adding a library instead of road will be less cost optimal since,
    we will be adding a library on the cost of disconnecting a city from the connected component. If
    the cost of building library is more, clearly we will be spending more amount.
*/



// Function that traverses a node via depth first traversal and returns the number of connected components
int dfs(vector<ll>* graph,bool* visited, ll i )
{
    visited[i] = true;
    int cc = 1; // initialize number of components to 1
    for(int j=0;j<graph[i].size();j++)
    {
        int x = graph[i][j];
        if(!visited[x])
        {
            cc += dfs(graph,visited,x); 
            // for each edge connected recursively call and add to the number of connected components
        }
    }
    return cc;
}

int main()
{
    fastio  //faster input and output
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        ll n,m,l,r;
        cin>>n>>m>>l>>r;
        // graph is represented using adjaceny list
        vector<ll>* graph= new vector<ll> [n]();
        ll u1,v1;
        for(ll j=0; j<m; j++)
        {
            cin>>u1>>v1;
            graph[u1-1].push_back(v1-1);
            graph[v1-1].push_back(u1-1);
        }
        // Case1 - Cost of library is less than cost of  repairing the road
        if(l<=r)
        {
            ll ans = n*l;
            cout<<ans<<endl;
            continue;
        }
        // Case2 - Cost of library is greater than cost of  repairing the road
        // visited array to mark the visited nodes during traversal
        bool* visited = new bool[n]();
        ll ans = 0;
        for(ll i=0;i<n;i++)
        {
            // call dfs for each unvisted node
            if(!visited[i]){
                // total cost = summation of (l + (cc-1)*r) for each component.
                ans += l;
                ans += (dfs(graph,visited,i)-1)*r;  
            }
        }
        cout<<ans<<endl;
    }
}