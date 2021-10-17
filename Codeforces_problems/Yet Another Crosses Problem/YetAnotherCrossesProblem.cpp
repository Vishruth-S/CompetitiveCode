#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        char a[n][m];
        int r[n]={},c[m]={};
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                {
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int rmax=*max_element(r,r+n);
        int cmax=*max_element(c,c+m);

        int ans=1000000000;
        for(int i=0;i<n;++i)
        {
            if(r[i]!=rmax) continue;
            for(int j=0;j<m;++j)
            {
                if(c[j]==cmax)
                {
                    if(a[i][j]=='.')
                    {
                        int temp=n-rmax+m-cmax-1;
                        if(ans>temp) ans=temp;
                    }
                    else
                    {
                        int temp=n-rmax+m-cmax;
                        if(ans>temp) ans=temp;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
