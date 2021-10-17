#include<iostream>
#include<algorithm>
#include<vector>
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
        ll a,b,c;
        cin>>a>>b>>c;
        
        ll ans=0;
        ll n=min(a,min(b,c));
        
        ans+=n;
        a-=n;
        b-=n;
        c-=n;
        
        if(a==0 || b==0) cout<<ans<<endl;
        else
        {
            n=min(a,b);
            ll tot_rem=a+b;
            ll teams=tot_rem/3;
            
            ans+=min(teams,n);
            cout<<ans<<endl;
        }
        
    }
    
	return 0;
}