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

        ll a,ones=0,two=0;
        for(int i=0;i<n;++i){
            cin>>a;
            if(a == 1){
                ones++;
            }
            else two++;
        }
        if(ones%2 == 1){
            cout<<"NO"<<endl;
        }
        else{
            if(ones==0) {
                if(two%2==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
