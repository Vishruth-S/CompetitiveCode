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
        ll w,h,n;
        cin>>w>>h>>n;

        int count = 1;

        while(w%2 == 0){
            w/=2;
            count*=2;
        }
        while(h%2 == 0){
            h/=2;
            count*=2;
        }
        if(count>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
