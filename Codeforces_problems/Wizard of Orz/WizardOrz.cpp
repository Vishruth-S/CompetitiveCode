#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        string s;

        if(n==1) cout<<9<<endl;
        else if(n==2) cout<<98<<endl;
        else{
            ll num = 9;
            string s = "98";
            for(int i=2;i<n;++i){
                s += char(num+'0');
                num++;
                if(num==10) num = 0;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
