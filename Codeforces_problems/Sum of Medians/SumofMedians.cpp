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
        ll n,k;
        cin>>n>>k;
        
        ll a[k*n];
        ll temp=n;
        
        if(n%2==1){
            temp-=1;
        }
        
        for(int i=0;i<k*n;++i){
            cin>>a[i];
        }
        
        ll dec = (temp-(temp/2)+1);
        ll lastInd=k*n-dec;
        ll ans = 0;
        
        for(int i=0;i<k;++i){
            ans += a[lastInd];
            lastInd -= dec;
        }
        cout<<ans<<endl;
    }
	return 0;
}
