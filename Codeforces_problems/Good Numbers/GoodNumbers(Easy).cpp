#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;
#define mod 1000000007

ll func(ll* power,ll n,ll i)
{
    if(n<=0)
    {
        return n;
    }
    else if(i<0)
    {
        return -99999999999999999;
    }
    else
    {
        return max(func(power,n-power[i],i-1),func(power,n,i-1));
    }
}

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    
    ll power[39];
    power[0]=1;
    for(int i=1;i<39;++i)
    {
        power[i]=power[i-1]*3;
    }

    while(t--)
    {
        ll n;
        cin>>n;
        
        ll ans=func(power,n,38);
        cout<<n-ans<<endl;
    }
	return 0;
}
