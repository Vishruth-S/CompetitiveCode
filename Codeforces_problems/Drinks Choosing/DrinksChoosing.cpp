#include <iostream>
#include<algorithm>
#include<map>
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
    long long a;
    map<long long,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        m[a]++;
    }
    long long pair,ans=0;
    if(n%2==0)
    {
        pair=n/2;
    }
    else
    {
        pair=(n+1)/2;
    }

    for(auto itr=m.begin();itr!=m.end();++itr)
    {
        ans+=itr->second/2;
    }
    cout<<ans+pair<<endl;
    //}
    return 0;
}
