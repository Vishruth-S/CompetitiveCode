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

        ll a,sum=0,cursum=0;
        for(int i=0;i<n;++i){
            cin>>a;
            if(cursum+a>sum){
                sum = cursum+a;
            }
            cursum += a;
        }

        ll m;
        cin>>m;

        ll b,sum2=0;
        cursum=0;
        for(int i=0;i<m;++i){
            cin>>b;
            if(cursum+b>sum2){
                sum2 = cursum+b;
            }
            cursum += b;
        }

        cout<<sum+sum2<<endl;
    }
    return 0;
}
