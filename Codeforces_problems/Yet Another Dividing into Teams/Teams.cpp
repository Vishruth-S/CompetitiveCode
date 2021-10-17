#include<iostream>
#include<algorithm>
#include<cmath>
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
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll ans=1;
        for(int i=0;i<n-1;++i)
        {
            if(a[i+1]-a[i]==1)
            {
                ans=2;
                break;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
