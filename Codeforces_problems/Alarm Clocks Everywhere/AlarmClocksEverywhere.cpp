#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    ll gcd=0;
    for(int i=0;i<n-1;++i)
    {
        gcd=__gcd(gcd,a[i+1]-a[i]);
    }
    for(int i=0;i<m;++i)
    {
        cin>>b[i];
    }
    ll flag=0;

    for(int i=0;i<m;++i)
    {
        if(gcd%b[i]==0)
        {
            cout<<"YES"<<endl<<a[0]<<" "<<i+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
}
