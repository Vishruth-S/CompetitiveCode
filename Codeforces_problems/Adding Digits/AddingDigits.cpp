#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll mod(string s,int j,ll b)
{
    ll res=0;
    s+=char(j+48);
    for(int i=0;i<s.length();++i)
    {
        res=(10*res + (int)s[i]-'0')%b;
    }
    if(res==0)
    {
        return 1;
    }
    else return 0;
}
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,n;
    cin>>a>>b>>n;

    ll temp=a;
    string s;
    while(temp>0)
    {
        s+=char(temp%10+48);
        temp/=10;
    }
    //cout<<s<<endl;
    for(int i=0;i<s.length()/2;++i)
    {
        swap(s[i],s[s.length()-1-i]);
    }
    for(int i=0;i<n;++i)
    {
        int flag=0;
        for(int j=0;j<=9;++j)
        {
            if(mod(s,j,b))
            {
                flag=1;
                s+=char(j+48);
                if(j==0)
                {
                    flag=2;
                }
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
            return 0;
        }
        else if(flag==2)
        {
            for(int j=i+1;j<n;++j)
            {
                s+='0';
            }
            break;
        }
    }
    cout<<s<<endl;
	return 0;
}
