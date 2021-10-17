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
        ll n,m,k;
        cin>>n>>m>>k;

        ll a[m+1];
        for(int i=0;i<=m;++i){
            cin>>a[i];
        }
        ll fed=a[m],friendsCount=0;
        for(int i=0;i<m;++i){
            ll temp=fed,c=0;
            while(a[i]>0 || temp>0){
                if(a[i]%2 != temp%2){
                    c++;
                }
                a[i]/=2;
                temp/=2;
            }
            if(c<=k) friendsCount++;
        }
        cout<<friendsCount<<endl;
    }
    return 0;
}
