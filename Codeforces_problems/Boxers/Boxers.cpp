#include <iostream>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    long long a[150002]{};
    for(int i=0;i<n;++i)
    {
        long long x;
        cin>>x;
        a[x]++;
    }

    for(int i=150000;i>=1;--i)
    {
        if(a[i]==0) continue;
        if(i==1)
        {
            if(a[1]>1 && a[2]==0)
            {
                a[1]--;
                a[2]++;
            }
        }
        if(a[i]==1 && a[i+1]==0)
        {
            a[i]--;
            a[i+1]++;
        }
        else if(a[i]==2)
        {
            if(a[i+1]==0)
            {
                a[i]--;
                a[i-1]++;
            }
            else if(a[i-1]==0 || a[i-1]==1)
            {
                a[i]--;
                a[i-1]++;
            }
        }
        else if(a[i]>=3)
        {
            if(a[i+1]==0)
            {
                a[i]--;
                a[i+1]++;
            }
            if(a[i-1]==0 || a[i-1]==1)
            {
                a[i]--;
                a[i-1]++;
            }
        }
    }
    long long sum=0;
    for(int i=1;i<150002;++i)
    {
        if(a[i]>0)
        {
            sum++;
        }
    }
    cout<<sum<<endl;


    return 0;
}
