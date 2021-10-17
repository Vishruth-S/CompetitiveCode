#include <iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    
    ll ans=1;
    for(int i=1;i<=n+k;++i)
    {
        ans*=2;
        ans%=998244353;
    }
    cout<<ans<<endl;

    return 0;
}
