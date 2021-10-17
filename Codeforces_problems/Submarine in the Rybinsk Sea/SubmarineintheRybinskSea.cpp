#include <iostream>
#include<algorithm>
using namespace std;
#define mod 998244353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //int t;
    //cin>>t;
    //while(t--)
    //{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int length=0,temp=a[0];
    while(temp>0)
    {
        length++;
        temp/=10;
    }
    long long multi=11;
    long long ans=0;
    for(int i=0;i<length;++i)
    {
        long long sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=a[j]%10;
            a[j]/=10;
        }
        ans+=((((n%mod)*(sum%mod))%mod)*(multi%mod))%mod;
        multi=((multi%mod)*(100))%mod;
        ans%=mod;
    }
    cout<<ans<<endl;
    //}
    return 0;
}
