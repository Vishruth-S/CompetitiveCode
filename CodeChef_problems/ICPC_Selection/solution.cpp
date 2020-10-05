/*MY COMPETITIVE CODING TEMPLATE*/
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
            cin>>h>>c;  
            vt.pb({h,c});  //making pair of team-name and institute-name
            
            v[mp1[c]].pb(i); mp1[c]++; 
            /*mp1 is used to store total no. of team particiated from a single college.
            Since rankings are given in order so we store position of each team 
            and v[mp1[c]] is represent the mp1[c] member of any institute.
            So team selected from first stages will be in same index so it will also
            arrange ranking ordre.*/
        }
        for(i=0;i<k;i++) // Since from each institue total 'k' no. of teams possible 
        {
            for(auto j: v[i])
            {
                v1.pb(j);cnt++; 
                if(cnt==m) break; //if 'm' team selected break
            }
            if(cnt==m) break;  //if 'm' team selected break
        }
        // total 'm' teams will be selected for onsite round so checking it with if-else
        if(cnt==m)
        {
            sort(v1.begin(),v1.end()); 
            //team names printed in ascending order of ranking so sort them
            for(auto i: v1)
            cout<<vt[i].F<<lc;
            cout<<lc;
        }
        else cout<<"Impossible"<<lc<<lc;
    }
    return 0;
}