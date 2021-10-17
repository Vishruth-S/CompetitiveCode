#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,m,t;
    cin>>n>>k>>m>>t;

    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==0)
        {
            if(y<k)
            {
                k-=y;
                n-=y;
            }
            else
            {
                n=y;
            }
        }
        else
        {
            n++;
            if(y<=k)
            {
                k++;
            }
        }
        cout<<n<<" "<<k<<endl;
    }

    return 0;
}


