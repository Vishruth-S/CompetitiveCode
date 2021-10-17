#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    long long ans=0,mul=1,ind=n/2;
    for(int i=ind+1;i<n;++i)
    {
        if(mul*(a[i]-a[ind]-ans)<=k)
        {
            k-=(mul*(a[i]-a[ind]-ans));
            ans=a[i]-a[ind];
            mul++;
        }
        else
        {
            ans+=(k)/(i-ind);
            k=0;
            break;
        }
    }

    if(k>0)
    {
        ans+=(k)/(n-ind);
    }
    ans+=a[ind];
    cout<<ans<<endl;
    return 0;
}
