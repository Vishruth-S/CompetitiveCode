#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //int t;
    //cin>>t;
    //while(t--)
    //{
    long long n,k;
    cin>>n>>k;
    
    long long ans=0,i=1,temp=n;
    while(temp>0)
    {
        ans+=i;
        i++;
        temp--;
        //cout<<ans<<" "<<k<<" "<<i<<endl;
        if(ans>=k && ans-temp==k)
        {
            cout<<temp<<endl;
            break;
        }
    }
    //}
    return 0;
}
