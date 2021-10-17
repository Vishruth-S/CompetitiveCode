#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    long long a,count2=0,count3=0;
    map<long long,long long> m;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        m[a]++;
        if(m[a]==3) count3++;
    }
    if(count3>0)
    {
        cout<<"cslnb"<<endl;
    }
    else
    {
        for(auto itr=m.begin();itr!=m.end();++itr)
        {
            if(itr->second>=2)
            {
                count2++;
            }
        }
        if(count2>=2)
        {
            cout<<"cslnb"<<endl;
        }
        else
        {
            long long flag=1,sum=0;
            auto prevItr=m.begin();
            for(auto itr=m.begin();itr!=m.end();++itr)
            {
                if(itr->second==2)
                {
                    if(itr!=m.begin())
                    {
                        if((itr->first-1)==prevItr->first)
                        {
                            flag=0;
                        }
                    }
                    else 
                    {
                        if(itr->first==0) flag=0;
                    }
                    break;
                }
                prevItr=itr;
            }
            for(auto itr=m.begin();itr!=m.end();++itr)
            {
                sum+=((itr->first)*(itr->second));
            }
            if(flag==0)
            {
                cout<<"cslnb"<<endl;
            }
            else
            {
                sum-=((n-1)*n)/2;
                if(sum%2==1)
                {
                    cout<<"sjfnb"<<endl;
                }
                else cout<<"cslnb"<<endl;
            }
        }
    }

    return 0;
}
