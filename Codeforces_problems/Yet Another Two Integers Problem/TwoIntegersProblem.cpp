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
        ll a,b;
        cin>>a>>b;
        
        ll diff = abs(a-b);
        
        ll ans = ceil(diff/10.0);
        cout<<ans<<endl;
    }
	return 0;
}
