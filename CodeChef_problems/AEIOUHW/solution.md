#include <iostream>
using namespace std;

int fact(int num)
{
    if (num==0)
        return 1;
    else
        return num*fact(num-1);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {   int p,q;
        string s;
        cin>>s;
        cin>>p>>q;
        int con=0,vow=0;
        for(int k=0;k<s.length();k++)
        {   if(s[k]=='a' || s[k]=='e' || s[k]=='i' || s[k]=='o' || s[k]=='u' || s[k]=='A' || s[k]=='E' || s[k]=='I' || s[k]=='O' || s[k]=='U')
                vow++;
            else 
                con++;
        }
        
        long int x1=fact(p);
        long int  y1=fact(con);
        long int  z1=fact(con-p);
        long int  a1= y1/(x1*z1);
        long int  x2=fact(q);
        long int y2=fact(vow);
       long int z2=fact(vow-q);
       long int  a2= y2/(x2*z2);
        
      long int ans=a1*a2*fact(p+q);
        cout<<ans<<endl;
    }
	return 0;
}