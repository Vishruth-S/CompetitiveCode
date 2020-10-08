#include <bits/stdc++.h>
using namespace std;

// int ans;
int check(int start, string& str,int flag)
{
    if((str.size()-start)%2==1)
    return -1;
    if(flag==1)
    {
        string s1 = str.substr(start,(str.size()-start)/2);
        string s2 = str.substr(start+(str.size()-start)/2,(str.size()-start)/2);
        if(s1.size()==0 || s1.compare(s2)!=0)
        return -1;
        else
        return 1;
    }
    int ans=0;
    string s1="";
    for(int i=start;i<start+(str.size()-start)/2;i++)
    {
        s1+=str[i];
        int f=0;
        for(int x=0,y=s1.size();x<=s1.size()/2;x++,y++)
        {
            if(s1[x]!=str[y] || s1[s1.size()-1-x]!=str[2*s1.size()-1-x])
            {
                f=1;break;
            }
        }
        if(f==0)
        {
            if(flag==0)
            {
                int x= check(2*s1.size(),str,1);
                if(x!=-1)
                ans++;
            }
            else if(s1.size()>0 && s1.size()==(str.size()-start)/2)
            return 1;
        }
    }
    return (ans!=0)?ans:-1;
}

int main() {
	int n;
	cin>>n;
	for(int p=1;p<=n;p++)
	{
	    string str;
	   // ans=0;
	    cin>>str;
	    int y=check(0,str,0);
	    if(y!=-1)
	    {
	        if(p!=n)
	        cout<<y<<endl;
	        else
	        cout<<y;
	       // break;
	    }
	    else
	    {
	        if(p!=n)
	        cout<<0<<endl;
	        else
	        cout<<0;
	    }
	}
	return 0;
}
