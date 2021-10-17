#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll total_Occur=n/(10*m);
        ll total_remaining=(n%(10*m))/m;
        ll a[10];
        a[0]=m%10;
        ll sum=a[0];
        for(int i=1;i<10;++i)
        {
            a[i]=(a[0]*(i+1))%10;
            sum+=a[i];
        }
        ll ans=(sum)*total_Occur;
        for(int i=0;i<total_remaining;++i)
        {
            ans+=a[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}
