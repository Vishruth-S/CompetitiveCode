#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin>>m;

    while(m--)
    {
        string s,t;
        cin>>s>>t;
        int j=0,flag=0;
        for(int i=0;i<s.length();++i)
        {
            char sc;
            if(s[i]!=t[j])
            {
                flag=1;
                break;
            }
            while(i<s.length() && j<t.length() && s[i]==t[j])
            {
                sc=s[i];
                i++;
                j++;
            }
            while(j<t.length() && t[j]==sc)
            {
                j++;
            }
            if(i==s.length())
            {
                if(j!=t.length())
                {
                    flag=1;
                }
            }
            else i--;

        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

