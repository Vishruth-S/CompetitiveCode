#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string a[3];
    cin>>a[0]>>a[1]>>a[2];
 
    int s[10]={},m[10]={},p[10]={};
 
    for(int i=0;i<3;++i)
    {
        if(a[i][1]=='m')
        {
            m[a[i][0]-'0']++;
        }
        else if(a[i][1]=='s')
        {
            s[a[i][0]-'0']++;
        }
        else if(a[i][1]=='p')
        {
            p[a[i][0]-'0']++;
        }
    }
 
    int flag=0,count=2;
    for(int i=0;i<10;++i)
    {
        if(m[i]==3 || p[i]==3 || s[i]==3)
        {
            flag=1;
            count=0;
            break;
        }
        if(m[i]==2 || p[i]==2 || s[i]==2)
        {
            if(count>1)
            {
                count=1;
            }
        }
    }
    int max=0;
    if(flag==1) cout<<"0"<<endl;
    else
    {
        int count=0;
 
        max=0;
        for(int i=0;i<10;++i)
        {
            if(m[i]!=0)
            {
                count++;
                if(count>max) max=count;
            }
            else
            {
                if(i!=9 && m[i+1]!=0)
                {
                    if(count==1) max=2;
                }
                count=0;
            }
        }
        if(max==3)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int count=0;
            for(int i=0;i<10;++i)
            {
                if(p[i]!=0)
                {
                    count++;
                    if(count>max) max=count;
                }
                else
                {
                    if(i!=9 && p[i+1]!=0)
                    {
                        if(count==1) max=2;
                    }
                    count=0;
                }
            }
            if(max==3)
            {
                cout<<"0"<<endl;
            }
            else
            {
                int count=0;
                for(int i=0;i<10;++i)
                {
                    if(s[i]!=0)
                    {
                        count++;
                        if(count>max) max=count;
                    }
                    else
                    {
                        if(i!=9 && s[i+1]!=0)
                        {
                            if(count==1) max=2;
                        }
                        count=0;
                    }
                }
                if(max==3)
                {
                    cout<<"0"<<endl;
                }
            }
        }
 
    }
    if(max!=3 && count!=0)
    {
        max=3-max;
        int ans=min(max,count);
        cout<<ans<<endl;
    }
    return 0;
}