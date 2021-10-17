#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long r;
    cin>>r;

    long long flag=0;
    for(long long i=1;i*i+i+1<r;++i)
    {
        long long num=i*i+i+1;
        if((r-num)%(2*i)==0)
        {
            flag=1;
            cout<<i<<" "<<(r-num)/(2*i)<<endl;
            break;
        }
    }
    if(flag==0) cout<<"NO"<<endl;

    return 0;
}
