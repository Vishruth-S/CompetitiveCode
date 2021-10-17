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

        ll a,sum=0,maxi=0;
        for(int i=0;i<n;++i){
            cin>>a;
            sum += a;
            maxi += ceil(double(a)/x);
        }
        ll mini = ceil(double(sum)/x);
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
