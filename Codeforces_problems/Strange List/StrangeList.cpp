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
        ll n,x;
        cin>>n>>x;

        ll a[n],arrsum = 0;
        for(int i=0;i<n;++i){
            cin>>a[i];
            arrsum+=a[i];
        }
        ll minInd = INT_MAX;
        ll maxi = INT_MAX;
        for(int i=0;i<n;++i){
            ll num = a[i];
            ll curcount = 0;

            while(num%x == 0){
                curcount++;
                num /= x;
            }
            if(curcount<maxi){
                maxi = curcount;
                minInd = i;
            }
        }
        ll sum = (maxi+1)*arrsum;
        for(int i=0;i<minInd;++i){
            sum += a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
