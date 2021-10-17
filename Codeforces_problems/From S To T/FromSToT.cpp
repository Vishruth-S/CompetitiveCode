#include <iostream>
#include<algorithm>
using namespace std;

int orderCheck(string s,string t,int m,int n)
{
    if(m==0) return 1;
    if(n==0) return 0;
    if(s[m-1]==t[n-1])
    {
        return orderCheck(s,t,m-1,n-1);
    }
    else
    {
        return orderCheck(s,t,m,n-1);
    }
}

/*int isSubSequence(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return 1; 
    if (n == 0) return 0; 
  
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSequence(str1, str2, m-1, n-1); 
  
    // If last characters are not matching 
    return isSubSequence(str1, str2, m, n-1); 
} 
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    while(q--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        int order=orderCheck(s,t,s.length(),t.length());
        if(order==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int a[26]={},b[26]={},c[26]={};
        for(int i=0;i<s.length();++i)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.length();++i)
        {
            b[t[i]-'a']++;
        }
        for(int i=0;i<p.length();++i)
        {
            c[p[i]-'a']++;
        }
        int flag=0;
        for(int i=0;i<26;++i)
        {
            if(a[i]+c[i]<b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
