#include <iostream>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int m;
        cin>>m;
        int x[m],y[m],l[m],r[m],u[m],d[m];
        for(int i=0;i<m;++i)
        {
            cin>>x[i]>>y[i]>>l[i]>>u[i]>>r[i]>>d[i];
        }

        int flag=1;
        int yup=100000,ydown=-100000;
        for(int i=0;i<m;++i)
        {
            if(u[i]==0 && d[i]==0)
            {
                if(y[i]<=yup && y[i]>=ydown)
                {
                    yup=y[i];
                    ydown=y[i];
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            else if(u[i]==0 && d[i]==1)
            {
                if(y[i]>=ydown)
                {
                    if(yup>y[i]) yup=y[i];
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            else if(u[i]==1 && d[i]==0)
            {
                if(y[i]<=yup)
                {
                    if(ydown<y[i]) ydown=y[i];
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        int xleft=-100000,xright=100000;
        for(int i=0;i<m;++i)
        {
            if(l[i]==0 && r[i]==0)
            {
                if(x[i]<=xright && x[i]>=xleft)
                {
                    xright=x[i];
                    xleft=x[i];
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            else if(l[i]==0 && r[i]==1)
            {
                if(x[i]<=xright)
                {
                    if(xleft<x[i]) xleft=x[i];
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            else if(l[i]==1 && r[i]==0)
            {
                if(x[i]>=xleft)
                {
                    if(xright>x[i]) xright=x[i];
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        else
        {
            cout<<"1 "<<xright<<" "<<yup<<endl;
        }

    }
    return 0;
}


