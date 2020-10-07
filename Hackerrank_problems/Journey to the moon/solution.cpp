#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

/* PROBLEM LOGIC
    1. If all astronauts belong to diffrent country then we have number of ways to choose
        as nC2 = (n(n-1))/2
    2. Now if x astronauts belong to same country we have to remove the number of pairs 
        formed by choosing astronauts from this set, thus we can update our answer by 
        removing (x(x-1))/2 from total pairs.
    We can do it for all sets where each set represent the number of astronauts belonging to
    same country.
    For finding astronauts belonging to same country we can find it using concept of connected
    components of graph as depicted below.
*/


// Function that returns number of nodes in the connected component having vertex u
ll DFS(ll u, bool* visited,vector<ll>* graph){
    visited[u]=true;
    // initialize number of nodes to 1
    ll cc = 1;
    for(auto i: graph[u])
        if(!visited[i])
            // recursively add the number of nodes in the component for each directly connected node
            cc += DFS(i,visited, graph);
    return cc;
}
int main(){
    fastio // for faster input/output

    ll n,e,u,v;
    cin>>n>>e;

    // initialize total number of pairs possible as nC2
    ll ans=n*(n-1)/2;
    vector<ll>* graph = new vector<ll>[n]();

    // Represent graph using an adjacency list
    for(ll i=0;i<e;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v); 
        graph[v].push_back(u);
    }
    // Visited array to mark nodes that are visited
    bool* visited = new bool[n]();

    for(ll i=0;i<n;i++){
        // for each non visited node call dfs to find the number of nodes in the component
        if(!visited[i]){
        ll x = DFS(i,visited,graph);
        // remove the number of pairs formed by considering astronauts from the current component
        ans=ans-(x*(x-1)/2);
        }
    }
    // finally print answer
    cout<<ans<<endl;
    return 0;
}