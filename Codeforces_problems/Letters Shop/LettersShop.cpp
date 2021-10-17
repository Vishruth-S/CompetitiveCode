#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    string s;
    cin>>s;

    vector<int> v[26];
    for(int i=0;i<s.length();++i)
    {
        v[s[i]-'a'].push_back(i+1);
    }
    /*for(int i=0;i<26;++i)
    {
        for(int j=0;j<v[i].size();++j)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int m;
    cin>>m;

    while(m--)
    {
        string t;
        cin>>t;
        int a[26]={};
        for(int i=0;i<t.length();++i)
        {
            a[t[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;++i)
        {
            //cout<<ans<<endl;
            if(a[i]-1>=0 && v[i][a[i]-1]>ans) ans=v[i][a[i]-1];
        }

        cout<<ans<<endl;
    }
    return 0;
}

