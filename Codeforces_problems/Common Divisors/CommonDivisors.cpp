#include <iostream>
#include<algorithm>
using namespace std;

long long numDiv(long long ans)
{
    long long count=0;
    for(long long i=1;i*i<=ans;++i)
    {
        if(ans%i==0)
        {
            if((ans/i)!=i)
            {
                count+=2;
            }
            else
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    long long a;
    long long ans=0;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        ans=__gcd(ans,a);
    }
    cout<<numDiv(ans)<<endl;
    return 0;
}
