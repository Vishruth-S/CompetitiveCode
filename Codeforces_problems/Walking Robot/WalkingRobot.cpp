#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,b,a;
    cin>>n>>b>>a;
    ll arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    ll maxa=a,count=0;
    for(int i=0;i<n;++i)
    {
        if(arr[i]==1)
        {
            if(a==maxa) a--;
            else
            {
                if(b>0)
                {
                    b--;
                    a++;
                }
                else
                {
                    a--;
                }
            }
        }
        else
        {
            if(a>0) a--;
            else if(b>0) b--;
        }

        if(a==0 && b==0)
        {
            count=i+1;
            break;
        }
    }
    if(count==0) cout<<n<<endl;
    else cout<<count<<endl;
}
