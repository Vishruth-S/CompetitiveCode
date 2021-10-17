#include<iostream>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t=1;
    while(t--)
    {
        ll n,l,a,ans=0;
        cin>>n>>l>>a;

        if(n==0)
        {
            ll ans=(l/a);
            cout<<ans<<endl;
            return 0;
        }

        ll s[n],d[n];
        for(int i=0;i<n;++i)
        {
            cin>>s[i]>>d[i];
        }
        ll diff=s[0];
        ans+=(diff/a);
        for(int i=1;i<n;++i)
        {
            ll diff=s[i]-(s[i-1]+d[i-1]);
            ans+=(diff/a);
        }
        ll diff=l-(s[n-1]+d[n-1]);
        ans+=(diff/a);
        cout<<ans<<endl;
    }

	return 0;
}
