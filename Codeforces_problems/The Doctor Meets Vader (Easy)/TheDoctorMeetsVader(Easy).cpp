#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long s,b;
    cin>>s>>b;
    long long a[s];
    for(int i=0;i<s;++i)
    {
        cin>>a[i];
    }
    map<long long,long long> m;

    for(int i=0;i<b;++i)
    {
        long long d,g;
        cin>>d>>g;
        m[d]+=g;
    }

    long long sum=0;
    for(auto itr=m.begin();itr!=m.end();++itr)
    {
        sum+=itr->second;
        m[itr->first]=sum;
    }

    for(int i=0;i<s;++i)
    {
        if(m.find(a[i])==m.end())
        {
            //cout<<(m.lower_bound(a[i])--)<<" "<<m.lower_bound(a[i])<<endl;
           auto itr=(m.lower_bound(a[i]));
           if(itr==m.begin()) cout<<"0 ";
           else{
                itr--;
                cout<<itr->second<<" ";
           }
        }
        else
        {
            long long ans=(m.lower_bound(a[i]))->second;
            cout<<ans<<" ";
        }
    }


    return 0;
}
