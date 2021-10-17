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
        ll n,m;
        cin>>n>>m;

        ll a,cur=1,sum=0;
        for(int i=0;i<m;++i){
            cin>>a;
            if(a>=cur){
                sum += a-cur;
                cur=a;
            }
            else{
                sum += (n-cur+1)+(a-1);
                cur=a;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
