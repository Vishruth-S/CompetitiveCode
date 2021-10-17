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
        ll n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        
        string s;
        cin>>s;
        
        ll x=0,y=0;
        for(int i=0;i<n;++i){
            if(s[i]=='0') x++;
            else y++;
        }
        
        ll ans=min({x*c0 + y*c1 , x*h + (x+y)*c1 , y*h + (x+y)*c0});
        cout<<ans<<endl;
    }
	return 0;
}
