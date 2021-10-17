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
        ll c1,c2,c3;
        cin>>c1>>c2>>c3;

        ll a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a3>>a4>>a5;

        c1 -= a1;
        c2 -= a2;
        c3 -= a3;

        if(c1<0 || c2<0 || c3<0){
            cout<<"NO"<<endl;
        }
        else{
            a4 = max(ll(0),a4-c1);
            c1 = 0;
            a5 = max(ll(0),a5-c2);
            c2 = 0;

            if(a4+a5<=c3){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}
