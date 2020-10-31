/*Problem is to find the sum in range from [l,r](inclusive),now in Brute Force Time COmplexity will be O(N*Q),where N is the size of the array and Q is no. of the queries,this will give us TLE.So we will use here advanced data structure i.e. Segement tree here ,in segment tree for answering Queires we can do this in logN time.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//Build tree :- We are builindg here a Tree by using an array,we have taken an dp[] array,if dp[i] denotes parent node then dp[2*i] & dp[2*i+1] will give us its left and right child.For pictorial representation ( https://cp-algorithms.com/data_structures/segment_tree.html )
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
//Function to answer queries in logN time,what we are doing here is we are traversing the whole tree and we are going to it's their child then if current range in tree is exist inside the range [l,r],then we will add that value
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
     for(i=0;i<n;i++)cin>>a[i]; tl=0; tr=n-1; v=1; 
     memset(dp,0,sizeof(dp)); //initalizing dp array with 0
     build(a,tl,tr,dp,v);   // calling fucntion to build tree
     while(q--)
     {
        ll l,r; cin>>l>>r; tl=0; tr=n-1; v=1;
        cout<<sum(v,tl,tr,l-1,r-1,dp)<<"\n";  // answering the queries
     }
     return 0;
}
