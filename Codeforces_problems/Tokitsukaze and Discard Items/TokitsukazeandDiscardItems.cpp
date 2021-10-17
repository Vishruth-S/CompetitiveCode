#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m,k;
    cin>>n>>m>>k;
    long long a[m];
    for(int i=0;i<m;++i)
    {
        cin>>a[i];
    }
    long long count=0,numdel=0;
    for(int i=0;i<m;++i)
    {
        long long page=(a[i]-numdel-1)/k;
        long long x=0;
        while(((a[i]-numdel-1)/k)==page)
        {
            i++;
            x++;
        }
        numdel+=x;
        count++;
        i--;
    }
    cout<<count<<endl;
    return 0;
}

