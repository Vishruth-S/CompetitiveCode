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
        ll x,y;
        cin>>x>>y;
        
        ll mini = min(x,y);
        ll ans = 2*mini;
        x -= mini;
        y -= mini;
        
        if(x==0 && y==0){
            cout<<ans<<endl;
        }
        else{
            ans += 2*x + 2*y-1;
            cout<<ans<<endl;
        }
    }

	return 0;
}
