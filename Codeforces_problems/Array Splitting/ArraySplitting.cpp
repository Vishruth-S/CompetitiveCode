#include <iostream>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*int m;
    cin>>m;

    while(m--)
    {*/
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            m[a[i+1]-a[i]]++;
        }
        long long num=k-1,sum=0;
        for(auto itr=m.rbegin();itr!=m.rend();++itr)
        {
            if(num-itr->second>=0)
            {
                sum+=(itr->first)*(itr->second);
                num-=itr->second;
            }
            else
            {
                sum+=(itr->first)*num;
                break;
            }
        }
        long long ans=a[n-1]-a[0]-sum;
        cout<<ans<<endl;
    //}
    return 0;
}

