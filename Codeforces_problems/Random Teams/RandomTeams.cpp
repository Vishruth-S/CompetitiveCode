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

        ll maxi = ((n-m+1)*(n-m))/2;
        ll numberOfExtra = n%m;
        ll basicValue = n/m;
        ll mini = (m-numberOfExtra)*(((basicValue)*(basicValue-1))/2) + (numberOfExtra)*(((basicValue+1)*(basicValue-1+1))/2);

        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
