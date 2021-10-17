#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[4*n];
        for(int i=0;i<4*n;++i)
        {
            cin>>a[i];
        }
        sort(a,a+4*n);
        long long area=a[0]*a[4*n-1],flag=1;
        for(int i=0;i<n;++i)
        {
            if(a[2*i]==a[2*i+1] && a[4*n-2*i-1]==a[4*n-2*i-2] && area==a[2*i]*a[4*n-2*i-1])
            {
                continue;
            }else
            {
                flag=0;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
