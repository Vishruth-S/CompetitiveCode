#include <iostream>
#include<algorithm>
#include<set>
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
    long long a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    long long sum=0;
    multiset<long long> s;
    for(int i=0;i<n;++i)
    {
        sum+=a[i];
        if(sum<=k)
        {
            cout<<"0 ";
        }
        else
        {
            long long count=0,temp=0;
            for(auto itr=s.rbegin();itr!=s.rend();++itr)
            {
                temp+=(*itr);
                //cout<<*itr<<"->"<<sum-temp<<endl;
                count++;
                if(sum-temp<=k)
                {
                    cout<<count<<" ";
                    break;
                }
            }
        }
        s.insert(a[i]);
    }
    cout<<endl;

    //}
    return 0;
}
