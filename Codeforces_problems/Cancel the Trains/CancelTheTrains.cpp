#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
{
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        
        ll a,b;
        unordered_set<int> s;
        
        for(int i=0;i<n;++i){
            cin>>a;
            s.insert(a);
        }
        
        ll count=0;
        for(int i=0;i<m;++i){
            cin>>b;
            if(s.find(b)!=s.end()){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
