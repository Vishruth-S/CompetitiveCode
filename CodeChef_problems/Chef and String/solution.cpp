#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;     //Input of a String containing x or y letters
        int i,c=0;
        for(i=0;i<s.length();i++)
        {
            if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x'))
                {
                    c++;
                    i++;
                }
        }
        cout<<c<<endl;

    }
    return 0;

}
