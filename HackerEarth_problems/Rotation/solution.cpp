#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    int n,count=0;
    string s,t;
    cin>>n;
    cin>>s;
    cin>>t;
    if(s.compare(t) ==0) // check if both the strings are same or not
       cout<<0<<endl;
    else
    {
        for(int i=n-1;i>=0;i--)
 
        {
            count++;
            s.erase(0,1); // remove start character from string s
            t.erase(i,1); // remove last character from string t
            if(s.compare(t)==0) // if botth the strings are same then break
                break;
        }
        cout<<count<<endl; // print the minimum number to convert s to t.
    }
 
 
}