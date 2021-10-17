#include<iostream>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        string s,c;
        cin>>s>>c;

        ll a[26]{};
        for(int i=0;i<s.length();++i)
        {
            a[s[i]-'A']++;
        }
        string s2;
        ll swa=-1,cur=-1,ind=-1;
        for(int i=0;i<s.length();++i)
        {
            a[s[i]-'A']--;
            for(int j=0;j<26;++j)
            {
                //cout<<s[i]<<" "<<int(s[i]-'A')<<endl;
                ll h=int(s[i]-'A');
                //cout<<h<<endl;
                if(h>j)
                {
                    if(a[j]>=1)
                    {
                        //cout<<"Yes"<<endl;
                        swa=j;
                        cur=i;
                        break;
                    }
                }
            }
            if(swa==-1) s2+=s[i];
            else
            {
                s2+=('A'+swa);
                //cout<<"  "<<char('A'+swa)<<endl;
                for(int j=cur+1;j<s.length();++j)
                {
                    if(s[j]==char(swa+'A')) ind=j;
                }
                for(int j=cur+1;j<s.length();++j)
                {
                    if(j==ind) s2+=s[cur];
                    else s2+=s[j];
                    //cout<<s2<<endl;
                }
                break;
            }
            //cout<<s2<<endl;
        }
        //cout<<s2<<endl;
        ll flag=0;
        for(int i=0;i<min(s2.length(),c.length());++i)
        {
            ll one=int(s2[i]-'A');
            ll two=int(c[i]-'A');
            if(one<two)
            {
                cout<<s2<<endl;
                flag=1;
                break;
            }
            else if(one>two)
            {
                cout<<"---"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0 && c.length()<=s2.length()) cout<<"---"<<endl;
        else if(flag==0) cout<<s2<<endl;
    }

	return 0;
}
