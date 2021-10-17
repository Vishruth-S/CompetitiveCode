#include <iostream>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin>>m;

    while(m--)
    {
        int n;
        cin>>n;
        int a;
        set<int> s;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            m[a]++;
        }

        long long sum=0;
        for(auto itr=m.begin();itr!=m.end();++itr)
        {
            if(s.find(itr->second)==s.end())
            {
                s.insert(itr->second);
                sum+=itr->second;
            }
            else
            {
                itr->second--;
                if(itr->second>0)
                {
                    itr--;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

