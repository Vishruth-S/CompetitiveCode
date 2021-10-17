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
        
        ll a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        
        ll ans[n]{};
        
        ll maxi = INT_MIN;
        
        for(int i=n-1;i>=0;--i){
            if((i+a[i])>(n-1)){
                ans[i] = a[i];
            }
            else{
                ans[i] = a[i] + ans[i+a[i]]; 
            }
            maxi = max(maxi,ans[i]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
