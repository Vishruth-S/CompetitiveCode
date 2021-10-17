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
        ll n,l;
        cin>>n>>l;

        double a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a,a+n);
        double maxi = max(a[0],l-a[n-1]);
        for(int i=1;i<n;++i){
            maxi = max(maxi,(a[i]-a[i-1])/2.0);
        }
        cout<< fixed << setprecision(10)<<maxi<<endl;
    }
    return 0;
}
