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
        ll at,bt,x,y,nt;
        cin>>at>>bt>>x>>y>>nt;
        ll ans1 = 0, ans2 = 0;
        if(true){
            ll a=at,b=bt,n=nt;
            
            ll less = b-y;
            if(less<=n){
                b -= less;
                n -= less;
            }
            else {
                b -= n;
                n = 0;
            }
            less = a-x;
            if(less<=n){
                a -= less;
                n -= less;
            }
            else {
                a -= n;
                n = 0;
            }
            ans1 = a*b;
        }
        if(true){
            ll a=at,b=bt,n=nt;
            ll less = a-x;
            if(less<=n){
                a -= less;
                n -= less;
            }
            else {
                a -= n;
                n = 0;
            }
            less = b-y;
            if(less<=n){
                b -= less;
                n -= less;
            }
            else {
                b -= n;
                n = 0;
            }
            ans2 = a*b;
        }
        ll ans = min(ans1,ans2);
        cout<<ans<<endl;
    }
	return 0;
}
