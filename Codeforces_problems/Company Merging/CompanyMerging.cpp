#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    map<ll,ll> m;
    ll maximum=0;
    while(n--)
    {
        ll k;
        cin>>k;
        ll max=0;
        for(int i=0;i<k;++i)
        {
            ll x;
            cin>>x;
            if(x>max) max=x;
        }
        if(maximum<max) maximum=max;
        m[max]+=k;
    }
    ll sum=0;
    for(auto itr=m.begin();itr!=m.end();++itr)
    {
        sum+=(maximum-itr->first)*(itr->second);
    }
    cout<<sum<<endl;
    
    
}
