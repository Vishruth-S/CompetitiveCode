#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+') ans++;
        else
        {
            if(ans!=0) ans--;
        }
    }
    cout<<ans<<endl;
}
