#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    ll index=-1,min=1000000000;
    for(int i=0;i<n;++i)
    {
        if(a[i]>=0) a[i]=-a[i]-1;
        if(a[i]<min)
        {
            min=a[i];
            index=i;
        }
    }
    if(n%2!=0) a[index]=-a[index]-1;
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
