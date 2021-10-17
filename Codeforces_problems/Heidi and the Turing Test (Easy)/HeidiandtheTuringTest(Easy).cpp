#include <iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int a[51][51]={};
    for(int i=0;i<4*n+1;++i)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    /*for(int i=0;i<51;++i)
    {
        for(int j=0;j<51;++j)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int x1=-1,x2=-1,y1=-1,y2=-1;

    for(int i=0;i<51;++i)
    {
        int count=0;
        for(int j=0;j<51;++j)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(count==n || count==n+1 || count==n+2)
        {
            if(y1==-1) y1=i;
            else y2=i;
        }
    }

    for(int i=0;i<51;++i)
    {
        int count=0;
        for(int j=0;j<51;++j)
        {
            if(a[j][i]==1)
            {
                count++;
            }
        }
        if(count==n || count==n+1 || count==n+2)
        {
            if(x1==-1) x1=i;
            else x2=i;
        }
    }

    //cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
    for(int i=0;i<51;++i)
    {
        int flag=0;
        for(int j=0;j<51;++j)
        {
            if(a[i][j]==1)
            {
                if(((j==x1 || j==x2)&&(i>=y1 && i<=y2))||((i==y1 || i==y2)&&(j>=x1 && j<=x2)))
                {
                    continue;
                }
                else
                {
                    cout<<i<<" "<<j<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) break;
    }

    return 0;
}


